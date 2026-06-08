/*
 * XREFs of IsNonwrappingACountMCountSupported @ 0x1C000326C
 * Callers:
 *     InitDriver @ 0x1C0036E5C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004C40 (GetCpuIdInfo.c)
 */

bool IsNonwrappingACountMCountSupported()
{
  int v0; // r8d
  unsigned int v2; // [rsp+20h] [rbp-28h] BYREF

  GetCpuIdInfo(1LL, &v2);
  v0 = BYTE1(v2) & 0xF;
  return v0 != 15 && (v0 != 6 || (v2 & 0xF0 | (v2 >> 8) & 0xF00) >= 0x2A0);
}
