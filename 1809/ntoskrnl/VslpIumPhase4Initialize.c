/*
 * XREFs of VslpIumPhase4Initialize @ 0x140193150
 * Callers:
 *     VslInitSystem @ 0x1409DF5F0 (VslInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     VslpIumInitializeTelemetry @ 0x1409DF60C (VslpIumInitializeTelemetry.c)
 */

NTSTATUS VslpIumPhase4Initialize()
{
  NTSTATUS result; // eax
  _BYTE v1[112]; // [rsp+30h] [rbp-88h] BYREF

  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    result = VslpEnterIumSecureMode(2u, 1LL, 0, (__int64)v1);
    if ( result < 0 )
      KeBugCheckEx(0x6Fu, result, 3uLL, 0LL, 0LL);
  }
  return result;
}
