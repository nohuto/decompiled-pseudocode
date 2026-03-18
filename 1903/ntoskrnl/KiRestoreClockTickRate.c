/*
 * XREFs of KiRestoreClockTickRate @ 0x14011297C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033A00 (KeResumeClockTimerFromIdle.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x14015ECE0 (KiResumeClockTimer.c)
 * Callees:
 *     KiSetPendingTick @ 0x140113054 (KiSetPendingTick.c)
 *     KiGetClockIntervalOneShot @ 0x140113084 (KiGetClockIntervalOneShot.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiRestoreClockTickRate(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 ClockIntervalOneShot; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rcx

  v2 = a2;
  if ( KiClockOwnerOneShotRequestState )
  {
    ClockIntervalOneShot = (unsigned int)KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, a1);
    v4 = 1LL;
  }
  else
  {
    ClockIntervalOneShot = (unsigned int)KiLastRequestedTimeIncrement;
    v4 = 0LL;
  }
  v5 = off_1404245D0[0];
  *v2 = ClockIntervalOneShot;
  ((void (__fastcall *)(__int64))v5)(v4);
  LOBYTE(v6) = 1;
  return KiSetPendingTick(v6);
}
