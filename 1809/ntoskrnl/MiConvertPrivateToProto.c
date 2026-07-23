/*
 * XREFs of MiConvertPrivateToProto @ 0x140082EA0
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiRebuildPageTableLeafAges @ 0x14007AE00 (MiRebuildPageTableLeafAges.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14007F920 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiComparePages @ 0x14007F990 (MiComparePages.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiSetWsleProtection @ 0x1400DB1E4 (MiSetWsleProtection.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiFillCombinePage @ 0x140121854 (MiFillCombinePage.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140126C70 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14012A2E0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CC104 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC2E0 (MiReturnCrossPartitionCombineCharges.c)
 */

unsigned __int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v7; // r12
  _KPROCESS *Process; // rdi
  __int64 v9; // r11
  unsigned __int64 v10; // r14
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 *v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  char v20; // cl
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  char WsleContents; // al
  __int64 v27; // rdx
  __int64 v28; // r8
  char v29; // di
  __int64 v30; // rbx
  __int64 v31; // rbx
  char v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  ULONG_PTR v37; // rbx
  __int64 v38; // rbx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r10
  _QWORD *v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r11
  __int64 v47; // r11
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  _KPROCESS *v54; // rbx
  __int64 v55; // rcx
  unsigned __int64 v56; // r10
  int v57; // eax
  char v58; // r8
  char v59; // r8
  unsigned __int64 v60; // r12
  char v61; // [rsp+30h] [rbp-B1h]
  char v62; // [rsp+31h] [rbp-B0h]
  bool v63; // [rsp+32h] [rbp-AFh]
  __int64 v64; // [rsp+38h] [rbp-A9h]
  __int64 v65; // [rsp+40h] [rbp-A1h]
  BOOL v66; // [rsp+40h] [rbp-A1h]
  BOOL v67; // [rsp+48h] [rbp-99h]
  __int64 v68; // [rsp+50h] [rbp-91h] BYREF
  __int64 v69; // [rsp+58h] [rbp-89h]
  __int64 v70; // [rsp+60h] [rbp-81h]
  unsigned __int64 v71; // [rsp+68h] [rbp-79h]
  __int64 v72; // [rsp+70h] [rbp-71h]
  int v73; // [rsp+78h] [rbp-69h] BYREF
  int v74; // [rsp+7Ch] [rbp-65h] BYREF
  int v75; // [rsp+80h] [rbp-61h] BYREF
  int v76; // [rsp+84h] [rbp-5Dh] BYREF
  int v77; // [rsp+88h] [rbp-59h] BYREF
  _KPROCESS *v78; // [rsp+90h] [rbp-51h]
  __int64 v79; // [rsp+98h] [rbp-49h]
  __int64 v80; // [rsp+A0h] [rbp-41h]
  __int64 v81; // [rsp+A8h] [rbp-39h]
  __int64 ContainingPageTable; // [rsp+B0h] [rbp-31h]
  _QWORD v83[4]; // [rsp+B8h] [rbp-29h] BYREF
  _QWORD v84[2]; // [rsp+D8h] [rbp-9h] BYREF

  v7 = (__int64 *)(a3 + 48);
  v72 = a1;
  v79 = a6;
  v71 = a2;
  v80 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v67 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v78 = Process;
  v68 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v68) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v12 = *(unsigned __int16 *)(v11 + 174);
  LOBYTE(v13) = 0;
  v15 = *v14;
  v64 = *v14;
  v70 = v9 << 25 >> 16;
  v62 = 0;
  v16 = *(_QWORD *)(qword_14043B808 + 8 * v12);
  v65 = v16;
  v61 = 1;
  if ( a7 != -1 )
  {
    v69 = 48 * a7 - 0x58000000000LL;
    if ( !(unsigned int)MiFillCombinePage(v69, v69, v10, v9 << 25 >> 16) )
      return 0LL;
    v81 = (unsigned __int64)v7 & 0x7FFFFFFFFFFFFFFFLL;
    v13 = 0LL;
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v7);
    v41 = 48 * ContainingPageTable - 0x58000000000LL;
    v42 = v65;
    v78 = (_KPROCESS *)v41;
    if ( v64 == v65 )
    {
      LOBYTE(v41) = 1;
    }
    else
    {
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v64, 0LL) )
        return 0LL;
      v42 = v65;
      LOBYTE(v41) = 0;
      v61 = 0;
    }
    v73 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v73, v41, v40);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
      v42 = v65;
      LOBYTE(v41) = v61;
    }
    if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v10 + 32) != 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = v64;
