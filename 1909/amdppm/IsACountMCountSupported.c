/*
 * XREFs of IsACountMCountSupported @ 0x1C0001A7C
 * Callers:
 *     InitDriver @ 0x1C0035008 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000DF80 (GetCpuIdInfo.c)
 */

bool IsACountMCountSupported()
{
  char v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]

  v2[0] = 0LL;
  v2[1] = 0LL;
  v0 = 0;
  v3 = 0LL;
  v4 = 0LL;
  GetCpuIdInfo(0LL, v2);
  if ( LODWORD(v2[0]) >= 6 )
  {
    GetCpuIdInfo(6LL, &v3);
    return (v4 & 1) != 0;
  }
  return v0;
}
