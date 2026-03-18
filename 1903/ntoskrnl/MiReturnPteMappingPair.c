/*
 * XREFs of MiReturnPteMappingPair @ 0x1402E8B10
 * Callers:
 *     MiSlowRotateCopy @ 0x1402C739C (MiSlowRotateCopy.c)
 * Callees:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPteMappingPair(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 result; // rax
  _QWORD *MmInternal; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_BYTE *)(a1 + 8);
  if ( v1 == 17 )
    return MiReleasePtes((__int64)&qword_1404669C0, *(_QWORD *)(a1 + 16), 2u);
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
