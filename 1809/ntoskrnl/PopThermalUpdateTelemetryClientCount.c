/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1401863F0
 * Callers:
 *     PopThermalZoneAdd @ 0x140745830 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x140745A68 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408676CC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140867870 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14086C660 (PopThermalZoneRemove.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1400FAF50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[1] = -1LL;
      v2[0] = 0LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
