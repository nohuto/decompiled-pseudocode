/*
 * XREFs of RaidUnitDeviceHealthTelemetrySupported @ 0x1C000C928
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidUnitDeviceHealthTelemetrySupported(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *v3; // rcx
  char v4; // cl
  char v5; // cl
  int v6; // eax

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v1 + 5388) )
    return 0;
  v3 = *(_BYTE **)(a1 + 104);
  if ( !v3 )
    return 0;
  v4 = *v3 & 0x1F;
  if ( v4 )
  {
    if ( v4 != 20 )
      return 0;
  }
  v5 = 1;
  if ( *(_DWORD *)(a1 + 48) != 1 )
    return 0;
  v6 = *(_DWORD *)(v1 + 4356);
  if ( v6 <= 0 || v6 != 8 && v6 > 3 && (v6 <= 9 || v6 > 11 && v6 != 17) )
    return 0;
  return v5;
}
