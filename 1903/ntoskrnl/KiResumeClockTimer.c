/*
 * XREFs of KiResumeClockTimer @ 0x14015ECE0
 * Callers:
 *     KeResumeClockTimer @ 0x14015ECCC (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1402A53E4 (KeResumeClockTimerSafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     KiRestoreClockTickRate @ 0x14011297C (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x140113014 (KiEventClockStateChange.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

LONGLONG KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  LONGLONG result; // rax
  __int64 v3; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  result = (unsigned int)KiClockTimerOwner;
  if ( KeGetCurrentPrcb()->Number == KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return result;
  }
  off_1404245C0[0]();
  LOBYTE(v3) = v0;
  result = ((__int64 (__fastcall *)(__int64))off_1404245B8[0])(v3);
  if ( v0 )
  {
    ++dword_14044D2C4;
    KeGetCurrentPrcb()->ClockOwner = 1;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v6);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v5, &v6);
    result = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockTimerNextTickTime = result;
  }
  return result;
}
