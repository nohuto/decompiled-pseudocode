/*
 * XREFs of MiIncrementPfn @ 0x140182488
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140165F60 (MiDeleteSessionAddressSpace.c)
 *     MxRelocatePageTables @ 0x1409FC0C0 (MxRelocatePageTables.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIncrementPfn(__int64 a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = MiLockPageInline(a1);
  ++*(_WORD *)(a1 + 32);
  v3 = v2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
