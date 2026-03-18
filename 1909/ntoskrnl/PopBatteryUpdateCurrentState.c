/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140749894
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopCurrentPowerStatePrecise @ 0x140749860 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400F8900 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x140171F50 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140443328; qword_140443328 + 50000000 <= v3; i = qword_140443328 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140443330, &qword_140443328, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