LABEL_64:
      if ( !v61 )
        MiReturnCrossPartitionCombineCharges(v15, (unsigned __int8)v13);
      return 0LL;
    }
    if ( v67 )
    {
      memset(v83, 0, sizeof(v83));
      MiIdentifyPfn(v10);
      v42 = v65;
      LOBYTE(v41) = v61;
    }
    if ( (v68 & 0x42) != 0 )
      v68 &= 0xFFFFFFFFFFFFFFBDuLL;
    if ( (*(_BYTE *)(v10 + 34) & 0x10) == 0 )
    {
      v57 = IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v10 + 16));
      v42 = v65;
      if ( !v57 )
        *(_BYTE *)(v10 + 34) = v58 | 0x10;
    }
    v43 = *(_QWORD *)(v10 + 16);
    v44 = (_QWORD *)(v10 + 16);
    if ( (v43 & 2) != 0 )
    {
      if ( !(_BYTE)v41 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v42, v10 + 16) )
      {
        v13 = MiCapturePageFileInfoInline(v44, 1LL);
        v44 = (_QWORD *)(v10 + 16);
        *(_BYTE *)(v10 + 34) |= 0x10u;
      }
      else
      {
        v13 = v56;
      }
      *v44 &= ~2uLL;
    }
    else if ( !(_BYTE)v41 && (v43 & 4) != 0 )
    {
      v13 = MiCapturePageFileInfoInline(v10 + 16, 1LL);
      *(_BYTE *)(v10 + 34) |= 0x10u;
    }
    MiLockNestedPageAtDpcInline(v69);
    MiFinalizePageAttribute(v69, *(unsigned __int8 *)(v10 + 34) >> 6, 1u);
    MiCopyPfnEntryEx(v69, v10);
    if ( (unsigned int)MiGetPfnPriority(v45) < 5 )
      *(_BYTE *)(v46 + 35) = *(_BYTE *)(v46 + 35) & 0xF8 | 5;
    *(_QWORD *)(v46 + 8) = v81;
    *(_QWORD *)(v46 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v46 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
    MI_MAKE_PROTECT_WRITE_COPY(v46 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v61 )
    {
      v48 = *(_QWORD *)(v10 + 16);
      if ( (v48 & 4) != 0 )
      {
        *(_QWORD *)(v10 + 16) = v48 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( v13 )
          v13 &= ~4uLL;
      }
    }
    v49 = v68 ^ (v68 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
    v68 = v49;
    v69 = v49;
    if ( (v49 & 0x800) != 0 )
    {
      v49 = v49 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
      v68 = v49;
      v69 = v49;
    }
    MiWriteValidPteNewPage(v71, v49, 0LL);
    if ( !v61 )
      *(_QWORD *)(v80 + 56) = 1LL;
    *v7 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v51, v50) )
      {
        if ( !HIBYTE(word_14043B26C) && (v59 & 1) != 0 )
          v50 |= 0x8000000000000000uLL;
        *v7 = v50;
        MiWritePteShadow(v7);
        goto LABEL_51;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v59 & 1) != 0 )
      {
        v50 |= 0x8000000000000000uLL;
      }
    }
    *v7 = v50;
