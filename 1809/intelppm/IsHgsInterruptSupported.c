/*
 * XREFs of IsHgsInterruptSupported @ 0x1C00030D0
 * Callers:
 *     ConnectHwpInterrupt @ 0x1C00067F0 (ConnectHwpInterrupt.c)
 *     InitDriver @ 0x1C0036E5C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004C40 (GetCpuIdInfo.c)
 */

bool IsHgsInterruptSupported()
{
  char v0; // bl
  unsigned int v2[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v3[4]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(0LL, v2);
  if ( v2[0] >= 6 )
  {
    GetCpuIdInfo(6LL, v3);
    return (v3[0] & 0x80000) != 0;
  }
  return v0;
}
