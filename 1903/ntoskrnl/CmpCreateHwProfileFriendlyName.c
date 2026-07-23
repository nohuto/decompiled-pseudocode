/*
 * XREFs of CmpCreateHwProfileFriendlyName @ 0x140835168
 * Callers:
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     wcscpy_s @ 0x1401A6530 (wcscpy_s.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeGetBugMessageText @ 0x1402A8AB4 (KeGetBugMessageText.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall CmpCreateHwProfileFriendlyName(void *a1, char a2, unsigned int a3, UNICODE_STRING *a4)
{
  unsigned int v9; // edi
  const WCHAR *v10; // rdx
  unsigned __int16 v11; // cx
  wchar_t *Buffer; // rsi
  NTSTATUS v13; // ebx
  int v14; // ecx
  ULONG Length[2]; // [rsp+20h] [rbp-E0h]
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  ANSI_STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v22; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[80]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v22.Length = 0LL;
  v22.Buffer = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a2 & 3) == 3 )
      goto LABEL_9;
    if ( (a2 & 2) != 0 )
    {
      v9 = 1073807362;
      v10 = L"Docked";
      goto LABEL_10;
    }
    if ( (a2 & 1) == 0 )
    {
LABEL_9:
      v9 = 1073807363;
      v10 = L"Unknown";
    }
    else
    {
      v9 = 1073807361;
      v10 = L"Undocked";
    }
LABEL_10:
    RtlInitUnicodeString(&DestinationString, v10);
    if ( KeGetBugMessageText(v9, (__int64)&SourceString)
      && RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
    {
      v11 = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length > 4u )
      {
        v11 = UnicodeString.Length - 4;
        UnicodeString.Length = v11;
        UnicodeString.Buffer[(unsigned __int64)v11 >> 1] = 0;
      }
      if ( (unsigned __int64)v11 + 12 <= 0xA0 )
      {
        RtlInitUnicodeString(&v22, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v22;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v13 >= 0 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && KeyValueInformation[1] == 4 )
          {
            v14 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
          }
          else
          {
            v14 = 1;
          }
          Data = v14;
          v13 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
          if ( v13 >= 0 )
          {
            if ( v9 == 1073807363 || Data > 1 )
            {
              Length[0] = Data;
              swprintf_s(Dst, 0x50uLL, L"%s %u", Buffer, *(_QWORD *)Length);
            }
            else
            {
              wcscpy_s(Dst, 0x50uLL, Buffer);
            }
          }
        }
        else
        {
          KeyHandle = 0LL;
        }
      }
      else
      {
        v13 = -1073741823;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( v13 >= 0 )
        goto LABEL_31;
    }
  }
  Dst[0] = 0;
  swprintf_s(Dst, 0x50uLL, L"%04d", a3);
  v13 = 0;
LABEL_31:
  if ( !RtlCreateUnicodeString(a4, Dst) )
    return (unsigned int)-1073741823;
  return (unsigned int)v13;
}