LABEL_51:
    *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    *(_BYTE *)(v10 + 34) |= 7u;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertTbFlushEntry(v79, v70, 1LL);
    if ( v13 )
      MiReleasePageFileInfo(
        *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)),
        v13,
        1);
    v54 = v78;
    v74 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v54->ProfileListHead, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v74, v52, v53);
      while ( (__int64)v54->ProfileListHead.Flink < 0 );
    }
    v55 = (__int64)v54->ProfileListHead.Flink ^ ((__int64)v54->ProfileListHead.Flink ^ ((__int64)&v54->ProfileListHead.Flink->Flink
                                                                                      + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    v54->ProfileListHead.Flink = (struct _LIST_ENTRY *)v55;
    _InterlockedAnd64((volatile signed __int64 *)&v54->ProfileListHead, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v61 == 1 )
    {
      if ( (ULONG_PTR *)v64 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 7360), 1uLL);
      MiReturnCommit(v64, 1uLL);
      if ( (ULONG_PTR *)v64 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14043C0D8, 0xFFFFFFFFFFFFFFFFuLL);
    }
    v38 = v72;
    if ( (*(_BYTE *)(v72 + 184) & 7) == 0 )
      MiSetWsleProtection(v55, v70, 0LL);
    MiUpdateWorkingSetPrivateSize(v38, v70, -1LL, 0LL);
    goto LABEL_24;
  }
  v61 = 1;
  if ( v15 != v16 )
  {
    LOBYTE(v13) = 1;
    v62 = 1;
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v15, 1LL) )
    {
      v61 = 0;
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  v17 = MiLockProtoPoolPage((unsigned __int64)v7, 0LL);
  if ( !v17 )
    goto LABEL_64;
  v18 = MiLockLeafPage(v7, 0);
  v19 = v18;
  if ( !v18 )
  {
    MiUnlockProtoPoolPage(v17, 0x11u);
    goto LABEL_63;
  }
  if ( (*(_BYTE *)(v18 + 35) & 0x40) != 0
    || v15 != *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL))
    || (v20 = *(_BYTE *)(v18 + 34), (v20 & 7) != 6) && (v20 & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v17, 0x11u);
    goto LABEL_62;
  }
  v21 = MiMapPageInHyperSpaceWorker((v18 + 0x58000000000LL) / 48, 0LL, 0x80000000);
  v63 = MiComparePages(v21, v70);
  MiUnmapPageInHyperSpaceWorker(v21, 0x11u, 0x80000000LL);
  if ( v63 )
  {
    MiGetPfnPriority(v10);
    MiUpdatePfnPriority(v19);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v75 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v75, v22, v23);
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  *(_BYTE *)(v17 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v63 )
    goto LABEL_62;
  if ( dword_14043B9A8 )
    MI_WSLE_LOG_ACCESS(v72, v71);
  MiSwizzleInvalidPte(((_QWORD)v7 << 16) | 0x400LL);
  v24 = v70;
  WsleContents = MiGetWsleContents(v25, v70);
  v76 = 0;
  v29 = WsleContents;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v76, v27, v28);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v10 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_62:
    v15 = v64;
LABEL_63:
    LOBYTE(v13) = v62;
    goto LABEL_64;
  }
  v66 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v71);
  if ( v67 )
  {
    memset(v83, 0, sizeof(v83));
    MiIdentifyPfn(v10);
  }
  v30 = *(_QWORD *)(v10 + 40);
  *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v10 + 34) |= 7u;
  v31 = v30 & 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v66 )
    MiInsertTbFlushEntry(v79, v24, 1LL);
  v32 = v29;
  v33 = v72;
  MiRemoveWsle(v72, v24, 1LL, v32, 10, 1);
  MiRebuildPageTableLeafAges(v34, v24);
  v37 = 48 * v31 - 0x58000000000LL;
  v77 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v77, v35, v36);
    while ( *(__int64 *)(v37 + 24) < 0 );
  }
  MiDecrementShareCount(v37);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v61 && _InterlockedIncrement64((volatile signed __int64 *)(v80 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v64, 1LL);
  MiResolveProtoCombine(v71, v33, v7);
  Process = v78;
  v38 = v72;
LABEL_24:
  if ( (*(_BYTE *)(v38 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v67 )
  {
    if ( a7 == -1 )
      v60 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v60 = (unsigned __int64)v7 | 1;
    v83[3] = v60;
    v84[0] = v83;
    v84[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v84, 1, 671088641, 634, 289413890);
  }
  return v10;
}
