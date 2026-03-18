/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C0140B10
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C00E670C (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C00E67D8 (rimAbIsPointInPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0105DD4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0107D9C (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C010816C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetGetUserHandedness()
{
  __int64 v0; // rcx

  if ( (int)IsGetUserHandednessSupported() < 0 )
    return 1LL;
  else
    return GetUserHandedness(v0);
}
