/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x18008C310
 * Callers:
 *     RtlpWnfNotificationThread @ 0x1800065D0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008C460 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfSetRetryTimer @ 0x18008C3C4 (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 Value; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Value = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180166090 + 8));
  v2 = (_RTL_SRWLOCK *)qword_180166090;
  v3 = *(_RTL_SRWLOCK **)(qword_180166090 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_180166090 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( v3[12].0 == 2 && (!Value || v3[13].Value < Value) )
      {
        Value = v3[13].Value;
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)qword_180166090;
      v3 = (_RTL_SRWLOCK *)v3->Value;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_180166090 + 16) );
    if ( v1 )
    {
      RtlpWnfSetRetryTimer(Value);
      v2 = (_RTL_SRWLOCK *)qword_180166090;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
