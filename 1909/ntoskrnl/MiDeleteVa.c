/*
 * XREFs of MiDeleteVa @ 0x14004B520
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWsle @ 0x14001FE74 (MiUnlockWsle.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiEvictPageTableLock @ 0x14005E204 (MiEvictPageTableLock.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x1400C02A0 (MiRotatedToFrameBuffer.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiFlushTbListEarly @ 0x1400DB720 (MiFlushTbListEarly.c)
 *     MiCountWslesInPageTable @ 0x1400F2590 (MiCountWslesInPageTable.c)
 *     MiUnmapFrameBuffer @ 0x1400F4C0C (MiUnmapFrameBuffer.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140116650 (MiCompressTbFlushList.c)
 *     MiCreateDecayPfn @ 0x14011CC34 (MiCreateDecayPfn.c)
 *     MiLockSetPfnPriority @ 0x140122DD0 (MiLockSetPfnPriority.c)
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     MiDeletePhysmemPte @ 0x14015B04C (MiDeletePhysmemPte.c)
 *     MiWriteTopLevelPxe @ 0x14017A800 (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x1402D599C (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1402E13AC (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x1402E36E4 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r13
  int v10; // r12d
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  char v23; // si
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 *v29; // rdx
  __int64 v30; // rax
  _BOOL8 v31; // rcx
  __int64 v32; // rax
  int v33; // ebx
  unsigned __int64 v34; // rdx
  bool v35; // zf
  unsigned __int64 v36; // rsi
  __int64 v37; // r10
  __int64 v38; // r11
  unsigned __int64 v39; // rcx
  BOOL v40; // r11d
  int v41; // r9d
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r10
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 *v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // r11
  unsigned int v52; // r9d
  char v53; // r10
  __int64 v54; // r11
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r10
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // rcx
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // r10
  ULONG_PTR v70; // rbx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  size_t v76; // rcx
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // eax
  unsigned int PfnPriority; // eax
  __int64 DecayPfn; // rax
  int v87; // eax
  char v88; // r10
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // r9
  __int64 v92; // r10
  int v93; // r11d
  __int64 v94; // rax
  char v95; // cl
  int v96; // edx
  __int64 v97; // rcx
  unsigned __int8 WsleContents; // al
  __int64 v99; // rcx
  int v100; // eax
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // r8
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  char v111; // r8^7
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  char v114; // r8^7
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // r8
  unsigned __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // r8
  unsigned __int64 v121; // r8
  __int64 v122; // rax
  __int64 v123; // r8
  unsigned __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // r8
  char v128; // cl
  unsigned __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v133; // rdx
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // r8
  __int64 v138; // [rsp+30h] [rbp-79h]
  __int64 v139; // [rsp+38h] [rbp-71h]
  int v140; // [rsp+44h] [rbp-65h]
  int v141; // [rsp+44h] [rbp-65h]
  __int64 v142; // [rsp+48h] [rbp-61h]
  int v143; // [rsp+48h] [rbp-61h]
  int v144; // [rsp+48h] [rbp-61h]
  unsigned __int64 v145; // [rsp+50h] [rbp-59h] BYREF
  _BOOL8 v146; // [rsp+58h] [rbp-51h]
  __int64 *v147; // [rsp+60h] [rbp-49h]
  int v148; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR v149; // [rsp+70h] [rbp-39h] BYREF
  __int64 v150; // [rsp+78h] [rbp-31h] BYREF
  ULONG_PTR v151; // [rsp+80h] [rbp-29h] BYREF
  __int64 v152; // [rsp+88h] [rbp-21h] BYREF
  __int64 v153; // [rsp+90h] [rbp-19h] BYREF
  __int64 v154; // [rsp+98h] [rbp-11h] BYREF
  char v155[8]; // [rsp+A0h] [rbp-9h] BYREF
  _DWORD v156[8]; // [rsp+A8h] [rbp-1h] BYREF

  v3 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v103 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
      v104 = v3 | 0x20;
      if ( (v103 & 0x20) == 0 )
        v104 = v3;
      v3 = v104;
      if ( (v103 & 0x42) != 0 )
        v3 = v104 | 0x42;
    }
  }
  v145 = v3;
  if ( !v3 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  v139 = v7;
  v10 = *(_DWORD *)(v7 + 32);
  v138 = v8;
  v11 = (__int64)(a2 << 25) >> 16;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 0x400) == 0 )
    {
      if ( (v3 & 0x800) != 0 )
      {
        if ( (v10 & 0x400) == 0 )
        {
          if ( (v10 & 0x10) != 0 && (v3 & 0x3E0) == 0x300 )
          {
            MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL), a2, v7 + 40);
            v7 = v139;
          }
          goto LABEL_43;
        }
        goto LABEL_228;
      }
      if ( (v3 & 0x3E0) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
      v59 = *(unsigned __int16 *)(v8 + 174);
      v149 = v3;
      v60 = *(_QWORD *)(qword_140465E88 + 8 * v59);
      if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
        v61 = MI_READ_PTE_LOCK_FREE(&v149);
      else
        v61 = 0LL;
      v149 = v61;
      if ( v61 )
      {
        MiReleasePageFileInfo(v60, v61, 0LL);
        v7 = v139;
        v8 = v138;
      }
      if ( (*(_BYTE *)(v8 + 184) & 7) != 0 )
        goto LABEL_215;
      if ( (v10 & 0x40) != 0 )
      {
        if ( qword_140465800 && (v3 & 0x10) == 0 )
          LOWORD(v3) = ~(_WORD)qword_140465800 & v3;
        if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_215:
          ++*(_QWORD *)(*(_QWORD *)(v7 + 16) + 24LL);
      }
      if ( !MiPteInShadowRange(a2) )
      {
LABEL_95:
        *(_QWORD *)a2 = v62;
        goto LABEL_96;
      }
      if ( (unsigned int)MiPteHasShadow(v63) )
      {
        if ( HIBYTE(word_1404658EC) || (v62 & 1) == 0 )
          goto LABEL_338;
        goto LABEL_337;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
        || (v62 & 1) == 0 )
      {
        goto LABEL_95;
      }
      goto LABEL_349;
    }
    v80 = v3;
    if ( qword_140465800 && (v3 & 0x10) == 0 )
      v80 = v3 & ~qword_140465800;
    v81 = v80 >> 16;
    v82 = v3;
    if ( qword_140465800 && (v3 & 0x10) == 0 )
      v82 = v3 & ~qword_140465800;
    if ( HIDWORD(v82) == 0xFFFFFFFF || (v3 & 0x800) == 0 )
    {
      if ( !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12]
        || (unsigned int)MiIsPrototypePteVadLookup(v3)
        || (CloneAddress = MiLocateCloneAddress(v131, v130)) == 0 )
      {
LABEL_148:
        if ( !MiPteInShadowRange(a2) )
          goto LABEL_95;
        if ( (unsigned int)MiPteHasShadow(v83) )
        {
          if ( HIBYTE(word_1404658EC) || (v62 & 1) == 0 )
            goto LABEL_338;
LABEL_337:
          v62 |= 0x8000000000000000uLL;
LABEL_338:
          *(_QWORD *)a2 = v62;
          MiWritePteShadow(a2, v62);
          goto LABEL_96;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
          || (v62 & 1) == 0 )
        {
          goto LABEL_95;
        }
LABEL_349:
        v62 |= 0x8000000000000000uLL;
        goto LABEL_95;
      }
      v87 = MiDecrementCloneBlockReference(CloneAddress, v133);
    }
    else
    {
      v87 = MiDecrementCombinedPte(v8, v81);
    }
    if ( v87 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v139 + 16) + 8LL);
    }
    else if ( v87 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v139 + 16) + 16LL);
    }
    goto LABEL_148;
  }
  v12 = 0xFFFFF6FB40000000uLL;
  if ( a3 < 1 )
    goto LABEL_5;
  if ( (v3 & 0x80u) != 0LL )
  {
LABEL_228:
    MiDeleteLargeUserPde(a1, a2, (unsigned int)a3);
    return 0LL;
  }
  if ( (*(_BYTE *)(v8 + 184) & 7) != 1 || a2 != 0xFFFFF6FB7DBEDF68uLL )
  {
    v77 = (__int64)(a2 << 25) >> 16;
    if ( v11 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v77 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v77 = (__int64)(v77 << 25) >> 16;
      }
      while ( v77 >= 0xFFFFF68000000000uLL );
    }
    if ( v77 > 0x7FFFFFFEFFFFLL )
    {
      v150 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v150) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        return 0LL;
      if ( v88 == 1 )
      {
        if ( (*(_BYTE *)a1 & 4) != 0 )
          MiLockPageTableInternal(v8, a2, 0LL, v7);
        v89 = (__int64)(a2 << 25) >> 16;
        v141 = 1;
        while ( 1 )
        {
          v90 = MI_READ_PTE_LOCK_FREE(v89);
          v150 = v90;
          if ( v90 )
          {
            if ( ((unsigned __int8)v90 & (unsigned __int8)v93) == 0 )
              break;
          }
          v89 = v91 + 8;
          if ( (v89 & 0xFFF) == 0 )
            goto LABEL_177;
        }
        v93 = 0;
        v141 = 0;
LABEL_177:
        if ( v92 )
        {
          MiUnlockPageTableInternal(v138);
          v93 = v141;
        }
        if ( !v93 )
          return 0LL;
        v7 = v139;
        v8 = v138;
      }
    }
    else
    {
      v78 = ((((__int64)(v11 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
      v79 = *(_QWORD *)v78;
      if ( v78 >= 0xFFFFF6FB7DBED000uLL
        && v78 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v79 & 1) != 0
        && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
      {
        v105 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v105 )
        {
          v106 = *(_QWORD *)(v105 + 8 * ((v78 >> 3) & 0x1FF));
          v107 = v79 | 0x20;
          if ( (v106 & 0x20) == 0 )
            v107 = v79;
          v79 = v107;
          if ( (v106 & 0x42) != 0 )
            v79 = v107 | 0x42;
        }
      }
      v152 = v79;
      if ( (*(_DWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v152) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
        return 0LL;
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(v8 + 184) & 7) != 0 )
  {
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    if ( (v10 & 0x80u) != 0 || v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_71;
    v145 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( !(unsigned int)MiEvictPageTableLock(v138, a2, v145, a3 > 1) )
      return 0LL;
LABEL_74:
    v33 = 0;
    v7 = v139;
    goto LABEL_35;
  }
  if ( a3 )
    goto LABEL_23;
  if ( (v10 & 0x400) != 0 )
  {
    MiDeleteLargeUserPde(a1, a2, 0LL);
    MiFlushTbListEarly(v9, 0LL);
    return 0LL;
  }
  if ( (v10 & 0x10) != 0 )
  {
    v108 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL), a2, v7 + 40);
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, v108);
    goto LABEL_74;
  }
  if ( (v10 & 0x20) != 0 )
  {
    v100 = MiDeletePhysmemPte(a1, a2, v12, v7);
    v7 = v139;
    v33 = v100;
    goto LABEL_35;
  }
  if ( (v10 & 8) != 0 && (unsigned int)MiRotatedToFrameBuffer(a2) == 1 )
  {
    MiUnmapFrameBuffer(a2, 3LL, 0LL, v155);
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    goto LABEL_74;
  }
  if ( (v10 & 0x50) != 0x40 )
    goto LABEL_75;
  if ( (v10 & 2) != 0 && (*(_BYTE *)(v138 + 187) & 1) == 0 && dword_140466068 )
  {
    if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_18;
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v109 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v109 )
      {
        v110 = *(_QWORD *)(v109 + 8 * ((v13 >> 3) & 0x1FF));
        v111 = HIBYTE(*(_QWORD *)v13);
        if ( (v110 & 0x20) == 0 )
          v111 = HIBYTE(v14);
        HIBYTE(v14) = v111;
        if ( (v110 & 0x42) != 0 )
          HIBYTE(v14) = v111;
      }
    }
    if ( (HIBYTE(v14) & 0xF) != 7 )
    {
LABEL_18:
      if ( (*(_BYTE *)a2 & 0x20) != 0 )
        MiLogPageAccess(v138, a2);
    }
  }
  v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v145) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    if ( (v10 & 1) != 0 && (unsigned int)MiGetPfnPriority(v16, v15, v17, v18) - 3 <= 2 )
      MiLockSetPfnPriority(v99, 2LL);
    v7 = v139;
    if ( (v10 & 4) != 0
      && !*(_QWORD *)(v139 + 24)
      && (v3 & 0x42) == 0
      && (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0
      && (*(_BYTE *)(v16 + 34) & 0x10) == 0 )
    {
      PfnPriority = MiGetPfnPriority(v16, v15, v17, v139);
      if ( PfnPriority < 5 )
      {
        DecayPfn = MiCreateDecayPfn(PfnPriority);
        v7 = v139;
        *(_QWORD *)(v139 + 24) = DecayPfn;
      }
    }
  }
  else
  {
LABEL_75:
    v7 = v139;
  }
LABEL_23:
  if ( (v10 & 0x80u) != 0 )
  {
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    goto LABEL_71;
  }
  if ( a3 )
    goto LABEL_47;
  v19 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = *(_QWORD *)v19;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL
    && v19 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v112 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v112 )
    {
      v113 = *(_QWORD *)(v112 + 8 * ((v19 >> 3) & 0x1FF));
      v114 = HIBYTE(*(_QWORD *)v19);
      if ( (v113 & 0x20) == 0 )
        v114 = HIBYTE(v20);
      HIBYTE(v20) = v114;
      if ( (v113 & 0x42) != 0 )
        HIBYTE(v20) = v114;
    }
  }
  if ( (HIBYTE(v20) & 0xF) == 8 )
    goto LABEL_47;
  v142 = v7 + 48;
  v21 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = *(_QWORD *)v21;
  if ( v21 >= 0xFFFFF6FB7DBED000uLL
    && v21 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v115 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v115 )
    {
      v116 = *(_QWORD *)(v115 + 8 * ((v21 >> 3) & 0x1FF));
      v117 = v22 | 0x20;
      if ( (v116 & 0x20) == 0 )
        v117 = v22;
      v22 = v117;
      if ( (v116 & 0x42) != 0 )
        v22 = v117 | 0x42;
    }
  }
  v23 = HIBYTE(v22) & 0xF | (16 * ((v22 >> 60) & 7));
  v24 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v24 & 1) != 0
    && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
  {
    v118 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v118 )
    {
      v119 = *(_QWORD *)(v118 + 8 * ((a2 >> 3) & 0x1FF));
      v120 = v24 | 0x20;
      if ( (v119 & 0x20) == 0 )
        v120 = *(_QWORD *)a2;
      v24 = v120;
      if ( (v119 & 0x42) != 0 )
        v24 = v120 | 0x42;
    }
  }
  v153 = v24;
  v25 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v153) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
  v29 = (__int64 *)(v27 + 16);
  v30 = *(_QWORD *)(v27 + 8);
  v31 = ((v25 >> 57) & 1) == 0;
  v146 = v31;
  if ( !v30 )
  {
LABEL_129:
    *(_QWORD *)v27 = v28;
    v32 = 1LL;
    *(_QWORD *)(v27 + 8) = a2;
    *(_BYTE *)(v27 + 24) = v31;
    *(_BYTE *)(v27 + 26) = v23;
    goto LABEL_34;
  }
  v26 = *v29;
  if ( a2 == v30 + 8 * *v29 && v23 == *(_BYTE *)(v27 + 26) && v31 == *(_BYTE *)(v27 + 24) )
  {
    v32 = v26 + 1;
LABEL_34:
    v33 = 0;
    *v29 = v32;
    v151 = *(_QWORD *)a2;
    goto LABEL_35;
  }
  v35 = *(_BYTE *)(v27 + 25) == 0;
  v147 = (__int64 *)(v27 + 16);
  if ( v35 )
  {
    MiTerminateWsleCluster(v27);
    LOBYTE(v31) = v146;
    v7 = v139;
    v27 = v142;
    v29 = v147;
    v28 = v138;
    goto LABEL_129;
  }
LABEL_47:
  LODWORD(v146) = 1;
  v140 = 0;
  v36 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v36) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v84 = (*(_BYTE *)v37 >> 1) & 7;
    LODWORD(v147) = 0;
    v144 = v84;
    if ( !(unsigned int)MiEvictPageTableLock(v38, v36, ZeroPte, 0LL) )
      return 0LL;
    v40 = v146;
    v41 = v144;
    goto LABEL_58;
  }
  v39 = *(_QWORD *)v36;
  LODWORD(v147) = 1;
  if ( v36 >= 0xFFFFF6FB7DBED000uLL
    && v36 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v39 & 1) != 0
    && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
  {
    v121 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v121 )
    {
      v122 = *(_QWORD *)(v121 + 8 * ((v36 >> 3) & 0x1FF));
      v123 = v39 | 0x20;
      if ( (v122 & 0x20) == 0 )
        v123 = v39;
      v39 = v123;
      if ( (v122 & 0x42) != 0 )
        v39 = v123 | 0x42;
    }
  }
  v40 = (*(_QWORD *)(v37 + 40) & 0x200000000000000LL) == 0;
  v146 = (*(_QWORD *)(v37 + 40) & 0x200000000000000LL) == 0;
  v41 = HIBYTE(v39) & 0xF | (unsigned __int8)(16 * ((v39 >> 60) & 7));
  v143 = v41;
  if ( (HIBYTE(v39) & 0xF) == 8 )
  {
    MiUnlockWsle(v138, (__int64)(a2 << 25) >> 16, v37);
    WsleContents = MiGetWsleContents(v97, (__int64)(a2 << 25) >> 16);
    v40 = v146;
    v41 = WsleContents;
    v143 = WsleContents;
  }
  v42 = ZeroPte;
  v43 = *(_QWORD *)v36;
  v44 = 0xFFFFF6FB7DBED000uLL;
  if ( v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL) )
      LOBYTE(v43) = v43 | 0x20;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v43) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v43 & 0x20) == 0 )
  {
    v145 = _InterlockedExchange64((volatile __int64 *)v36, v42);
    if ( v36 >= v44 && v36 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v36, v42);
      v41 = v143;
    }
    if ( (v145 & 0x20) == 0 )
      goto LABEL_59;
    goto LABEL_58;
  }
  if ( MiPteInShadowRange(v36) )
  {
    if ( (unsigned int)MiPteHasShadow(v45) )
    {
      if ( !HIBYTE(word_1404658EC) && (v46 & 1) != 0 )
        v46 |= 0x8000000000000000uLL;
      *(_QWORD *)v36 = v46;
      MiWritePteShadow(v36, v46);
      v41 = v143;
      goto LABEL_58;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v46 & 1) != 0 )
    {
      v46 |= 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)v36 = v46;
LABEL_58:
  v140 = 1;
LABEL_59:
  MiRemoveWsle(v138, (__int64)(a2 << 25) >> 16, 1, v41, 10, v40);
  if ( (_DWORD)v147 )
  {
    v47 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v48 = *(_QWORD *)v47;
    if ( v47 >= 0xFFFFF6FB7DBED000uLL
      && v47 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      v125 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v125 )
      {
        v126 = *(_QWORD *)(v125 + 8 * ((v47 >> 3) & 0x1FF));
        v127 = v48 | 0x20;
        if ( (v126 & 0x20) == 0 )
          v127 = v48;
        v48 = v127;
        if ( (v126 & 0x42) != 0 )
          v48 = v127 | 0x42;
      }
    }
    v154 = v48;
    v49 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v154) >> 12) & 0xFFFFFFFFFLL)
                             - 0x58000000000LL);
    if ( ((*(_DWORD *)v49 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(0xFFFFFFFFFLL, (__int64)(a2 << 25) >> 16, v156);
      v95 = 8;
      while ( 1 )
      {
        v96 = v156[(unsigned __int8)--v95];
        if ( v96 )
          break;
        if ( !v95 )
          goto LABEL_62;
      }
      *v49 = *v49 & 0xFFFFFFFFFFFE000FuLL | (16 * (v96 & 0x3FF | ((unsigned __int64)(v95 & 7) << 10)));
    }
  }
LABEL_62:
  if ( v140 != 1 )
    goto LABEL_71;
  v50 = 1LL;
  v51 = (__int64)(a2 << 25) >> 16;
  if ( *(_DWORD *)v9 != 1 )
  {
    v128 = *(_BYTE *)(v9 + 4);
    if ( (v128 & 8) == 0 && v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(v9 + 4) = v128 | 8;
  }
  v52 = *(_DWORD *)(v9 + 12);
  v53 = *(_BYTE *)(v9 + 4);
  if ( v52 )
  {
    if ( (v53 & 4) == 0 )
    {
      v54 = 8LL * (v52 - 1);
      v55 = *(_QWORD *)(v54 + v9 + 24);
      if ( (v55 & 0xC00) == 0 )
      {
        v56 = *(_QWORD *)(v54 + v9 + 24) & 0x3FFLL;
        if ( (v55 & 0xFFFFFFFFFFFFF000uLL) + ((v56 + 1) << 12) == v11 && v56 + 1 >= v56 && v56 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v9 + 16);
          *(_QWORD *)(v54 + v9 + 24) = v55 ^ ((unsigned __int16)v55 ^ (unsigned __int16)(v55 + 1)) & 0x3FF;
          goto LABEL_71;
        }
      }
      v51 = (__int64)(a2 << 25) >> 16;
    }
    if ( (v53 & 4) == 0 )
    {
      v71 = 8LL * (v52 - 1);
      v72 = *(_QWORD *)(v71 + v9 + 24);
      if ( (v72 & 0xC00) == 0 && (v72 & 0xFFFFFFFFFFFFF000uLL) == v11 + 4096 )
      {
        v129 = *(_QWORD *)(v71 + v9 + 24) & 0x3FFLL;
        if ( v129 + 1 >= v129 && v129 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v9 + 16);
          *(_QWORD *)(v71 + v9 + 24) = (v72 - 4096) ^ ((unsigned __int16)(v72 - 4096) ^ (unsigned __int16)(v72 - 4096 + 1)) & 0x3FF;
          goto LABEL_71;
        }
      }
    }
  }
  if ( v52 >= *(_DWORD *)(v9 + 8) )
  {
    *(_BYTE *)(v9 + 5) = 1;
    goto LABEL_71;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)(v50 - 1) > 0x3FF )
      v73 = 1024LL;
    else
      v73 = v50;
    v74 = v51 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v73 - 1) & 0x3FF;
    v50 -= v73;
    v51 += v73 << 12;
    v75 = *(unsigned int *)(v9 + 12);
    v145 = v51;
    *(_QWORD *)(v9 + 8 * v75 + 24) = v74;
    v76 = (unsigned int)++*(_DWORD *)(v9 + 12);
    *(_QWORD *)(v9 + 16) += v73;
    if ( (_DWORD)v76 != *(_DWORD *)(v9 + 8) || (*(_BYTE *)(v9 + 4) & 4) != 0 )
      goto LABEL_110;
    qsort((void *)(v9 + 24), v76, 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(v9);
    v94 = *(unsigned int *)(v9 + 12);
    if ( (_DWORD)v94 == *(_DWORD *)(v9 + 8) )
      break;
    v51 = v145;
LABEL_110:
    if ( !v50 )
      goto LABEL_71;
  }
  if ( v50 )
  {
    *(_BYTE *)(v9 + 5) = 1;
    *(_QWORD *)(v9 + 16) = v94;
  }
LABEL_71:
  v57 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  v145 = v57;
  if ( a3 == 3 && (*(_BYTE *)(v138 + 184) & 7) != 0 )
  {
    MiWriteTopLevelPxe(a2, v57);
    goto LABEL_74;
  }
  if ( !MiPteInShadowRange(a2) || !(unsigned int)MiPteHasShadow(v58) )
  {
    *(_QWORD *)a2 = v57;
    goto LABEL_74;
  }
  *(_QWORD *)a2 = v57;
  MiWritePteShadow(a2, v57);
  v7 = v139;
  v33 = 0;
LABEL_35:
  v34 = qword_140465850;
  if ( (*(_BYTE *)(v9 + 4) & 2) == 0
    && *(_DWORD *)v9 == 1
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19] )
  {
    v34 = -1LL;
  }
  if ( (*(_DWORD *)(v9 + 12) >= *(_DWORD *)(v9 + 8) || *(_BYTE *)(v9 + 5) || *(_QWORD *)(v9 + 16) > v34)
    && v34 >= 0x400
    && !*(_BYTE *)(v9 + 5) )
  {
    MiFlushTbList(v9, v34, v26, v7);
    v7 = v139;
  }
  if ( !v33 )
  {
LABEL_43:
    if ( !*(_QWORD *)v7 )
      *(_QWORD *)v7 = a2;
    *(_QWORD *)(v7 + 8) = a2;
    return 0LL;
  }
LABEL_96:
  if ( (v10 & 0x40) != 0 && (a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v64 = (v11 >> 18) & 0x3FFFFFF8;
    v65 = *(_QWORD *)(v64 - 0x904C0000000LL);
    v66 = v64 - 0x904C0000000LL;
    if ( (unsigned __int64)(v64 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v66 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v65 & 1) != 0
      && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
    {
      v135 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v135 )
      {
        v136 = *(_QWORD *)(v135 + 8 * ((v66 >> 3) & 0x1FF));
        v137 = v65 | 0x20;
        if ( (v136 & 0x20) == 0 )
          v137 = *(_QWORD *)(v64 - 0x904C0000000LL);
        v65 = v137;
        if ( (v136 & 0x42) != 0 )
          v65 = v137 | 0x42;
      }
    }
    v151 = v65;
    v67 = MI_READ_PTE_LOCK_FREE(&v151);
    v70 = v69 + 48 * (v68 & (v67 >> 12));
    if ( (*(_DWORD *)(v70 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v70, HIWORD(*(_DWORD *)(v70 + 16)) & 0x3FF, 1uLL);
    v148 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v148);
      while ( *(__int64 *)(v70 + 24) < 0 );
    }
    *(_QWORD *)(v70 + 16) ^= ((unsigned int)*(_QWORD *)(v70 + 16) ^ (((unsigned int)(*(_QWORD *)(v70 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
