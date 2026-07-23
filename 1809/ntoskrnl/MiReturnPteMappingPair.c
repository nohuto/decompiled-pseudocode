/*
 * XREFs of MiReturnPteMappingPair @ 0x1402CE3F8
 * Callers:
 *     MiSlowRotateCopy @ 0x1402AF728 (MiSlowRotateCopy.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPteMappingPair(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 result; // rax
  _QWORD *MmInternal; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_BYTE *)(a1 + 8);
  if ( v1 == 17 )
    return MiReleasePtes((__int64)&qword_14043C060, *(_QWORD *)(a1 + 16), 2u);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
    v1 = *(_BYTE *)(a1 + 8);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v1;
  __writecr8(v1);
  return result;
}
