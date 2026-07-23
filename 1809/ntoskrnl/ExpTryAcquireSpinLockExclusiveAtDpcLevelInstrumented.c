/*
 * XREFs of ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C4C4
 * Callers:
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x140313CB4 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v2; // r9
  unsigned __int64 v3; // rax
  int InterruptCount; // r11d
  int v5; // r10d
  __int64 v7; // rax
  int v8; // [rsp+48h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v2 = 1;
    v3 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = v3;
  }
  else
  {
    v5 = v8;
    v2 = 0;
    InterruptCount = v8;
  }
  if ( _InterlockedCompareExchange(a1, 0x80000000, 0) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( v2 )
  {
    v7 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v7, v7 - v5, 0, InterruptCount, 3);
  }
  return 1LL;
}
