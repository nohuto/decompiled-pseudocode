/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140186410
 * Callers:
 *     PopThermalZoneAdd @ 0x140745810 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x140745A48 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408676AC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140867850 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14086C640 (PopThermalZoneRemove.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1400FAF70 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
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
