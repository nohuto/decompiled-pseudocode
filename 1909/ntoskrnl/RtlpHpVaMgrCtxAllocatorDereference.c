/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x14016925C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14015A4CC (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  volatile LONG *v2; // rbp
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2144));
  if ( (*(_WORD *)(v4 + 42))-- == 1 )
  {
    memset((void *)v4, 0, 0x30uLL);
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2152);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
