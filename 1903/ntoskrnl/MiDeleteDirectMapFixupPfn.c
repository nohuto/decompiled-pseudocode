/*
 * XREFs of MiDeleteDirectMapFixupPfn @ 0x1402DDF68
 * Callers:
 *     MiFreeRelocations @ 0x14072A130 (MiFreeRelocations.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteDirectMapFixupPfn(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int8 v3; // si
  char v4; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = (volatile signed __int64 *)(a1 + 24);
  v3 = MiLockPageInline(a1);
  v4 = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v4;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
  _InterlockedAnd64(v2, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
