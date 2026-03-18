/*
 * XREFs of WriteTiltCalibrationData @ 0x1C019E0A8
 * Callers:
 *     _SetCalibrationData @ 0x1C01A37C0 (_SetCalibrationData.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C006980C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C0069934 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C019CD78 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 */

_BOOL8 __fastcall WriteTiltCalibrationData(struct _UNICODE_STRING *a1, unsigned int a2, ULONG a3, void *a4)
{
  struct _UNICODE_STRING v4; // xmm0
  __int64 v5; // rdi
  int TiltKeyName; // ebx
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  char v16; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *a1;
  v5 = a2;
  SourceString = 0LL;
  v11 = v4;
  TiltKeyName = GetTiltKeyName(&v11, (unsigned __int16 **)&SourceString);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_DWORD *)&v11.Length = 91750400;
    v11.Buffer = (PWSTR)&v16;
    TiltKeyName = RtlUnicodeStringCopy(&v11, (PCUNICODE_STRING)(grpWinStaList + 168LL));
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(&v11, off_1C02D57E0[v5]);
      if ( TiltKeyName >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v11;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        TiltKeyName = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( TiltKeyName >= 0 )
        {
          TiltKeyName = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a4, a3);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool(SourceString);
  }
  return TiltKeyName >= 0;
}
