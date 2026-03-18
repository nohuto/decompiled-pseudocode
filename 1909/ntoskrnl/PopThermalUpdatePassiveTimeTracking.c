/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x1407292C0
 * Callers:
 *     PopThermalSxEntry @ 0x140166CE0 (PopThermalSxEntry.c)
 *     PopCoolingSxTransition @ 0x1401671AC (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x1402F0D48 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x1402F7B00 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x14077BFF0 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1408A31A0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1408A33F8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408A35D8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
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
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
