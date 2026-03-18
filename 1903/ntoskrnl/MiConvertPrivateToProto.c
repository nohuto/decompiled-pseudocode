/*
 * XREFs of MiConvertPrivateToProto @ 0x1401416D0
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiRebuildPageTableLeafAges @ 0x14002DC60 (MiRebuildPageTableLeafAges.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveWsle @ 0x14004C540 (MiRemoveWsle.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B0C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiCopyPfnEntryEx @ 0x14009D550 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiWriteValidPteNewPage @ 0x1400F6568 (MiWriteValidPteNewPage.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiComparePages @ 0x140141E70 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140142264 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1401422CC (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140142378 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x1401423BC (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x1401424B4 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6530 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E66D8 (MiReturnCrossPartitionCombineCharges.c)
 */

unsigned __int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned int v12; // r9d
  __int64 v13; // rcx
  unsigned __int8 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  ULONG_PTR v18; // r14
  __int64 v19; // rax
  ULONG_PTR v20; // rdi
  char v21; // cl
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int PfnPriority; // eax
  __int64 v28; // rbx
  __int64 v29; // rcx
  char WsleContents; // al
  char v31; // di
  __int64 *v32; // r14
  int v33; // eax
  char v34; // cl
  __int64 v35; // rbx
  __int64 v36; // rcx
  ULONG_PTR v37; // rbx
  __int64 v38; // rbx
  unsigned __int64 v40; // rbx
  char v41; // cl
  __int64 v42; // r10
  _QWORD *v43; // r9
  __int64 v44; // r11
  __int64 v45; // r11
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rbx
  __int64 v51; // rcx
  ULONG_PTR *v52; // rbx
  unsigned __int64 v53; // r10
  BOOL v54; // eax
  char v55; // dl
  char v56; // r8
  unsigned __int64 v57; // rdi
  char v58; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v59; // [rsp+31h] [rbp-B0h]
  char v60; // [rsp+32h] [rbp-AFh]
  int v61; // [rsp+38h] [rbp-A9h]
  __int64 v62; // [rsp+38h] [rbp-A9h]
  BOOL v63; // [rsp+40h] [rbp-A1h]
  __int64 v64; // [rsp+48h] [rbp-99h] BYREF
  __int64 v65; // [rsp+50h] [rbp-91h]
  __int64 v66; // [rsp+58h] [rbp-89h]
  int v67; // [rsp+60h] [rbp-81h] BYREF
  int v68; // [rsp+64h] [rbp-7Dh] BYREF
  int v69; // [rsp+68h] [rbp-79h] BYREF
  int v70; // [rsp+6Ch] [rbp-75h] BYREF
  int v71; // [rsp+70h] [rbp-71h] BYREF
  __int64 *v72; // [rsp+78h] [rbp-69h]
  __int64 v73; // [rsp+80h] [rbp-61h]
  __int64 v74; // [rsp+88h] [rbp-59h]
  __int64 v75; // [rsp+90h] [rbp-51h]
  unsigned __int64 ContainingPageTable; // [rsp+98h] [rbp-49h]
  __int64 v77; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  unsigned __int64 v79[4]; // [rsp+B0h] [rbp-31h] BYREF
  _QWORD v80[2]; // [rsp+D0h] [rbp-11h] BYREF

  v72 = (__int64 *)a2;
  v66 = a3;
  v73 = a6;
  memset(v79, 0, sizeof(v79));
  v10 = a3 + 48;
  Process = KeGetCurrentThread()->ApcState.Process;
  v63 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v64 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v64) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v13 = *(unsigned __int16 *)(a1 + 174);
  v14 = 0;
  v15 = *a5;
  v65 = *a5;
  v16 = (__int64)(a2 << 25) >> 16;
  v59 = 0;
  v58 = v12;
  v17 = *(_QWORD *)(qword_140466188 + 8 * v13);
  v74 = v17;
  if ( a7 != -1 )
  {
    v62 = 48 * a7 - 0x58000000000LL;
    if ( !(unsigned int)MiFillCombinePage(v62, v62, v11, v16) )
      return 0LL;
    v75 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    v40 = 0LL;
    ContainingPageTable = MiGetContainingPageTable(v10);
    v77 = 48 * ContainingPageTable - 0x58000000000LL;
    if ( v65 == v17 )
    {
      v41 = 1;
    }
    else
    {
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v65, 0LL) )
        return 0LL;
      v41 = 0;
      v58 = 0;
    }
    v67 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v67);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
      v41 = v58;
    }
    if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v11 + 32) != 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = 0;
      goto LABEL_63;
    }
    if ( v63 )
    {
      MiIdentifyPfn(v11, v79);
      v41 = v58;
    }
    if ( (v64 & 0x42) != 0 )
      v64 &= 0xFFFFFFFFFFFFFFBDuLL;
    if ( (*(_BYTE *)(v11 + 34) & 0x10) == 0 )
    {
      v54 = IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v11 + 16));
      v41 = v58;
      if ( !v54 )
        *(_BYTE *)(v11 + 34) = v55 | 0x10;
    }
    v42 = *(_QWORD *)(v11 + 16);
    v43 = (_QWORD *)(v11 + 16);
    if ( (v42 & 2) != 0 )
    {
      if ( !v41 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v74, (_WORD *)(v11 + 16)) )
      {
        v40 = MiCapturePageFileInfoInline(v43, 1, 1);
        v43 = (_QWORD *)(v11 + 16);
        *(_BYTE *)(v11 + 34) |= 0x10u;
      }
      else
      {
        v40 = v53;
      }
      *v43 &= ~2uLL;
    }
    else if ( !v41 && (v42 & 4) != 0 )
    {
      v40 = MiCapturePageFileInfoInline((_QWORD *)(v11 + 16), 1, 1);
      *(_BYTE *)(v11 + 34) |= 0x10u;
    }
    MiLockNestedPageAtDpcInline(v62);
    MiFinalizePageAttribute(v62, *(unsigned __int8 *)(v11 + 34) >> 6, 1u);
    MiCopyPfnEntryEx(v62, (__int128 *)v11);
    if ( (unsigned int)MiGetPfnPriority(v62) < 5 )
      *(_BYTE *)(v44 + 35) = *(_BYTE *)(v44 + 35) & 0xF8 | 5;
    *(_QWORD *)(v44 + 8) = v75;
    *(_QWORD *)(v44 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v44 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
    MI_MAKE_PROTECT_WRITE_COPY(v44 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v58 )
    {
      v46 = *(_QWORD *)(v11 + 16);
      if ( (v46 & 4) != 0 )
      {
        *(_QWORD *)(v11 + 16) = v46 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( v40 )
          v40 &= ~4uLL;
      }
    }
    v47 = v64 ^ (v64 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
    v64 = v47;
    if ( (v47 & 0x800) != 0 )
    {
      v47 = v47 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
      v64 = v47;
    }
    MiWriteValidPteNewPage(v72, v47, 0);
    if ( !v58 )
      *(_QWORD *)(v66 + 56) = 1LL;
    *(_QWORD *)v10 = 0LL;
    if ( MiPteInShadowRange(v10) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140465BEC) && (v56 & 1) != 0 )
          v48 |= 0x8000000000000000uLL;
        *(_QWORD *)v10 = v48;
        MiWritePteShadow(v10);
        goto LABEL_51;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v56 & 1) != 0 )
      {
        v48 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v10 = v48;
LABEL_51:
    v49 = *(_BYTE *)(v11 + 34);
    *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
    *(_BYTE *)(v11 + 34) = v49 | 7;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertTbFlushEntry(v73, v16, 1LL, 0);
    if ( v40 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)), v40, 1);
    v50 = v77;
    v68 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v68);
      while ( *(__int64 *)(v50 + 24) < 0 );
    }
    v51 = *(_QWORD *)(v50 + 24) ^ (*(_QWORD *)(v50 + 24) ^ (*(_QWORD *)(v50 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v50 + 24) = v51;
    _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v58 == 1 )
    {
      v52 = (ULONG_PTR *)v65;
      if ( (ULONG_PTR *)v65 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 8128), 1uLL);
      MiReturnCommit((__int64)v52, 1uLL);
      if ( v52 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140466A38, 0xFFFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      MiSetWsleProtection(v51, v16, 0LL);
    MiUpdateWorkingSetPrivateSize(a1, v16, -1LL, 0LL);
    goto LABEL_24;
  }
  v58 = v12;
  if ( v15 == v17 )
    goto LABEL_3;
  v59 = v12;
  v14 = v12;
  if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v15, v12) )
    return 0LL;
  v58 = 0;
