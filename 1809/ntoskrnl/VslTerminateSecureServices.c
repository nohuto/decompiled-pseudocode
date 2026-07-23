/*
 * XREFs of VslTerminateSecureServices @ 0x1401B3D90
 * Callers:
 *     HvlEnterSleepState @ 0x140273EE0 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(2u, 249LL, 0, (__int64)v1);
}
