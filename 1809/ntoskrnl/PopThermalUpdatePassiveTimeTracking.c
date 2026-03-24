/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x1406DCE14
 * Callers:
 *     PopThermalSxEntry @ 0x140142534 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x1402D6908 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x1402DC450 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140750F60 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140867450 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1408676AC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140867850 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14086C640 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 16) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
