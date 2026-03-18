/*
 * XREFs of MiDeleteEnclavePage @ 0x1402D44E8
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x140894018 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateAwePageTable @ 0x1402D7CD8 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int a2)
{
  ULONG_PTR v3; // rdi
  unsigned __int64 v4; // r11
  __int64 v5; // rdx
  int v6; // r8d
  unsigned __int64 v7; // r11
  bool v8; // zf
  __int64 v9; // rbx
  unsigned __int8 v10; // si
  char v11; // dl
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFLL;
  if ( MiPteInShadowRange(v4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_9;
      v8 = (v5 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v8 = (v5 & 1) == 0;
    }
    if ( !v8 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v7 = v5;
  if ( v6 )
    MiWritePteShadow(v7);
  if ( a2 )
    MiUpdateAwePageTable(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v9 = 48 * v3 - 0x58000000000LL;
  v10 = MiLockPageInline(v9);
  v11 = *(_BYTE *)(v9 + 34) & 0xEF;
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v9 + 34) = v11;
  v12 = *(_QWORD *)(v9 + 24);
  *(_WORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 24) = v12 ^ ((v12 - 1) ^ v12) & 0x3FFFFFFFFFFFFFFFLL;
  MiInsertPageInFreeOrZeroedList(v3, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v10;
  __writecr8(v10);
  return result;
}
