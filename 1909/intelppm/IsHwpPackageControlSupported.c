/*
 * XREFs of IsHwpPackageControlSupported @ 0x1C0006B1C
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C0006670 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
 */

bool IsHwpPackageControlSupported()
{
  char v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v2[0] = 0LL;
  v2[1] = 0LL;
  v0 = 0;
  v3[0] = 0LL;
  v3[1] = 0LL;
  GetCpuIdInfo(0, v2);
  if ( LODWORD(v2[0]) >= 6 )
  {
    GetCpuIdInfo(6u, v3);
    return (v3[0] & 0x880) == 2176;
  }
  return v0;
}
