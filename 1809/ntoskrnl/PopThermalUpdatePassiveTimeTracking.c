/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x1406DE0B4
 * Callers:
 *     PopThermalSxEntry @ 0x140142634 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x1402D6AF8 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x1402DC640 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1408686B0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140868AB0 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
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
