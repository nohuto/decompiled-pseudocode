/*
 * XREFs of MiConvertStandbyToProto @ 0x14013EB50
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiComparePages @ 0x14007F990 (MiComparePages.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiTryLockLeafPage @ 0x1400829FC (MiTryLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiFillCombinePage @ 0x140121854 (MiFillCombinePage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013498C (MiUnlockNestedProtoPoolPage.c)
 *     MiRecheckCombineVm @ 0x14013EFF4 (MiRecheckCombineVm.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CC104 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC2E0 (MiReturnCrossPartitionCombineCharges.c)
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
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int8 v12; // di
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r14
  char v24; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  int v34; // edx
  __int64 *v35; // r11
  __int64 v36; // rdx
  __int64 v37; // r8
  bool v38; // zf
  char v39; // [rsp+20h] [rbp-78h]
  char v40; // [rsp+21h] [rbp-77h]
  bool v41; // [rsp+22h] [rbp-76h]
  int v42; // [rsp+24h] [rbp-74h]
  int v43; // [rsp+28h] [rbp-70h] BYREF
  __int64 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+50h] [rbp-48h]

  v8 = (__int64 *)(a5 + 48);
  v42 = *(_DWORD *)(a5 + 40) & 0x1F;
  v9 = MiSwizzleInvalidPte(((a5 + 48) << 16) | 0x400) | 0x800;
  v45 = v9;
  v11 = (__int64)(*(_QWORD *)(v10 + 56) << 25) >> 16;
  v44 = v11;
  v12 = 0;
  v40 = 0;
  v39 = 1;
  v14 = *(unsigned __int16 *)(v13 + 174);
  v15 = *(_QWORD *)(qword_14043B808 + 8 * v14);
  v17 = *v16;
  v46 = *v16;
  if ( a8 != -1 )
  {
    if ( (unsigned int)MiFillCombinePage(v14, 48 * a8 - 0x58000000000LL, BugCheckParameter2, v11) )
    {
      if ( v17 == v15 )
      {
        v24 = 1;
      }
      else
      {
        if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v17, 0LL) )
          goto LABEL_17;
        v24 = 0;
      }
      v43 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v43, v26, v27);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
      if ( !v24 )
        MiReturnCrossPartitionCombineCharges(v17, v12);
      return 0LL;
    }
LABEL_17:
    v24 = v39;
    goto LABEL_18;
  }
  v39 = 1;
  if ( v17 == v15 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    v40 = 1;
    if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v17, 1LL) )
      goto LABEL_17;
    v39 = 0;
  }
  v18 = MiLockProtoPoolPage((unsigned __int64)v8, 0LL);
  v21 = v18;
  v47 = v18;
  if ( !v18 )
    goto LABEL_17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    MiUnlockProtoPoolPage(v18, 0x11u);
    goto LABEL_16;
  }
  if ( a7 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || v15 != *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
    || (v22 = MiTryLockLeafPage(v8), (v23 = v22) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v21, v19, v20);
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v22 + 35) & 0x40) != 0
    || v17 != *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL))
    || (*(_BYTE *)(v22 + 34) & 7) != 6 && (*(_BYTE *)(v22 + 34) & 0x20) != 0
    || (v48 = MiMapPageInHyperSpaceWorker((v22 + 0x58000000000LL) / 48, 0LL, 0x80000000),
        v41 = MiComparePages(v48, v44),
        MiUnmapPageInHyperSpaceWorker(v48, 0x11u, 0x80000000LL),
        !v41)
    || (**(_DWORD **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v42 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v21, v19, v20);
LABEL_15:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
    v12 = v40;
    goto LABEL_17;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v21, v28, v29);
    MiDiscardTransitionPte(BugCheckParameter2);
    goto LABEL_15;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiGetPfnPriority(BugCheckParameter2);
  MiUpdatePfnPriority(v23);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v21, v30, v31);
  if ( !v39 && _InterlockedIncrement64((volatile signed __int64 *)(a5 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v17, 1LL);
  v32 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v33 = MiMapPageInHyperSpaceWorker(v32, 0LL, 0x80000000);
  if ( !MiPteInShadowRange((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + v33) )
    goto LABEL_32;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v34 = 1;
    if ( !HIBYTE(word_14043B26C) )
    {
      v38 = (v9 & 1) == 0;
      goto LABEL_54;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
  {
    v38 = (v9 & 1) == 0;
LABEL_54:
    if ( !v38 )
      v9 |= 0x8000000000000000uLL;
  }
LABEL_32:
  *v35 = v9;
  if ( v34 )
    MiWritePteShadow((__int64)v35, v9);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v35, 0x11u, 0x80000000LL);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  MiLockNestedPageAtDpcInline(48 * v32 - 0x58000000000LL, v36, v37);
  MiDecrementShareCount(48 * v32 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v32 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
