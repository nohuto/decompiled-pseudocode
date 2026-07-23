/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1402C9BC8
 * Callers:
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiVaToPfn @ 0x140098F50 (MiVaToPfn.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rsi
  int v14; // r12d
  unsigned __int64 v15; // rbx
  LONG *SharedVm; // rbx
  __int64 v18; // rdi
  __int64 v19; // r14
  char v20; // r9
  __int64 v21; // rbx
  __int64 updated; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // rdx
  int v25; // r9d
  __int64 *v26; // r11
  char v27; // r8
  bool v28; // zf
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // bl
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-48h]
  unsigned int v34; // [rsp+20h] [rbp-48h]
  unsigned __int16 *v35; // [rsp+28h] [rbp-40h]
  char PfnPriority; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+30h] [rbp-38h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v37 = v8;
  if ( (v8 & 1) != 0 )
  {
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37);
    v7 = 0xFFFFFFFFFLL;
    v12 = (v11 >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12 - 0x58000000000LL;
    v14 = 1;
    v8 = *(_QWORD *)(v13 + 16);
  }
  else
  {
    v15 = v8;
    if ( qword_14043B180 )
    {
      if ( (v8 & 0x10) != 0 )
        v15 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v15 = v8 & ~qword_14043B180;
    }
    v12 = (v15 >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12 - 0x58000000000LL;
    if ( (*(_BYTE *)(v13 + 34) & 0x20) != 0 )
    {
      v35 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v35, v10, v9, v10);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v35);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v14 = 0;
  }
  v18 = (v8 >> 5) & 0x1F;
  v19 = 48 * a3 - 0x58000000000LL;
  if ( v14 != 1 )
    MiLockNestedPageAtDpcInline(48 * a3 - 0x58000000000LL, v7, v9);
  v20 = -127;
  if ( v14 != 1 )
    v20 = -124;
  MiCopyPage(a3, v12, 0LL, v20);
  if ( !v14 )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v13);
  v34 = *(unsigned __int8 *)(v13 + 34) >> 6;
  if ( v14 == 1 )
  {
    v21 = a3;
    updated = MiSwizzleInvalidPte(32 * ((unsigned int)v18 | ((a3 & 0xFFFFFFFFFLL) << 7) | 0x40));
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(a5);
    v21 = a3;
    updated = MiUpdateTransitionPteFrame(v37, a3);
  }
  v37 = updated;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v25 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v28 = (v27 & 1) == 0;
        goto LABEL_30;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v28 = (v27 & 1) == 0;
LABEL_30:
      if ( !v28 )
        v24 |= 0x8000000000000000uLL;
    }
  }
  *v26 = v24;
  if ( v25 )
    MiWritePteShadow((__int64)v26, v24);
  v29 = MiVaToPfn((__int64)v26);
  MiInitializePfnForOtherProcess(v21, a1, v29, 16);
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v18);
  v30 = MiLockPageInline(v19);
  v31 = *(_BYTE *)(v19 + 34);
  if ( v31 >> 6 != v34 )
  {
    MiChangePageAttribute(v19, v34, 3);
    v31 = *(_BYTE *)(v19 + 34);
  }
  *(_BYTE *)(v19 + 35) ^= (PfnPriority ^ *(_BYTE *)(v19 + 35)) & 7;
  *(_BYTE *)(v19 + 34) = v31 & 0xF8 | 6;
  MiDecrementShareCount(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
  {
    v32 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v32);
  }
  __writecr8(v30);
  return 1LL;
}
