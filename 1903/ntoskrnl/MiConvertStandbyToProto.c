/*
 * XREFs of MiConvertStandbyToProto @ 0x140140900
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B0C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiCopyPfnEntryEx @ 0x14009D550 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiTryLockLeafPage @ 0x1400DC7AC (MiTryLockLeafPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140135268 (MiUnlockNestedProtoPoolPage.c)
 *     MiRecheckCombineVm @ 0x1401411C8 (MiRecheckCombineVm.c)
 *     MiComparePages @ 0x140141E70 (MiComparePages.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140142378 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x1401423BC (MiFillCombinePage.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6530 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E66D8 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter2,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // r15
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rsi
  ULONG_PTR **v17; // rdx
  ULONG_PTR *v18; // r14
  char v19; // r13
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // r14
  __int64 v22; // rdx
  ULONG_PTR v23; // rsi
  __int64 v24; // rdx
  unsigned int PfnPriority; // eax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // r11
  unsigned __int8 v31; // r13
  __int64 TransitionPte; // rdi
  _QWORD *v33; // r13
  bool v34; // r9
  char v35; // si
  __int64 v36; // rsi
  __int64 v37; // rsi
  int v38; // edx
  __int64 *v39; // r8
  __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // r11
  unsigned __int64 v44; // r10
  char v45; // dl
  char v46; // [rsp+20h] [rbp-88h]
  char v47; // [rsp+21h] [rbp-87h]
  char v48; // [rsp+22h] [rbp-86h]
  ULONG_PTR *v49; // [rsp+28h] [rbp-80h]
  int v50; // [rsp+34h] [rbp-74h]
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp-68h]
  __int64 v53; // [rsp+48h] [rbp-60h]
  int v54; // [rsp+50h] [rbp-58h] BYREF
  __int64 v55; // [rsp+58h] [rbp-50h]
  __int64 v56; // [rsp+60h] [rbp-48h]
  ULONG_PTR *v57; // [rsp+68h] [rbp-40h]
  unsigned __int64 v60; // [rsp+B8h] [rbp+10h]
  unsigned __int64 ContainingPageTable; // [rsp+C0h] [rbp+18h]
  __int64 v64; // [rsp+D0h] [rbp+28h]

  v9 = a5 + 48;
  v10 = *(_DWORD *)(a5 + 40) & 0x1F;
  v50 = v10;
  v11 = MiSwizzleInvalidPte(((a5 + 48) << 16) | 0x400) | 0x800;
  v56 = v11;
  v13 = (__int64)(*(_QWORD *)(v12 + 56) << 25) >> 16;
  v55 = v13;
  v46 = 0;
  v47 = 1;
  v15 = *(unsigned __int16 *)(v14 + 174);
  v16 = *(_QWORD *)(qword_140466188 + 8 * v15);
  v53 = v16;
  v18 = *v17;
  v49 = *v17;
  v57 = *v17;
  if ( a8 != -1 )
  {
    v51 = 48 * a8 - 0x58000000000LL;
    if ( !(unsigned int)MiFillCombinePage(v15, v51, BugCheckParameter2, v13) )
      goto LABEL_27;
    TransitionPte = MiMakeTransitionPte(a8, v10);
    v55 = v9 & 0x7FFFFFFFFFFFFFFFLL;
    v52 = 0LL;
    ContainingPageTable = MiGetContainingPageTable(a5 + 48);
    if ( v49 != (ULONG_PTR *)v16 )
    {
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v49, 0LL) )
        goto LABEL_27;
      v47 = 0;
    }
    v54 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v54);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    if ( (**(_BYTE **)(a3 + 56) & 1) != 0
      && (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 1u
      && v16 == *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
      && a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
    {
      if ( (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1) )
      {
        v33 = (_QWORD *)(BugCheckParameter2 + 16);
        if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) == v50 )
        {
          if ( (unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
          {
            if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(*v33) )
              *(_BYTE *)(BugCheckParameter2 + 34) = v45 | 0x10;
            v34 = 0;
            if ( (*v33 & 2) != 0 )
            {
              if ( !v47 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v16, (_WORD *)(BugCheckParameter2 + 16)) )
                v34 = 1;
              else
                v52 = v44;
              v35 = 1;
            }
            else
            {
              if ( !v47 )
                v34 = (*v33 & 4) != 0;
              v35 = 0;
            }
            if ( v34 )
            {
              v52 = MiCapturePageFileInfoInline((_QWORD *)(BugCheckParameter2 + 16), 1, 1);
              *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
            }
            if ( v35 )
              *v33 &= ~2uLL;
            v36 = 48 * ContainingPageTable - 0x58000000000LL;
            MiLockNestedPageAtDpcInline(v36);
            *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiLockNestedPageAtDpcInline(v51);
            MiFinalizePageAttribute(v51, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1u);
            MiCopyPfnEntryEx(v51, (__int128 *)BugCheckParameter2);
            if ( (unsigned int)MiGetPfnPriority(v51) < 5 )
              *(_BYTE *)(v51 + 35) = *(_BYTE *)(v51 + 35) & 0xF8 | 5;
            v37 = v51;
            *(_QWORD *)(v51 + 8) = v55;
            *(_QWORD *)(v37 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v37 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
            *(_QWORD *)(v37 + 24) &= 0xC000000000000000uLL;
            MI_MAKE_PROTECT_WRITE_COPY(v37 + 16);
            if ( !v47 )
              *(_QWORD *)(a5 + 56) = 1LL;
            *(_QWORD *)(a5 + 48) = 0LL;
            if ( MiPteInShadowRange(a5 + 48) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v38 = 1;
                if ( HIBYTE(word_140465BEC) )
                  goto LABEL_56;
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
              {
                goto LABEL_56;
              }
              if ( (TransitionPte & 1) != 0 )
                TransitionPte |= 0x8000000000000000uLL;
            }
LABEL_56:
            *v39 = TransitionPte;
            if ( v38 )
              MiWritePteShadow((__int64)v39);
            v64 = v40 & *(_QWORD *)(BugCheckParameter2 + 40);
            v41 = MiMapPageInHyperSpaceWorker(v64, 0LL, 0x80000000);
            if ( !MiPteInShadowRange(v41 + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF)) )
              goto LABEL_59;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v42 = 1LL;
              if ( !HIBYTE(word_140465BEC) )
              {
LABEL_95:
                if ( (v11 & 1) != 0 )
                  v11 |= 0x8000000000000000uLL;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              goto LABEL_95;
            }
LABEL_59:
            *v43 = v11;
            if ( (_DWORD)v42 )
              MiWritePteShadow((__int64)v43);
            LOBYTE(v42) = 17;
            MiUnmapPageInHyperSpaceWorker((unsigned __int64)v43, v42, 0x80000000LL);
            *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
            MiPfnReferenceCountIsZero(v51, a8);
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v47 )
            {
              if ( (*v33 & 4) != 0 )
              {
                *v33 &= ~4uLL;
                if ( v52 )
                  v52 &= ~4uLL;
              }
            }
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
            MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v47 )
            {
              if ( (ULONG_PTR *)v53 == &MiSystemPartition )
                MiReturnResidentAvailable(1uLL);
              else
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 8128), 1uLL);
              MiReturnCommit(v53, 1uLL);
              if ( v49 == &MiSystemPartition )
                _InterlockedExchangeAdd64(&qword_140466A38, 0xFFFFFFFFFFFFFFFFuLL);
            }
            MiLockAndDecrementShareCount(48 * v64 - 0x58000000000LL, 0);
            if ( v52 )
              MiReleasePageFileInfo(v53, v52, 1);
            goto LABEL_21;
          }
          MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
        }
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_27;
  }
  v19 = 1;
  v47 = 1;
  if ( v18 != (ULONG_PTR *)v16 )
  {
    v31 = 1;
    v46 = 1;
    if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v18, 1LL) )
      goto LABEL_28;
    v19 = 0;
    v47 = 0;
  }
  v20 = MiLockProtoPoolPage(v9, 0LL);
  v21 = v20;
  v53 = v20;
  if ( v20 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      MiUnlockProtoPoolPage(v20, 0x11u);
    }
    else
    {
      if ( a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
        && v16 == *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
        && (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
        && (MiTryLockLeafPage((unsigned __int64 *)(a5 + 48), v22, &v51), (v23 = v51) != 0) )
      {
        if ( (*(_BYTE *)(v51 + 35) & 0x40) == 0
          && v49 == *(ULONG_PTR **)(qword_140466188 + 8 * ((*(_QWORD *)(v51 + 40) >> 40) & 0x3FFLL))
          && ((*(_BYTE *)(v51 + 34) & 7) == 6 || (*(_BYTE *)(v51 + 34) & 0x20) == 0)
          && (v60 = MiMapPageInHyperSpaceWorker((v51 + 0x58000000000LL) / 48, 0LL, 0x80000000),
              v48 = MiComparePages(v60, v55),
              LOBYTE(v24) = 17,
              MiUnmapPageInHyperSpaceWorker(v60, v24, 0x80000000LL),
              v48)
          && (**(_BYTE **)(a3 + 56) & 1) != 0
          && ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) == v10 )
        {
          if ( (unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
          {
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
            PfnPriority = MiGetPfnPriority(BugCheckParameter2);
            MiUpdatePfnPriority(v23, PfnPriority, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockNestedProtoPoolPage(v21);
            if ( !v19 && _InterlockedIncrement64((volatile signed __int64 *)(a5 + 56)) != 1 )
              MiReturnCrossPartitionCombineCharges(v49, 1LL);
            v26 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
            v27 = MiMapPageInHyperSpaceWorker(v26, 0LL, 0x80000000);
            if ( !MiPteInShadowRange(v27 + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF)) )
              goto LABEL_18;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v28 = 1LL;
              if ( !HIBYTE(word_140465BEC) )
              {
LABEL_108:
                if ( (v11 & 1) != 0 )
                  v11 |= 0x8000000000000000uLL;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              goto LABEL_108;
            }
LABEL_18:
            *v29 = v11;
            if ( (_DWORD)v28 )
              MiWritePteShadow((__int64)v29);
            LOBYTE(v28) = 17;
            MiUnmapPageInHyperSpaceWorker((unsigned __int64)v29, v28, 0x80000000LL);
            *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
            MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            MiLockNestedPageAtDpcInline(48 * v26 - 0x58000000000LL);
            MiDecrementShareCount(48 * v26 - 0x58000000000LL);
            _InterlockedAnd64((volatile signed __int64 *)(48 * v26 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_21:
            if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
                0xFFFFFFFFFFFFFFFFuLL);
            return 1LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockNestedProtoPoolPage(v21);
          MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockNestedProtoPoolPage(v21);
        }
      }
      else
      {
        MiUnlockNestedProtoPoolPage(v21);
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
LABEL_27:
  v31 = v46;
  v18 = v49;
LABEL_28:
  if ( !v47 )
    MiReturnCrossPartitionCombineCharges(v18, v31);
  return 0LL;
}
