/*
 * XREFs of MiLookupIoPageNode @ 0x1400F7460
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // di
  unsigned __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockShared(&dword_140466480);
  v3 = (_QWORD *)qword_140466490;
  v4 = v2;
  while ( v3 )
  {
    v5 = v3[5];
    if ( a1 < v5 )
    {
      v3 = (_QWORD *)*v3;
    }
    else
    {
      if ( a1 < v5 + 512 )
        break;
      v3 = (_QWORD *)v3[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140466480);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return v3;
}
