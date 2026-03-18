/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1402E3A90
 * Callers:
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiUpdateTransitionPteFrame @ 0x1400C328C (MiUpdateTransitionPteFrame.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiVaToPfn @ 0x140124DA0 (MiVaToPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  ULONG_PTR v11; // rbx
  __int64 v12; // r14
  int v13; // r12d
  unsigned __int64 v14; // rbx
  LONG *SharedVm; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // r9
  __int64 v20; // rbx
  __int64 TransitionPte; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v23; // rdx
  int v24; // r9d
  _QWORD *v25; // r11
  char v26; // r8
  bool v27; // zf
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-40h]
  unsigned int v33; // [rsp+28h] [rbp-40h]
  unsigned __int16 *v34; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+38h] [rbp-30h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v36 = v8;
  if ( (v8 & 1) != 0 )
  {
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL;
    v12 = 48 * v11 - 0x58000000000LL;
    v13 = 1;
    v8 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    v14 = v8;
    if ( qword_140465800 )
    {
      if ( (v8 & 0x10) != 0 )
        v14 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v14 = v8 & ~qword_140465800;
    }
    v11 = (v14 >> 12) & 0xFFFFFFFFFLL;
    v12 = 48 * v11 - 0x58000000000LL;
    if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
    {
      v34 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v7) = v10;
      MiUnlockWorkingSetExclusive((__int64)v34, v7, v9, v10);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v34);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v13 = 0;
  }
  v17 = (v8 >> 5) & 0x1F;
  v18 = 48 * a3 - 0x58000000000LL;
  if ( v13 != 1 )
    MiLockNestedPageAtDpcInline(48 * a3 - 0x58000000000LL);
  v19 = -127;
  if ( v13 != 1 )
    v19 = -124;
  MiCopyPage(a3, v11, 0LL, v19);
  if ( !v13 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v12);
  v33 = *(unsigned __int8 *)(v12 + 34) >> 6;
  if ( v13 == 1 )
  {
    v20 = a3;
    TransitionPte = MiMakeTransitionPte(a3, v17);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(a5);
    v20 = a3;
    TransitionPte = MiUpdateTransitionPteFrame(v36, a3);
  }
  v36 = TransitionPte;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
        v27 = (v26 & 1) == 0;
        goto LABEL_30;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v27 = (v26 & 1) == 0;
LABEL_30:
      if ( !v27 )
        v23 |= 0x8000000000000000uLL;
    }
  }
  *v25 = v23;
  if ( v24 )
    MiWritePteShadow((__int64)v25);
  v28 = MiVaToPfn((unsigned __int64)v25);
  MiInitializePfnForOtherProcess(v20, a1, v28, 16);
  *(_QWORD *)(v18 + 16) = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v17);
  v29 = MiLockPageInline(v18);
  v30 = *(_BYTE *)(v18 + 34);
  if ( v30 >> 6 != v33 )
  {
    MiChangePageAttribute(v18, v33, 3);
    v30 = *(_BYTE *)(v18 + 34);
  }
  *(_BYTE *)(v18 + 35) ^= (PfnPriority ^ *(_BYTE *)(v18 + 35)) & 7;
  *(_BYTE *)(v18 + 34) = v30 & 0xF8 | 6;
  MiDecrementShareCount(v18);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v29 < 2u )
  {
    v31 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v31);
  }
  __writecr8(v29);
  return 1LL;
}
