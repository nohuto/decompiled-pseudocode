/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140186550
 * Callers:
 *     PopThermalZoneAdd @ 0x140746A00 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x140746C38 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140868AB0 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
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
