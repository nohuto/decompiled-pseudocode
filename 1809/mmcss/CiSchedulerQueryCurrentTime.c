/*
 * XREFs of CiSchedulerQueryCurrentTime @ 0x1C0002A10
 * Callers:
 *     CiSchedulerSleep @ 0x1C0001C90 (CiSchedulerSleep.c)
 * Callees:
 *     <none>
 */

__int64 CiSchedulerQueryCurrentTime()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( CiSchedulerWaitStatus == 257 )
    return KeQueryInterruptTimePrecise(&v1);
  else
    return MEMORY[0xFFFFF78000000008];
}
