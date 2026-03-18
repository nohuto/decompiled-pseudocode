/*
 * XREFs of MiAssignInitialPageAttribute @ 0x140197040
 * Callers:
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemoryLarge @ 0x14018D158 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 v4; // bl
  char result; // al
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (struct _KTHREAD *)qword_140465F48 == KeGetCurrentThread() )
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
