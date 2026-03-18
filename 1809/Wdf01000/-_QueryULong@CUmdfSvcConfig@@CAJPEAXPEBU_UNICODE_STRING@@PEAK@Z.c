/*
 * XREFs of ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0090F7C
 * Callers:
 *     ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x1C0090BE4 (-GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z.c)
 *     ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0090CCC (-IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 */

__int64 __fastcall CUmdfSvcConfig::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS v4; // edx
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  v4 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147483643) && *(_DWORD *)&buffer[4] != 4 )
    v4 = -1073741788;
  if ( v4 >= 0 )
    *Value = *(_DWORD *)&buffer[12];
  return (unsigned int)v4;
}