LABEL_3:
  v18 = MiLockProtoPoolPage(v10, 0LL);
  if ( !v18 )
    goto LABEL_64;
  v19 = MiLockLeafPage((unsigned __int64 *)v10, 0);
  v20 = v19;
  if ( !v19 )
  {
    MiUnlockProtoPoolPage(v18, 0x11u);
    goto LABEL_64;
  }
  if ( (*(_BYTE *)(v19 + 35) & 0x40) != 0
    || v15 != *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL))
    || (v21 = *(_BYTE *)(v19 + 34), (v21 & 7) != 6) && (v21 & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v18, 0x11u);
    v14 = v59;
LABEL_64:
    if ( !v58 )
      MiReturnCrossPartitionCombineCharges(v15, v14);
    return 0LL;
  }
  v22 = MiMapPageInHyperSpaceWorker((v19 + 0x58000000000LL) / 48, 0LL, 0x80000000);
  v60 = MiComparePages(v22, v16);
  LOBYTE(v23) = 17;
  MiUnmapPageInHyperSpaceWorker(v22, v23, 0x80000000LL);
  if ( v60 == 1 )
  {
    PfnPriority = MiGetPfnPriority(v11);
    MiUpdatePfnPriority(v20, PfnPriority, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_BYTE *)(v18 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v18, v24, v25, v26);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v60 )
    goto LABEL_62;
  if ( dword_140466368 )
    MI_WSLE_LOG_ACCESS(a1, v72);
  v28 = MiSwizzleInvalidPte(((v66 + 48) << 16) | 0x400) | 0x800;
  WsleContents = MiGetWsleContents(v29, v16);
  v70 = 0;
  v31 = WsleContents;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v70);
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v11 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_62:
    v14 = v59;
