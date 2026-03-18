/*
 * XREFs of PopThermalUpdateActiveTimeTracking @ 0x140746C58
 * Callers:
 *     PopThermalSxEntry @ 0x140167290 (PopThermalSxEntry.c)
 *     PopCoolingSxTransition @ 0x14016775C (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x1402F0FE8 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x1402F8050 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 *     PoSetThermalActiveCooling @ 0x14077F640 (PoSetThermalActiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408A3D98 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408A8FB0 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdateActiveTimeTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    a2 = (unsigned __int8)a2;
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      result = *(unsigned __int8 *)(a1 + 1);
      if ( (unsigned int)a2 >= (unsigned int)result )
        break;
      *(_QWORD *)(a1 + 8 * a2 + 360) += v3;
      a2 = (unsigned int)(a2 + 1);
    }
    *(_QWORD *)(a1 + 520) += v3;
    *(_QWORD *)(a1 + 16) = v2;
  }
  return result;
}
