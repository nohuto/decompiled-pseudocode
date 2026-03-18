/*
 * XREFs of MiHandleForkTransitionPte @ 0x1402E41B8
 * Callers:
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1401428B8 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402E414C (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402E4D74 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x1402E5284 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
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
        char a10,
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
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  signed __int32 v29; // eax
  __int64 Page; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  LONG *v38; // rsi
  KIRQL v39; // al
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // r8d
  char v43; // r9
  __int64 v44; // r10
  bool v45; // zf
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // r13
  unsigned __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // r11
  unsigned __int64 v52; // rax
  __int64 v53; // r9
  __int64 v54; // rsi
  __int64 v55; // rdx
  _QWORD *v56; // r8
  int v57; // r9d
  unsigned __int64 v58; // r11
  bool v59; // zf
  unsigned __int64 v60; // rdx
  int v61; // edx
  __int64 *v62; // r10
  bool v63; // zf
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  LONG *SharedVm; // rbx
  unsigned int v71; // [rsp+30h] [rbp-98h]
  unsigned int v72; // [rsp+30h] [rbp-98h]
  int v73; // [rsp+34h] [rbp-94h]
  unsigned int v74; // [rsp+38h] [rbp-90h]
  __int64 v75; // [rsp+38h] [rbp-90h]
  __int64 v76; // [rsp+40h] [rbp-88h]
  __int64 v77; // [rsp+48h] [rbp-80h] BYREF
  volatile signed __int32 *v78; // [rsp+50h] [rbp-78h] BYREF
  __int64 v79; // [rsp+58h] [rbp-70h]
  __int64 v80; // [rsp+60h] [rbp-68h]
  __int64 v81; // [rsp+68h] [rbp-60h]
  __int64 v82; // [rsp+70h] [rbp-58h]

  v12 = a5;
  v78 = 0LL;
  v79 = 0LL;
  v14 = ZeroPte;
  v15 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v80 = v15;
  v17 = 0;
  v19 = *(unsigned __int16 *)(v18 + 1454);
  v20 = 0;
  v81 = ZeroPte;
  v73 = 0;
  v21 = *(_QWORD *)(qword_140465E88 + 8 * v19);
  v23 = *(unsigned __int16 *)(v22 + 1454);
  v82 = v21;
  v76 = *(_QWORD *)(qword_140465E88 + 8 * v23);
  if ( v76 != v21 )
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
      v73 = 1;
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
    v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a3) >> 5) & 0x1F;
    v74 = v27;
    if ( *(_WORD *)(v26 + 32) == (_WORD)v28 && (v27 & 0xFFFFFFF8) != 0x10 )
      break;
    v71 = *(unsigned __int8 *)(v26 + 34) >> 6;
    v75 = a1 + 1280;
    if ( *v25 != -1LL )
    {
      if ( v20 )
      {
        MiReturnCommit(v21, 1uLL);
        LODWORD(v28) = 0;
        v20 = 0;
      }
      if ( v17 )
      {
        MiReturnCrossPartitionCloneCharges(v21);
        LODWORD(v28) = 0;
      }
      v17 = v28;
      v64 = 48 * *v25 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v64);
      MiFinalizePageAttribute(v64, v71, 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v26 + 34) & 0x20) != 0 && (MiFlushTbList(a7, v65, v66, v67), (*(_BYTE *)(v26 + 34) & 8) != 0) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v68) = a10;
        MiUnlockWorkingSetExclusive(v75, v68, v69, v67);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        SharedVm = MiGetSharedVm(v75);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      else
      {
        LOBYTE(v67) = a10;
        if ( (unsigned int)MiDuplicateCloneLeaf(a3, a4, *v25, v67, 2u) )
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
    MiInitializePageColorBase(a1 + 1280, v28, (__int64)&v78);
    v29 = _InterlockedExchangeAdd(v78, 1u);
    v72 = HIDWORD(v79) | v29 & v79;
    Page = MiGetPage(v76, v72, 0LL);
    *v25 = Page;
    if ( Page == -1 )
    {
      v34 = a10;
      do
      {
        MiFlushTbList(a7, v31, v32, v33);
        LOBYTE(v35) = v34;
        MiUnlockWorkingSetExclusive(v75, v35, v36, v37);
        MiWaitForFreePage(v76);
        v38 = MiGetSharedVm(v75);
        v39 = ExAcquireSpinLockExclusive(v38);
        v38[1] = 0;
        v34 = v39;
        MiMakeSystemAddressValid(a3, 0LL, 0, v39, 1);
        v40 = MiGetPage(v76, v72, 0LL);
        *a8 = v40;
      }
      while ( v40 == -1 );
      v15 = v80;
      v14 = v81;
      v21 = v82;
      v20 = v73;
      v25 = (ULONG_PTR *)a8;
      a10 = v34;
      v12 = a5;
    }
    if ( (MI_READ_PTE_LOCK_FREE(a3) & 0x401) != 0 )
      goto LABEL_79;
    v16 = a3;
  }
  *(_QWORD *)v12 = v28;
  if ( MiPteInShadowRange(v12) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v42 = 1;
      if ( HIBYTE(word_1404658EC) != v43 )
        goto LABEL_30;
      v45 = (v41 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_30;
      v45 = (v41 & 1) == 0;
    }
    if ( !v45 )
      v41 |= v44;
  }
LABEL_30:
  *(_QWORD *)v12 = v41;
  if ( v42 )
    MiWritePteShadow(v12);
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
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8584), 1uLL);
    v46 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    v46 = 0LL;
  }
  *(_QWORD *)(v12 + 16) = v46 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v74 << 59);
  if ( (*(_QWORD *)(v26 + 16) & 2) != 0 )
  {
    v14 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v26 + 34) & 7) == 3 )
    {
      MiUnlinkPageFromList(v26, 0);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    *(_QWORD *)(v26 + 16) &= ~2uLL;
    if ( v47 )
      MiInsertPageInList(v26, 8u);
  }
  *(_QWORD *)(v26 + 8) = v12;
  *(_QWORD *)(v26 + 40) |= 0x200000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v26 + 16);
  v48 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
  v77 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v49 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77);
  *(_QWORD *)(v26 + 40) = v51 ^ v50 & (v51 ^ (v49 >> 12));
  v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77);
  v54 = 48 * (v53 & (v52 >> 12)) - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v54);
  *(_QWORD *)(v54 + 24) ^= (*(_QWORD *)(v54 + 24) ^ (*(_QWORD *)(v54 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( MiPteInShadowRange(a3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v57 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_52;
      v59 = (v15 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_52;
      v59 = (v15 & 1) == 0;
    }
    if ( !v59 )
      v55 |= 0x8000000000000000uLL;
  }
LABEL_52:
  *v56 = v55;
  if ( v57 )
    MiWritePteShadow((__int64)v56);
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), v58);
  if ( v14 )
  {
    v60 = v14 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v14 & 4) == 0 )
      v60 = v14;
    MiReleasePageFileInfo(v21, v60, 1);
  }
  if ( (a9 & 1) != 0 && v74 != 24 )
    v15 |= 8uLL;
  if ( !MiPteInShadowRange(a4) )
    goto LABEL_69;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v61 = 1;
    if ( !HIBYTE(word_1404658EC) )
    {
      v63 = (v15 & 1) == 0;
      goto LABEL_67;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
  {
    v63 = (v15 & 1) == 0;
LABEL_67:
    if ( !v63 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_69:
  *v62 = v15;
  if ( v61 )
    MiWritePteShadow((__int64)v62);
  MiLockAndDecrementShareCount(48 * v48 - 0x58000000000LL, 0);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 928), 0xFFFFFFFFFFFFFFFFuLL);
  return 2LL;
}
