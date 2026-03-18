/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x14018B990
 * Callers:
 *     PopThermalZoneAdd @ 0x14075A950 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14075AB90 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408A3D98 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408A8FB0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     KeCancelTimer2 @ 0x140113E70 (KeCancelTimer2.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
