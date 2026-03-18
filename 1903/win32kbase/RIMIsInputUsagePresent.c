/*
 * XREFs of RIMIsInputUsagePresent @ 0x1C0143B48
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C0143C54 (RIMPopulatePointerDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C014532C (rimHidP_GetSpecificValueCaps.c)
 */

_BOOL8 __fastcall RIMIsInputUsagePresent(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v5; // edx
  __int16 v7[8]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v8[80]; // [rsp+50h] [rbp-68h] BYREF

  v7[0] = 1;
  memset(v8, 0, 0x48uLL);
  LOWORD(v5) = 13;
  return (int)rimHidP_GetSpecificValueCaps(0, v5, 0, a3, (__int64)v8, (__int64)v7, a1) >= 0;
}
