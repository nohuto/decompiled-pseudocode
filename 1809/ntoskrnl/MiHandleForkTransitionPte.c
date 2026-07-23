/*
 * XREFs of MiHandleForkTransitionPte @ 0x1402CA308
 * Callers:
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14012A2E0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402CA29C (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402CADA8 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x1402CB228 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int *a7,
        __int64 *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  unsigned __int64 v12; // r14
  __int64 v14; // rdi
  __int64 v15; // rbx
  ULONG_PTR v16; // r8
  unsigned int v17; // r12d
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rax
  ULONG_PTR *v25; // rsi
  ULONG_PTR v26; // rbp
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int16 v30; // r9
  __int16 v31; // ax
  __int64 Page; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // r14
  __int64 v37; // r8
  __int64 v38; // r9
  LONG *v39; // rsi
  KIRQL v40; // al
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // r9
  bool v46; // zf
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // r13
  unsigned __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // r11
  unsigned __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 *v59; // r8
  int v60; // r9d
  unsigned __int64 v61; // r11
  bool v62; // zf
  unsigned __int64 v63; // rdx
  int v64; // edx
  __int64 *v65; // r10
  bool v66; // zf
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r8
  LONG *SharedVm; // rbx
  unsigned int v73; // [rsp+30h] [rbp-98h]
  unsigned int v74; // [rsp+30h] [rbp-98h]
  int v75; // [rsp+34h] [rbp-94h]
  unsigned int v76; // [rsp+38h] [rbp-90h]
  __int64 v77; // [rsp+38h] [rbp-90h]
  __int64 v78; // [rsp+40h] [rbp-88h]
  __int64 v79; // [rsp+48h] [rbp-80h] BYREF
  __int64 v80; // [rsp+50h] [rbp-78h]
  __int64 v81; // [rsp+58h] [rbp-70h]
  __int64 v82; // [rsp+60h] [rbp-68h]
  volatile signed __int32 *v83; // [rsp+68h] [rbp-60h] BYREF
  __int16 v84; // [rsp+70h] [rbp-58h]
  unsigned __int16 v85; // [rsp+72h] [rbp-56h]

  v12 = a5;
  v14 = ZeroPte;
  v15 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v80 = v15;
  v17 = 0;
  v19 = *(unsigned __int16 *)(v18 + 1454);
  v20 = 0;
  v81 = ZeroPte;
  v75 = 0;
  v21 = *(_QWORD *)(qword_14043B808 + 8 * v19);
  v23 = *(unsigned __int16 *)(v22 + 1454);
  v82 = v21;
  v78 = *(_QWORD *)(qword_14043B808 + 8 * v23);
  if ( v78 != v21 )
  {
    v17 = 1;
    if ( (a9 & 1) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(v21, 1uLL, 0) )
      {
        MiWriteUselessChildPte(a4);
        *a12 = 1;
        return 1LL;
      }
      v20 = 1;
      v75 = 1;
    }
    if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v21) )
    {
      MiWriteUselessChildPte(a4);
      *a12 = 1;
      if ( v20 )
        MiReturnCommit(v21, 1uLL);
      return 1LL;
    }
    v16 = a3;
  }
  v25 = (ULONG_PTR *)a8;
  while ( 1 )
  {
    v26 = MiLockTransitionLeafPage(v16, 0LL);
    if ( !v26 )
      goto LABEL_79;
    v27 = MI_READ_PTE_LOCK_FREE(a3);
    v29 = (v27 >> 5) & 0x1F;
    v76 = v29;
    if ( *(_WORD *)(v26 + 32) == v30 && (v29 & 0xFFFFFFF8) != 0x10 )
      break;
    v73 = *(unsigned __int8 *)(v26 + 34) >> 6;
    v77 = a1 + 1280;
    if ( *v25 != -1LL )
    {
      if ( v20 )
      {
        MiReturnCommit(v21, 1uLL);
        v20 = 0;
      }
      if ( v17 )
        MiReturnCrossPartitionCloneCharges(v21);
      v17 = 0;
      v67 = 48 * *v25 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v67, v27, v28);
      MiFinalizePageAttribute(v67, v73, 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v26 + 34) & 0x20) != 0 && (MiFlushTbList(a7, v68, v69, v70), (*(_BYTE *)(v26 + 34) & 8) != 0) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockWorkingSetExclusive(v77, a10, v71, v70);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        SharedVm = MiGetSharedVm(v77);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      else
      {
        LOBYTE(v70) = a10;
        if ( (unsigned int)MiDuplicateCloneLeaf(a3, a4, *v25, v70, 2u) )
        {
          *v25 = -1LL;
          ++*a6;
          return 1LL;
        }
      }
LABEL_79:
      if ( v20 )
        MiReturnCommit(v21, 1uLL);
      if ( v17 )
        MiReturnCrossPartitionCloneCharges(v21);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInitializePageColorBase(a1 + 1280, 0, (__int64)&v83);
    v31 = _InterlockedExchangeAdd(v83, 1u);
    v74 = v85 | (unsigned __int16)(v31 & v84);
    Page = MiGetPage(v78, v74, 0);
    *v25 = Page;
    if ( Page == -1 )
    {
      v36 = a10;
      do
      {
        MiFlushTbList(a7, v33, v34, v35);
        MiUnlockWorkingSetExclusive(v77, v36, v37, v38);
        MiWaitForFreePage(v78);
        v39 = MiGetSharedVm(v77);
        v40 = ExAcquireSpinLockExclusive(v39);
        v39[1] = 0;
        LOBYTE(v41) = v40;
        v36 = v40;
        MiMakeSystemAddressValid(a3, 0LL, 0, v41, 1);
        v42 = MiGetPage(v78, v74, 0);
        *a8 = v42;
      }
      while ( v42 == -1 );
      v15 = v80;
      v14 = v81;
      v21 = v82;
      v20 = v75;
      v25 = (ULONG_PTR *)a8;
      a10 = v36;
      v12 = a5;
    }
    if ( (MI_READ_PTE_LOCK_FREE(a3) & 0x401) != 0 )
      goto LABEL_79;
    v16 = a3;
  }
  *(_QWORD *)v12 = 0LL;
  if ( MiPteInShadowRange(v12) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v44 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_30;
      v46 = (v43 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_30;
      v46 = (v43 & 1) == 0;
    }
    if ( !v46 )
      v43 |= v45;
  }
LABEL_30:
  *(_QWORD *)v12 = v43;
  if ( v44 )
    MiWritePteShadow(v12, v43);
  MI_MAKE_PROTECT_WRITE_COPY(v12);
  *(_QWORD *)(v12 + 8) = v17;
  *(_QWORD *)(v12 + 24) = 2LL;
  if ( (a9 & 1) != 0 )
  {
    *(_QWORD *)(v12 + 16) = 1LL;
    if ( v20 )
      ++*a11;
    else
      ++a11[1];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 7816), 1uLL);
    v47 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    *(_QWORD *)(v12 + 16) = 0LL;
    v47 = 0LL;
  }
  *(_QWORD *)(v12 + 16) = v47 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v76 << 59);
  if ( (*(_QWORD *)(v26 + 16) & 2) != 0 )
  {
    v14 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v26 + 34) & 7) == 3 )
    {
      MiUnlinkPageFromList(v26, 0);
      v48 = 1;
    }
    else
    {
      v48 = 0;
    }
    *(_QWORD *)(v26 + 16) &= ~2uLL;
    if ( v48 )
      MiInsertPageInList(v26, 8);
  }
  *(_QWORD *)(v26 + 8) = v12;
  *(_QWORD *)(v26 + 40) |= 0x200000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v26 + 16);
  v49 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
  v79 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v50 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v79);
  *(_QWORD *)(v26 + 40) = v52 ^ v51 & (v52 ^ (v50 >> 12));
  v53 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v79);
  v55 = 48 * (v54 & (v53 >> 12)) - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v55, v56, v57);
  *(_QWORD *)(v55 + 24) ^= (*(_QWORD *)(v55 + 24) ^ (*(_QWORD *)(v55 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( MiPteInShadowRange(a3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v60 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_52;
      v62 = (v15 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_52;
      v62 = (v15 & 1) == 0;
    }
    if ( !v62 )
      v58 |= 0x8000000000000000uLL;
  }
LABEL_52:
  *v59 = v58;
  if ( v60 )
    MiWritePteShadow((__int64)v59, v58);
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), v61);
  if ( v14 )
  {
    v63 = v14 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v14 & 4) == 0 )
      v63 = v14;
    MiReleasePageFileInfo((struct _KEVENT *)v21, v63, 1);
  }
  if ( (a9 & 1) != 0 && v76 != 24 )
    v15 |= 8uLL;
  if ( !MiPteInShadowRange(a4) )
    goto LABEL_69;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v64 = 1;
    if ( !HIBYTE(word_14043B26C) )
    {
      v66 = (v15 & 1) == 0;
      goto LABEL_67;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
  {
    v66 = (v15 & 1) == 0;
LABEL_67:
    if ( !v66 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_69:
  *v65 = v15;
  if ( v64 )
    MiWritePteShadow((__int64)v65, v15);
  MiLockAndDecrementShareCount(48 * v49 - 0x58000000000LL, 0);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
  return 2LL;
}
