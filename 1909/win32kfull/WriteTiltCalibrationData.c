/*
 * XREFs of WriteTiltCalibrationData @ 0x1C01D2EA0
 * Callers:
 *     _SetCalibrationData @ 0x1C01D8778 (_SetCalibrationData.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C005B54C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C005B720 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01D1A34 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 */

_BOOL8 __fastcall WriteTiltCalibrationData(struct _UNICODE_STRING *a1, unsigned int a2, ULONG a3, void *a4)
{
  struct _UNICODE_STRING v4; // xmm6
  __int64 v6; // rdi
  int TiltKeyName; // ebx
  ULONG v9; // r8d
  struct _UNICODE_STRING v11; // [rsp+48h] [rbp-C0h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  ULONG Disposition[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  char v17; // [rsp+B8h] [rbp-50h] BYREF

  v4 = *a1;
  v6 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  SourceString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v11 = v4;
  TiltKeyName = GetTiltKeyName(&v11, (unsigned __int16 **)&SourceString);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_QWORD *)&v11.Length = 91750400LL;
    v11.Buffer = (PWSTR)&v17;
    TiltKeyName = RtlUnicodeStringCopy(&v11, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL), v9);
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(&v11, off_1C02D80B8[v6]);
      if ( TiltKeyName >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v11;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        TiltKeyName = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, Disposition);
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
