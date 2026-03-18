/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140747994
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     PopCurrentPowerStatePrecise @ 0x140747960 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x140176E10 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_1404433A8; qword_1404433A8 + 50000000 <= v3; i = qword_1404433A8 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_1404433B0, &qword_1404433A8, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
