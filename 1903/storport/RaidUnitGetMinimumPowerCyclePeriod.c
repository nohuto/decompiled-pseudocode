/*
 * XREFs of RaidUnitGetMinimumPowerCyclePeriod @ 0x1C0006A08
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00068E8 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000E5DC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00106A0 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitGetMinimumPowerCyclePeriod(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1488);
  if ( !v1 )
    return 300000LL;
  v2 = *(_DWORD **)(v1 + 8);
  if ( !v2 )
    return 300000LL;
  if ( *v2 != 3 )
    return 300000LL;
  result = (unsigned int)v2[5];
  if ( !(_DWORD)result )
    return 300000LL;
  return result;
}
