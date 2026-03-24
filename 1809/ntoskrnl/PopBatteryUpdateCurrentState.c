/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x14071C1C4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 *     PopCurrentPowerStatePrecise @ 0x14071C190 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140111A10 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x1401762CC (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140417AB0; qword_140417AB0 + 50000000 <= v3; i = qword_140417AB0 )
  {
    PopBatteryQueueWork(1u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140417AB8, &qword_140417AB0, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
