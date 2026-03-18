/*
 * XREFs of MiAssignInitialPageAttribute @ 0x140196860
 * Callers:
 *     MiFillSystemPtes @ 0x14002FC70 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x14011915C (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemoryLarge @ 0x14018C8D8 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 v4; // bl
  char result; // al
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (struct _KTHREAD *)qword_140466248 == KeGetCurrentThread() )
    v4 = 17;
  else
    v4 = MiLockPageInline(a1);
  result = *(_BYTE *)(a1 + 34);
  if ( (result & 0xC0) == 0xC0 )
  {
    result = (a2 << 6) | result & 0x3F;
    *(_BYTE *)(a1 + 34) = result;
  }
  if ( v4 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
