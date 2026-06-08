/*
 * XREFs of IsTurboModeSupported @ 0x1C0004130
 * Callers:
 *     SetGV3PerfState @ 0x1C00019D0 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00070D0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00072D0 (SetTurboDisablePolicy.c)
 *     InitDriver @ 0x1C0039268 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
 */

bool IsTurboModeSupported()
{
  bool result; // al
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF

  v1[0] = 0LL;
  v1[1] = 0LL;
  v2[0] = 0LL;
  v2[1] = 0LL;
  GetCpuIdInfo(0LL, v1);
  result = 0;
  if ( LODWORD(v1[0]) >= 6 )
  {
    GetCpuIdInfo(6LL, v2);
    if ( (v2[0] & 2) != 0 )
      return 1;
  }
  return result;
}
