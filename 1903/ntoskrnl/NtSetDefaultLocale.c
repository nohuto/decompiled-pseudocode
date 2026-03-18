/*
 * XREFs of NtSetDefaultLocale @ 0x140743820
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x14017E9D8 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ExCheckFullProcessInformationAccess @ 0x140680204 (ExCheckFullProcessInformationAccess.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  int v2; // ebx
  NTSTATUS result; // eax
  ULONG v5; // ecx
  int v6; // edi
  int *v7; // rdx
  unsigned int i; // r9d
  unsigned __int16 v9; // cx
  unsigned int v10; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // r9d
  _WORD *v14; // r8
  _WORD *v15; // r8
  _WORD *v16; // rdx
  unsigned int v17; // ecx
  __int16 v18; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v22; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v26; // [rsp+ACh] [rbp-5Ch]
  unsigned int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  v2 = DefaultLocaleId;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&v22.Length = 0LL;
  v22.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Handle = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, *(__int64 *)&DefaultLocaleId, &Handle);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Locale");
    RtlInitUnicodeString(&v22, L"Control Panel\\International");
    v5 = 1600;
  }
  else
  {
    result = ExCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Default");
    RtlInitUnicodeString(&v22, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v5 = 576;
  }
  ObjectAttributes.RootDirectory = Handle;
  ObjectAttributes.Attributes = v5;
  ObjectAttributes.ObjectName = &v22;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v2 )
  {
    v6 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
    if ( v6 < 0 )
      goto LABEL_17;
    v13 = v2;
    v14 = (_WORD *)((char *)KeyValueInformation + (UserProfile != 0 ? 16LL : 8LL));
    *v14 = 0;
    v15 = v14 - 1;
    if ( v15 >= KeyValueInformation )
    {
      do
      {
        v16 = v15 - 1;
        v17 = v13 & 0xF;
        v18 = 48;
        if ( v17 > 9 )
          v18 = 55;
        v13 >>= 4;
        *v15-- = v17 + v18;
      }
      while ( v16 >= KeyValueInformation );
    }
    v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, KeyValueInformation, UserProfile != 0 ? 18 : 10);
    goto LABEL_16;
  }
  v6 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength);
    if ( v6 >= 0 )
    {
      if ( v26 == 1 )
      {
        v7 = &v28;
        for ( i = 0; i < v27; v2 = v10 | (16 * v2) )
        {
          v9 = *(_WORD *)v7;
          v7 = (int *)((char *)v7 + 2);
          if ( (unsigned __int16)(v9 - 48) > 9u )
          {
            if ( (unsigned __int16)(v9 - 65) <= 5u )
            {
              v10 = v9 - 55;
            }
            else
            {
              if ( (unsigned __int16)(v9 - 97) > 5u )
                break;
              v10 = v9 - 87;
            }
          }
          else
          {
            v10 = v9 - 48;
          }
          if ( v10 >= 0x10 )
            break;
          i += 2;
        }
      }
      else if ( v26 == 4 && v27 == 4 )
      {
        v2 = v28;
      }
      else
      {
        v6 = -1073741823;
      }
    }
LABEL_16:
    ZwClose(KeyHandle);
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v6 >= 0 )
  {
    if ( UserProfile )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v12 = Process[1].ActiveProcessors.Bitmap[1];
      if ( !v12 || (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        PsDefaultThreadLocaleId = v2;
      else
        *(_DWORD *)(v12 + 96) = v2;
    }
    else
    {
      PsDefaultSystemLocaleId = v2;
    }
  }
  return v6;
}
