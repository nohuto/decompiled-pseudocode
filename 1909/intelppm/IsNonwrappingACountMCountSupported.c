/*
 * XREFs of IsNonwrappingACountMCountSupported @ 0x1C0001CF8
 * Callers:
 *     InitDriver @ 0x1C0039268 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
 */

bool IsNonwrappingACountMCountSupported()
{
  int v0; // r8d
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = 0LL;
  v2[1] = 0LL;
  GetCpuIdInfo(1LL, v2);
  v0 = BYTE1(v2[0]) & 0xF;
  return v0 != 15 && (v0 != 6 || (v2[0] & 0xF0 | (LODWORD(v2[0]) >> 8) & 0xF00) >= 0x2A0);
}
