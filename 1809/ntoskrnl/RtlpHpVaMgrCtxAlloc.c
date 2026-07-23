/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x14000D2EC
 * Callers:
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140141658 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rdi
  volatile LONG *v9; // rbx
  KIRQL v10; // si

  v4 = *a4;
  if ( (_DWORD)v4 == -1 )
  {
    v9 = (volatile LONG *)(a1 + 96);
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 96));
    v7 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    __writecr8(v10);
  }
  else
  {
    v7 = 48 * v4 + a1 + 112;
  }
  return RtlpHpVaMgrAlloc(v7);
}
