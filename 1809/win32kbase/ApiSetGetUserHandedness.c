/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C016417C
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C010FFF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C01100CC (rimAbIsPointInPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C012DAE0 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C012F344 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C012F718 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
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