LABEL_63:
    v15 = v65;
    goto LABEL_64;
  }
  v32 = v72;
  v33 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v72, v28);
  v61 = v33;
  if ( v63 )
  {
    MiIdentifyPfn(v11, v79);
    v33 = v61;
  }
  v34 = *(_BYTE *)(v11 + 34);
  *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
  v35 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v11 + 34) = v34 | 7;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 == 1 )
    MiInsertTbFlushEntry(v73, v16, 1LL, 0);
  MiRemoveWsle(a1, v16, 1LL, v31, 10, 1);
  MiRebuildPageTableLeafAges(v36, v16);
  v37 = 48 * v35 - 0x58000000000LL;
  v71 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v71);
    while ( *(__int64 *)(v37 + 24) < 0 );
  }
  MiDecrementShareCount(v37);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = v66;
  if ( !v58 && _InterlockedIncrement64((volatile signed __int64 *)(v66 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v65, 1LL);
  v10 = v38 + 48;
  MiResolveProtoCombine(v32, a1, v38 + 48);
LABEL_24:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v63 )
  {
    if ( a7 == -1 )
      v57 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v57 = v10 | 1;
    v79[3] = v57;
    v80[0] = v79;
    v80[1] = 32LL;
    EtwTraceKernelEvent((__int64)v80, 1u, 0x28000001u, 0x27Au, 0x11401B02u);
  }
  return v11;
}
