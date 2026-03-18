/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0103BB0
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0103D58 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0210CA8 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00698B8 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringCopy @ 0x1C0069934 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

NTSTATUS __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  const wchar_t *v8; // rax
  __int64 v9; // r8
  __int16 v10; // di
  __int16 v11; // r10
  size_t v12; // r9
  char *v13; // r11
  NTSTATUS v14; // ecx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-E0h]
  ULONG CreateOptions; // [rsp+28h] [rbp-D8h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  size_t pcchDest; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchDestLength; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *ppszDest; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  if ( !grpWinStaList )
    return -1073741595;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v23;
  result = RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL));
  if ( result >= 0 )
  {
    v7 = RtlUnicodeStringValidateDestWorker(
           &DestinationString,
           &ppszDest,
           &pcchDest,
           &pcchDestLength,
           (const size_t)Class,
           CreateOptions);
    if ( v7 >= 0 )
    {
      v8 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
      v9 = 0x7FFFLL;
      v10 = pcchDestLength;
      v7 = 0;
      v11 = 0;
      v12 = pcchDest - pcchDestLength;
      if ( pcchDest == pcchDestLength )
        goto LABEL_21;
      v13 = (char *)ppszDest
          + 2 * pcchDestLength
          - (_QWORD)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
      while ( v9 && *v8 )
      {
        *(const wchar_t *)((char *)v8 + (_QWORD)v13) = *v8;
        --v9;
        ++v8;
        ++v11;
        if ( !--v12 )
          goto LABEL_19;
      }
      if ( v12 )
        goto LABEL_11;
LABEL_19:
      if ( v9 && *v8 )
LABEL_21:
        v7 = -2147483643;
LABEL_11:
      DestinationString.Length = 2 * (v10 + v11);
    }
    if ( v7 < 0 )
    {
      return v7;
    }
    else
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
      if ( v14 < 0 )
        v14 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
      *a4 = KeyHandle;
      return v14;
    }
  }
  return result;
}
