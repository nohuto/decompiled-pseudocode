/*
 * XREFs of KiResumeClockTimer @ 0x1401434AC
 * Callers:
 *     KeResumeClockTimer @ 0x140143498 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x14028E804 (KeResumeClockTimerSafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BAA0 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x1400FCF14 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1400FCFB8 (KiRestoreClockTickRate.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 InterruptTimePrecise; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER v7; // [rsp+40h] [rbp+18h] BYREF

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
  off_1403FE5C0[0]();
  LOBYTE(v3) = v0;
  result = ((__int64 (__fastcall *)(__int64))off_1403FE5B8[0])(v3);
  if ( v0 )
  {
    ++dword_140421664;
    KeGetCurrentPrcb()->ClockOwner = 1;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v7);
    KiRestoreClockTickRate(InterruptTimePrecise, &v6);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v5, &v6);
    result = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
    KiClockTimerNextTickTime = result;
  }
  return result;
}
