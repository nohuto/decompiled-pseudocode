/*
 * XREFs of MiConvertPrivateToProto @ 0x140141C10
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiRebuildPageTableLeafAges @ 0x14002E050 (MiRebuildPageTableLeafAges.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B160 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiUpdatePfnPriority @ 0x1400CAF14 (MiUpdatePfnPriority.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteValidPteNewPage @ 0x1400FA008 (MiWriteValidPteNewPage.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     MiComparePages @ 0x1401423B0 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1401427A4 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14014280C (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1401428B8 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x1401428FC (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x1401429F4 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6290 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E6438 (MiReturnCrossPartitionCombineCharges.c)
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
  unsigned int PfnPriority; // eax
  __int64 v25; // rbx
  __int64 v26; // rcx
  char WsleContents; // al
  char v28; // di
  __int64 *v29; // r14
  int v30; // eax
  char v31; // cl
  __int64 v32; // rbx
  __int64 v33; // rcx
  ULONG_PTR v34; // rbx
  __int64 v35; // rbx
  unsigned __int64 v37; // rbx
  char v38; // cl
  __int64 v39; // r10
  _QWORD *v40; // r9
  __int64 v41; // r11
  __int64 v42; // r11
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  char v46; // al
  __int64 v47; // rbx
  __int64 v48; // rcx
  ULONG_PTR *v49; // rbx
  unsigned __int64 v50; // r10
  BOOL v51; // eax
  char v52; // dl
  char v53; // r8
  unsigned __int64 v54; // rdi
  char v55; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v56; // [rsp+31h] [rbp-B0h]
  char v57; // [rsp+32h] [rbp-AFh]
  int v58; // [rsp+38h] [rbp-A9h]
  __int64 v59; // [rsp+38h] [rbp-A9h]
  BOOL v60; // [rsp+40h] [rbp-A1h]
  __int64 v61; // [rsp+48h] [rbp-99h] BYREF
  __int64 v62; // [rsp+50h] [rbp-91h]
  __int64 v63; // [rsp+58h] [rbp-89h]
  int v64; // [rsp+60h] [rbp-81h] BYREF
  int v65; // [rsp+64h] [rbp-7Dh] BYREF
  int v66; // [rsp+68h] [rbp-79h] BYREF
  int v67; // [rsp+6Ch] [rbp-75h] BYREF
  int v68; // [rsp+70h] [rbp-71h] BYREF
  __int64 *v69; // [rsp+78h] [rbp-69h]
  __int64 v70; // [rsp+80h] [rbp-61h]
  __int64 v71; // [rsp+88h] [rbp-59h]
  __int64 v72; // [rsp+90h] [rbp-51h]
  unsigned __int64 ContainingPageTable; // [rsp+98h] [rbp-49h]
  __int64 v74; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  unsigned __int64 v76[4]; // [rsp+B0h] [rbp-31h] BYREF
  _QWORD v77[2]; // [rsp+D0h] [rbp-11h] BYREF

  v69 = (__int64 *)a2;
  v63 = a3;
  v70 = a6;
  memset(v76, 0, sizeof(v76));
  v10 = a3 + 48;
  Process = KeGetCurrentThread()->ApcState.Process;
  v60 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v61 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v61) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v13 = *(unsigned __int16 *)(a1 + 174);
  v14 = 0;
  v15 = *a5;
  v62 = *a5;
  v16 = (__int64)(a2 << 25) >> 16;
  v56 = 0;
  v55 = v12;
  v17 = *(_QWORD *)(qword_140465E88 + 8 * v13);
  v71 = v17;
  if ( a7 != -1 )
  {
    v59 = 48 * a7 - 0x58000000000LL;
    if ( !(unsigned int)MiFillCombinePage(v59, v59, v11, v16) )
      return 0LL;
    v72 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    v37 = 0LL;
    ContainingPageTable = MiGetContainingPageTable(v10);
    v74 = 48 * ContainingPageTable - 0x58000000000LL;
    if ( v62 == v17 )
    {
      v38 = 1;
    }
    else
    {
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v62, 0LL) )
        return 0LL;
      v38 = 0;
      v55 = 0;
    }
    v64 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
      v38 = v55;
    }
    if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v11 + 32) != 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = 0;
      goto LABEL_63;
    }
    if ( v60 )
    {
      MiIdentifyPfn(v11, v76);
      v38 = v55;
    }
    if ( (v61 & 0x42) != 0 )
      v61 &= 0xFFFFFFFFFFFFFFBDuLL;
    if ( (*(_BYTE *)(v11 + 34) & 0x10) == 0 )
    {
      v51 = IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v11 + 16));
      v38 = v55;
      if ( !v51 )
        *(_BYTE *)(v11 + 34) = v52 | 0x10;
    }
    v39 = *(_QWORD *)(v11 + 16);
    v40 = (_QWORD *)(v11 + 16);
    if ( (v39 & 2) != 0 )
    {
      if ( !v38 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v71, (_WORD *)(v11 + 16)) )
      {
        v37 = MiCapturePageFileInfoInline(v40, 1, 1);
        v40 = (_QWORD *)(v11 + 16);
        *(_BYTE *)(v11 + 34) |= 0x10u;
      }
      else
      {
        v37 = v50;
      }
      *v40 &= ~2uLL;
    }
    else if ( !v38 && (v39 & 4) != 0 )
    {
      v37 = MiCapturePageFileInfoInline((_QWORD *)(v11 + 16), 1, 1);
      *(_BYTE *)(v11 + 34) |= 0x10u;
    }
    MiLockNestedPageAtDpcInline(v59);
    MiFinalizePageAttribute(v59, *(unsigned __int8 *)(v11 + 34) >> 6, 1u);
    MiCopyPfnEntryEx(v59, (__int128 *)v11);
    if ( (unsigned int)MiGetPfnPriority(v59) < 5 )
      *(_BYTE *)(v41 + 35) = *(_BYTE *)(v41 + 35) & 0xF8 | 5;
    *(_QWORD *)(v41 + 8) = v72;
    *(_QWORD *)(v41 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v41 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
    MI_MAKE_PROTECT_WRITE_COPY(v41 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v55 )
    {
      v43 = *(_QWORD *)(v11 + 16);
      if ( (v43 & 4) != 0 )
      {
        *(_QWORD *)(v11 + 16) = v43 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( v37 )
          v37 &= ~4uLL;
      }
    }
    v44 = v61 ^ (v61 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
    v61 = v44;
    if ( (v44 & 0x800) != 0 )
    {
      v44 = v44 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
      v61 = v44;
    }
    MiWriteValidPteNewPage(v69, v44, 0);
    if ( !v55 )
      *(_QWORD *)(v63 + 56) = 1LL;
    *(_QWORD *)v10 = 0LL;
    if ( MiPteInShadowRange(v10) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_1404658EC) && (v53 & 1) != 0 )
          v45 |= 0x8000000000000000uLL;
        *(_QWORD *)v10 = v45;
        MiWritePteShadow(v10);
        goto LABEL_51;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v53 & 1) != 0 )
      {
        v45 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v10 = v45;
LABEL_51:
    v46 = *(_BYTE *)(v11 + 34);
    *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
    *(_BYTE *)(v11 + 34) = v46 | 7;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertTbFlushEntry(v70, v16, 1LL, 0);
    if ( v37 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)), v37, 1);
    v47 = v74;
    v65 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v65);
      while ( *(__int64 *)(v47 + 24) < 0 );
    }
    v48 = *(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v47 + 24) = v48;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v55 == 1 )
    {
      v49 = (ULONG_PTR *)v62;
      if ( (ULONG_PTR *)v62 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 8128), 1uLL);
      MiReturnCommit((__int64)v49, 1uLL);
      if ( v49 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140466738, 0xFFFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      MiSetWsleProtection(v48, v16, 0LL);
    MiUpdateWorkingSetPrivateSize(a1, v16, -1LL, 0LL);
    goto LABEL_24;
  }
  v55 = v12;
  if ( v15 == v17 )
    goto LABEL_3;
  v56 = v12;
  v14 = v12;
  if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v15, v12) )
    return 0LL;
  v55 = 0;
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
    || v15 != *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL))
    || (v21 = *(_BYTE *)(v19 + 34), (v21 & 7) != 6) && (v21 & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v18, 0x11u);
    v14 = v56;
LABEL_64:
    if ( !v55 )
      MiReturnCrossPartitionCombineCharges(v15, v14);
    return 0LL;
  }
  v22 = MiMapPageInHyperSpaceWorker((v19 + 0x58000000000LL) / 48, 0LL, 0x80000000);
  v57 = MiComparePages(v22, v16);
  LOBYTE(v23) = 17;
  MiUnmapPageInHyperSpaceWorker(v22, v23, 0x80000000LL);
  if ( v57 == 1 )
  {
    PfnPriority = MiGetPfnPriority(v11);
    MiUpdatePfnPriority(v20, PfnPriority, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v66 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v66);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_BYTE *)(v18 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v18);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v57 )
    goto LABEL_62;
  if ( dword_140466068 )
    MI_WSLE_LOG_ACCESS(a1, v69);
  v25 = MiSwizzleInvalidPte(((v63 + 48) << 16) | 0x400) | 0x800;
  WsleContents = MiGetWsleContents(v26, v16);
  v67 = 0;
  v28 = WsleContents;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v67);
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v11 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_62:
    v14 = v56;
LABEL_63:
    v15 = v62;
    goto LABEL_64;
  }
  v29 = v69;
  v30 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v69, v25);
  v58 = v30;
  if ( v60 )
  {
    MiIdentifyPfn(v11, v76);
    v30 = v58;
  }
  v31 = *(_BYTE *)(v11 + 34);
  *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
  v32 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v11 + 34) = v31 | 7;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v30 == 1 )
    MiInsertTbFlushEntry(v70, v16, 1LL, 0);
  MiRemoveWsle(a1, v16, 1LL, v28, 10, 1);
  MiRebuildPageTableLeafAges(v33, v16);
  v34 = 48 * v32 - 0x58000000000LL;
  v68 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v68);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  MiDecrementShareCount(v34);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v35 = v63;
  if ( !v55 && _InterlockedIncrement64((volatile signed __int64 *)(v63 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v62, 1LL);
  v10 = v35 + 48;
  MiResolveProtoCombine(v29, a1, v35 + 48);
LABEL_24:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v60 )
  {
    if ( a7 == -1 )
      v54 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v54 = v10 | 1;
    v76[3] = v54;
    v77[0] = v76;
    v77[1] = 32LL;
    EtwTraceKernelEvent((__int64)v77, 1u, 0x28000001u, 0x27Au, 0x11401B02u);
  }
  return v11;
}
