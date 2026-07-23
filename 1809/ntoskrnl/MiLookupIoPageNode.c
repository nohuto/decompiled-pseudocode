/*
 * XREFs of MiLookupIoPageNode @ 0x140110160
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x14010FF00 (MiInsertPhysicalPteMapping.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9E60 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // di
  unsigned __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockShared(&dword_14043BDC0);
  v3 = (_QWORD *)qword_14043BDD0;
  v4 = v2;
  while ( v3 )
  {
    v5 = v3[5];
    if ( a1 >= v5 )
    {
      if ( a1 < v5 + 512 )
        break;
      v3 = (_QWORD *)v3[1];
    }
    else
    {
      v3 = (_QWORD *)*v3;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043BDC0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return v3;
}
