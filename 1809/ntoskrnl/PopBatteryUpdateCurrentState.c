/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x14071C1E4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 *     PopCurrentPowerStatePrecise @ 0x14071C1B0 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1401119F0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x1401762AC (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_1404179D0; qword_1404179D0 + 50000000 <= v3; i = qword_1404179D0 )
  {
    PopBatteryQueueWork(1u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_1404179D8, &qword_1404179D0, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
