/*
 * XREFs of MiFreeLargePages @ 0x1402DF914
 * Callers:
 *     MiDoGangAssignment @ 0x1402E845C (MiDoGangAssignment.c)
 * Callees:
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     MiFreeLargePageMemory @ 0x140146738 (MiFreeLargePageMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageCharges @ 0x1402DF718 (MiFreeLargePageCharges.c)
 */

unsigned __int64 __fastcall MiFreeLargePages(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v5; // r13
  unsigned __int8 v6; // r14
  unsigned __int64 LeafPfnBuddy; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r14
  signed __int64 v12; // rax

  v1 = *a1;
  v2 = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  v5 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v1 + 40) >> 40) & 0x3FFLL));
  do
  {
    v6 = MiLockPageInline(v1);
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)v1);
    *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 24) & 0xC000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    v9 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFLL;
    v10 = 2;
    if ( v9 != 0xFFFFFFFFCLL )
      v10 = v9 == 0xFFFFFFFFELL;
    v11 = MiLargePageSizes[v10];
    v12 = MiFreeLargePageMemory((v1 + 0x58000000000LL) / 48, v10, 2);
    if ( v12 >= 0 )
    {
      v2 += v11;
      v3 += v12;
    }
    else
    {
      *(_QWORD *)v1 ^= (*(_QWORD *)v1 ^ ((unsigned __int64)*a1 >> 3)) & 0xFFFFFFFFFFELL;
      *a1 = v1;
    }
    v1 = LeafPfnBuddy;
  }
  while ( LeafPfnBuddy );
  return MiFreeLargePageCharges(v5, v2, v3);
}
