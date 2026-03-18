/*
 * XREFs of MiFreeLargePagesFinish @ 0x1402DF820
 * Callers:
 *     MiStartDpcGang @ 0x1402E86DC (MiStartDpcGang.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiGetLeafPfnBuddy @ 0x14013D5BC (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageCharges @ 0x1402DF478 (MiFreeLargePageCharges.c)
 */

unsigned __int64 __fastcall MiFreeLargePagesFinish(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int8 v5; // bp
  unsigned __int64 LeafPfnBuddy; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1;
  v2 = 0LL;
  v3 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  do
  {
    v4 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex(v1)];
    v5 = MiLockPageInline(v1);
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)v1);
    MiInsertLargePageInNodeList((v1 + 0x58000000000LL) / 48, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
    v2 += v4;
    v1 = LeafPfnBuddy;
  }
  while ( LeafPfnBuddy );
  return MiFreeLargePageCharges(v3, v2, v2);
}
