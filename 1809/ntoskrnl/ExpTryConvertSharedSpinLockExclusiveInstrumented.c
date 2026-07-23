/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14031C5D8
 * Callers:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1401192D0 (ExTryConvertSharedSpinLockExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     PerfLogSpinLockAcquire @ 0x140313CB4 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x140313D28 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v6; // bp
  unsigned __int64 v7; // rax
  int InterruptCount; // r15d
  int v9; // r14d
  __int64 v10; // rdx
  volatile signed __int32 v11; // eax
  bool v12; // zf
  unsigned __int32 v13; // eax
  int v14; // esi
  __int64 v15; // rax
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v17;
    v6 = 0;
    InterruptCount = v17;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = *(unsigned int *)a1;
  v11 = *a1;
  LODWORD(v17) = 0;
  if ( (v11 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v10 & 0x40000000) == 0 )
      {
        v13 = _InterlockedCompareExchange(a1, v10 | 0x40000000, v10);
        v12 = (_DWORD)v10 == v13;
        v10 = v13;
        if ( !v12 )
          continue;
      }
      KeYieldProcessorEx(&v17, v10, a3);
      v10 = *(unsigned int *)a1;
    }
    while ( (v10 & 0xBFFFFFFF) != 0x80000001 );
  }
  v14 = v17;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v17;
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  if ( v6 )
  {
    PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
    v15 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v15, v15 - v9, v14, InterruptCount, 4);
  }
  return 1LL;
}
