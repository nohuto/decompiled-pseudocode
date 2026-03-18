/*
 * XREFs of MiZeroSectionObjectPointer @ 0x14013CF74
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  KIRQL v5; // al
  __int64 v6; // r14
  KIRQL v7; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *(_QWORD **)(a1 + 40);
  if ( (a3 & 0x1000000) != 0 )
    v3 += 2;
  KeAbPostRelease((ULONG_PTR)v3);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  v7 = v5;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140464580);
  *v3 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v6;
}
