/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x14015931C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140141460 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a1 + 48LL * *a2;
  v4 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 96), 1);
  if ( (*(_WORD *)(v3 + 154))-- == 1 )
  {
    memset((void *)(v3 + 112), 0, 0x30uLL);
    *(_QWORD *)(v3 + 120) = 0LL;
    *(_QWORD *)(v3 + 128) = 0LL;
    --*(_DWORD *)(a1 + 104);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 96));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
