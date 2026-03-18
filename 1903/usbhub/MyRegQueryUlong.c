/*
 * XREFs of MyRegQueryUlong @ 0x1C0060870
 * Callers:
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005FA94 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005FDC0 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C005FEBC (ReadTestOverrideValue.c)
 *     UpdateUcmIsPresentBit @ 0x1C00601C8 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 */

__int64 __fastcall MyRegQueryUlong(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-40h] BYREF
  __int64 KeyValueInformation; // [rsp+48h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]

  KeyValueInformation = 0LL;
  v10 = 0LL;
  v11 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v5 >= 0 )
  {
    if ( (_DWORD)v10 == 4 )
      *a3 = HIDWORD(v10);
    else
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
