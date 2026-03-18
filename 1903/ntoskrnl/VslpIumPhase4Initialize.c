/*
 * XREFs of VslpIumPhase4Initialize @ 0x14019D3AC
 * Callers:
 *     VslInitSystem @ 0x140A218C4 (VslInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PoDisableSleepStates @ 0x1408A4F00 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140A218E0 (VslpIumInitializeTelemetry.c)
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
