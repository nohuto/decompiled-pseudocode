/*
 * XREFs of VslTerminateSecureServices @ 0x1401B3EF0
 * Callers:
 *     HvlEnterSleepState @ 0x140273CF0 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

NTSTATUS VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(2u, 249LL, 0, (__int64)v1);
}
