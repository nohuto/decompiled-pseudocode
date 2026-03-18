/*
 * XREFs of MiReleaseImageSection @ 0x1401318B0
 * Callers:
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  KIRQL v4; // al
  __int64 v5; // r14
  KIRQL v6; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v5 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  v6 = v4;
  *(_DWORD *)(a2 + 56) &= ~2u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  KeAbPostRelease(v2 + 16);
  return v5;
}
