/*
 * XREFs of VslpIumPhase4Initialize @ 0x14019DB2C
 * Callers:
 *     VslInitSystem @ 0x140A219A4 (VslInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PoDisableSleepStates @ 0x1408A4740 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140A219C0 (VslpIumInitializeTelemetry.c)
 */

NTSTATUS VslpIumPhase4Initialize()
{
  NTSTATUS result; // eax
  _BYTE v1[16]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v2[28]; // [rsp+40h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    result = VslpEnterIumSecureMode(2, 1LL, 0LL, (__int64)v2);
    if ( result < 0 )
      KeBugCheckEx(0x6Fu, result, 3uLL, 0LL, 0LL);
    if ( v2[4] < 0 )
      return PoDisableSleepStates(1LL, 8LL, v1);
  }
  return result;
}
