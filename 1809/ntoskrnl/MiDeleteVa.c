/*
 * XREFs of MiDeleteVa @ 0x1400696F0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCountWslesInPageTable @ 0x1400F82B0 (MiCountWslesInPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockSetPfnPriority @ 0x140121FE8 (MiLockSetPfnPriority.c)
 *     MiUnmapFrameBuffer @ 0x140122E34 (MiUnmapFrameBuffer.c)
 *     MiIsPfnLocked @ 0x14013B298 (MiIsPfnLocked.c)
 *     MiWriteTopLevelPxe @ 0x140170A50 (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1402A5C34 (MiShowBadMapper.c)
 *     MiDeleteVadAwePtes @ 0x1402B0708 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1402C76B0 (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // r11
  int v6; // r10d
  ULONG_PTR v7; // rbx
  __int64 v9; // r14
  int v10; // r13d
  unsigned __int64 v11; // r9
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // rcx
  BOOL v22; // r11d
  int v23; // r9d
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rcx
  int v28; // edi
  unsigned __int64 Process; // rdx
  size_t v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rcx
  size_t *v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r10
  char v37; // r11
  __int64 v38; // r10
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  struct _KEVENT *v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  ULONG_PTR v48; // r10
  __int64 v49; // r12
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r8
  ULONG_PTR v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  char v56; // dl
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int PfnPriority; // eax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rax
  unsigned __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // r11
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned __int8 WsleContents; // al
  __int64 v75; // r9
  unsigned __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  ULONG_PTR v79; // r11
  volatile signed __int32 *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r8
  unsigned __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  __int64 v96; // rax
  char v97; // r8^7
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // r8
  unsigned __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // r8
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v114; // rdx
  unsigned __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // r8
  unsigned __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // r8
  int v122; // [rsp+30h] [rbp-79h]
  int v123; // [rsp+30h] [rbp-79h]
  unsigned __int64 v124; // [rsp+38h] [rbp-71h] BYREF
  __int64 v125; // [rsp+40h] [rbp-69h]
  int v126; // [rsp+48h] [rbp-61h]
  __int64 v127; // [rsp+50h] [rbp-59h]
  int v128; // [rsp+58h] [rbp-51h]
  int v129; // [rsp+5Ch] [rbp-4Dh]
  __int64 v130; // [rsp+60h] [rbp-49h]
  int v131; // [rsp+68h] [rbp-41h] BYREF
  int v132; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned __int64 v133; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v134; // [rsp+78h] [rbp-31h] BYREF
  ULONG_PTR v135; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v136[2]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v137[8]; // [rsp+98h] [rbp-11h] BYREF
  _DWORD v138[8]; // [rsp+A0h] [rbp-9h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v7 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_DWORD *)(v3 + 32);
  v126 = a3;
  v127 = v5;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v83 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v83 )
    {
      v84 = *(_QWORD *)(v83 + 8 * ((a2 >> 3) & 0x1FF));
      v85 = v7 | 0x20;
      if ( (v84 & 0x20) == 0 )
        v85 = v7;
      v7 = v85;
      if ( (v84 & 0x42) != 0 )
        v7 = v85 | 0x42;
    }
  }
  v124 = v7;
  if ( !v7 )
    return 0LL;
  v129 = 0;
  v13 = (__int64)(a2 << 25) >> 16;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) == 0 )
    {
      if ( (v7 & 0x800) != 0 )
      {
        if ( (v10 & 0x10) != 0 && (v7 & 0x3E0) == 0x300 )
          MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL), a2, v3 + 56, 0xFFFFF6FB7DBED7F8uLL);
        goto LABEL_61;
      }
      if ( (v7 & 0x3E0) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, a2, v7, 0LL);
      v44 = *(unsigned __int16 *)(v5 + 174);
      v135 = v7;
      v45 = *(struct _KEVENT **)(qword_14043B808 + 8 * v44);
      if ( (v7 & 4) != 0 || (v7 & 2) != 0 )
        v46 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v135);
      else
        v46 = 0LL;
      v135 = v46;
      if ( v46 )
      {
        MiReleasePageFileInfo(v45, v46, 0);
        v5 = v127;
      }
      if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
        goto LABEL_239;
      if ( (v10 & 0x40) != 0 )
      {
        if ( qword_14043B180 && (v7 & 0x10) == 0 )
          LOWORD(v7) = ~(_WORD)qword_14043B180 & v7;
        if ( (v7 & 0x400) != 0 || (v7 & 0x800) != 0 || (v7 & 4) != 0 )
LABEL_239:
          ++*(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL);
      }
      v47 = ZeroPte;
      v48 = 0xFFFFF6FB7DBED000uLL;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v44, ZeroPte) )
        {
          if ( HIBYTE(word_14043B26C) || (v47 & 1) == 0 )
            goto LABEL_379;
          goto LABEL_378;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v47 & 1) != 0 )
        {
LABEL_390:
          v47 |= 0x8000000000000000uLL;
        }
      }
LABEL_88:
      *(_QWORD *)a2 = v47;
      goto LABEL_89;
    }
    v60 = v7;
    if ( qword_14043B180 && (v7 & 0x10) == 0 )
      v60 = v7 & ~qword_14043B180;
    v61 = v60 >> 16;
    v62 = v7;
    if ( qword_14043B180 && (v7 & 0x10) == 0 )
      v62 = v7 & ~qword_14043B180;
    v63 = 0xFFFFFFFFLL;
    if ( HIDWORD(v62) == 0xFFFFFFFF || (v7 & 0x800) == 0 )
    {
      if ( !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12]
        || MiIsPrototypePteVadLookup(v7)
        || (CloneAddress = MiLocateCloneAddress(v112, v111)) == 0 )
      {
LABEL_140:
        v47 = ZeroPte;
        v48 = 0xFFFFF6FB7DBED000uLL;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v11 )
        {
          if ( (unsigned int)MiPteHasShadow(v63, ZeroPte) )
          {
            if ( HIBYTE(word_14043B26C) || (v47 & 1) == 0 )
              goto LABEL_379;
LABEL_378:
            v47 |= 0x8000000000000000uLL;
LABEL_379:
            *(_QWORD *)a2 = v47;
            MiWritePteShadow(a2);
            v48 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_89;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v47 & 1) != 0 )
          {
            goto LABEL_390;
          }
        }
        goto LABEL_88;
      }
      v66 = MiDecrementCloneBlockReference(CloneAddress, v114);
    }
    else
    {
      v66 = MiDecrementCombinedPte(v5, v61);
    }
    if ( v66 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL);
    }
    else if ( v66 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL);
    }
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_140;
  }
  v14 = v7;
  if ( (unsigned __int64)&v124 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v124 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v86 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    v14 = v7;
    if ( v86 )
    {
      v14 = v7 | 0x20;
      v87 = *(_QWORD *)(v86 + 8 * (((unsigned __int64)&v124 >> 3) & 0x1FF));
      if ( (v87 & 0x20) == 0 )
        v14 = v7;
      if ( (v87 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
  }
  v15 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v125 = v15;
  if ( a3 >= 1 )
  {
    if ( (v7 & 0x80u) != 0LL )
    {
      MiDeleteLargeUserPde(a1, a2, (unsigned int)a3);
      return 0LL;
    }
    v56 = *(_BYTE *)(v5 + 184) & 7;
    if ( v56 != 1 || a2 != 0xFFFFF6FB7DBEDF68uLL )
    {
      v57 = (__int64)(a2 << 25) >> 16;
      if ( v13 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v57 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v57 = (__int64)(v57 << 25) >> 16;
        }
        while ( v57 >= 0xFFFFF68000000000uLL );
        v15 = v125;
        v6 = v126;
      }
      if ( v57 > 0x7FFFFFFEFFFFLL )
      {
        if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          return 0LL;
        if ( v56 == 1 )
        {
          if ( (*(_DWORD *)a1 & 4) != 0 )
            MiLockPageTableInternal(v5, a2, 0LL, v15);
          v68 = (__int64)(a2 << 25) >> 16;
          while ( 1 )
          {
            v69 = MI_READ_PTE_LOCK_FREE(v68);
            v136[1] = v69;
            if ( v69 )
            {
              if ( (v69 & 1) == 0 )
                break;
            }
            v68 = v70 + 8;
            if ( (v68 & 0xFFF) == 0 )
            {
              v123 = 1;
              goto LABEL_194;
            }
          }
          v123 = 0;
LABEL_194:
          if ( (*(_DWORD *)a1 & 4) != 0 )
            MiUnlockPageTableInternal(v71, a2);
          if ( !v123 )
            return 0LL;
          v15 = v125;
          v6 = v126;
          v5 = v127;
        }
      }
      else
      {
        v58 = ((((__int64)(v13 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
        v59 = *(_QWORD *)v58;
        if ( v58 >= 0xFFFFF6FB7DBED000uLL
          && v58 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v59 & 1) != 0
          && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
        {
          v88 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v88 )
          {
            v89 = *(_QWORD *)(v88 + 8 * ((v58 >> 3) & 0x1FF));
            v90 = v59 | 0x20;
            if ( (v89 & 0x20) == 0 )
              v90 = v59;
            v59 = v90;
            if ( (v89 & 0x42) != 0 )
              v59 = v90 | 0x42;
          }
        }
        v133 = v59;
        if ( (unsigned __int64)&v133 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v133 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v59 & 1) != 0
          && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
        {
          v91 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v91 )
          {
            v92 = *(_QWORD *)(v91 + 8 * (((unsigned __int64)&v133 >> 3) & 0x1FF));
            v93 = v59 | 0x20;
            if ( (v92 & 0x20) == 0 )
              v93 = v59;
            v59 = v93;
            if ( (v92 & 0x42) != 0 )
              v59 = v93 | 0x42;
          }
        }
        if ( (*(_DWORD *)(48 * ((v59 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
          return 0LL;
      }
    }
  }
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    if ( (v10 & 0x80u) != 0 || v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_49;
    v124 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiEvictPageTableLock(v127, a2, v124, v126 > 1) )
      goto LABEL_52;
    return 0LL;
  }
  if ( !v6 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      v94 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL), a2, v3 + 56, v15);
      MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, v94);
      goto LABEL_52;
    }
    if ( (v10 & 0x20) != 0 )
    {
      if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v124) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v129 = 1;
        if ( !(unsigned int)MiIsPfnLocked(v75) )
          MiShowBadMapper(v79);
        v131 = 0;
        v80 = (volatile signed __int32 *)(48
                                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                                        - 0x57FFFFFFFE8LL);
        while ( _interlockedbittestandset64(v80, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v131);
          while ( *(__int64 *)v80 < 0 );
        }
        *(_QWORD *)v80 ^= (*(_QWORD *)v80 ^ (*(_QWORD *)v80 - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)v80, 0x7FFFFFFFFFFFFFFFuLL);
        if ( MiPteInShadowRange(a2) )
        {
          if ( (unsigned int)MiPteHasShadow(v82, v81) )
          {
            if ( !HIBYTE(word_14043B26C) && (v81 & 1) != 0 )
              v81 |= 0x8000000000000000uLL;
            *(_QWORD *)a2 = v81;
            MiWritePteShadow(a2);
            goto LABEL_232;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v81 & 1) != 0 )
          {
            v81 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a2 = v81;
      }
      else
      {
        v76 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v124 = v76;
        if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow(v78, v77) )
        {
          *(_QWORD *)a2 = v76;
          MiWritePteShadow(a2);
        }
        else
        {
          *(_QWORD *)a2 = v76;
        }
      }
    }
    else
    {
      if ( (v10 & 8) == 0 )
        goto LABEL_13;
      if ( (unsigned int)MiRotatedToFrameBuffer(a2) != 1 )
      {
        v5 = v127;
LABEL_13:
        if ( (v10 & 0x50) == 0x40 )
        {
          if ( (v10 & 2) != 0 && (*(_BYTE *)(v5 + 187) & 1) == 0 && dword_14043B9A8 )
          {
            if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
              goto LABEL_69;
            v42 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v43 = *(_QWORD *)v42;
            if ( v42 >= 0xFFFFF6FB7DBED000uLL
              && v42 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v43 & 1) != 0
              && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
            {
              v95 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v95 )
              {
                v96 = *(_QWORD *)(v95 + 8 * ((v42 >> 3) & 0x1FF));
                v97 = HIBYTE(*(_QWORD *)v42);
                if ( (v96 & 0x20) == 0 )
                  v97 = HIBYTE(v43);
                HIBYTE(v43) = v97;
                if ( (v96 & 0x42) != 0 )
                  HIBYTE(v43) = v97;
              }
            }
            if ( (HIBYTE(v43) & 0xF) != 7 )
            {
LABEL_69:
              if ( (*(_BYTE *)a2 & 0x20) != 0 )
                MiLogPageAccess(v5, a2);
            }
          }
          v16 = v7;
          if ( (unsigned __int64)&v124 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v124 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
          {
            v98 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            v16 = v7;
            if ( v98 )
            {
              v16 = v7 | 0x20;
              v99 = *(_QWORD *)(v98 + 8 * (((unsigned __int64)&v124 >> 3) & 0x1FF));
              if ( (v99 & 0x20) == 0 )
                v16 = v7;
              if ( (v99 & 0x42) != 0 )
                v16 |= 0x42uLL;
            }
          }
          v17 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            if ( (v10 & 1) != 0 && (unsigned int)MiGetPfnPriority(v17) - 3 <= 2 )
              MiLockSetPfnPriority(v72, 2LL);
            if ( (v10 & 4) != 0
              && !*(_QWORD *)(v3 + 40)
              && (v7 & 0x42) == 0
              && (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) != 0
              && (*(_BYTE *)(v17 + 34) & 0x10) == 0 )
            {
              PfnPriority = MiGetPfnPriority(v17);
              if ( PfnPriority < 5 )
                *(_QWORD *)(v3 + 40) = MiCreateDecayPfn(PfnPriority);
            }
          }
        }
        goto LABEL_20;
      }
      MiUnmapFrameBuffer(a2, 3LL, 0LL, v137);
    }
LABEL_232:
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    goto LABEL_52;
  }
LABEL_20:
  if ( (v10 & 0x80u) != 0 )
  {
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    goto LABEL_49;
  }
  LODWORD(v125) = 1;
  v122 = 0;
  v18 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = *(_QWORD *)v18;
  if ( v18 >= 0xFFFFF6FB7DBED000uLL
    && v18 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v100 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v100 )
    {
      v101 = *(_QWORD *)(v100 + 8 * ((v18 >> 3) & 0x1FF));
      v102 = v19 | 0x20;
      if ( (v101 & 0x20) == 0 )
        v102 = *(_QWORD *)v18;
      v19 = v102;
      if ( (v101 & 0x42) != 0 )
        v19 = v102 | 0x42;
    }
  }
  v20 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v65 = (*(_BYTE *)v20 >> 1) & 7;
    v128 = 0;
    v130 = v65;
    if ( !(unsigned int)MiEvictPageTableLock(v127, v18, ZeroPte, 0LL) )
      return 0LL;
    v23 = v130;
    v22 = v125;
    goto LABEL_33;
  }
  v21 = *(_QWORD *)v18;
  v128 = 1;
  if ( v18 >= 0xFFFFF6FB7DBED000uLL
    && v18 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v21 & 1) != 0
    && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
  {
    v103 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v103 )
    {
      v104 = *(_QWORD *)(v103 + 8 * ((v18 >> 3) & 0x1FF));
      v105 = v21 | 0x20;
      if ( (v104 & 0x20) == 0 )
        v105 = v21;
      v21 = v105;
      if ( (v104 & 0x42) != 0 )
        v21 = v105 | 0x42;
    }
  }
  v22 = (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0;
  v125 = (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0;
  v23 = HIBYTE(v21) & 0xF | (unsigned __int8)(16 * ((v21 >> 60) & 7));
  v130 = HIBYTE(v21) & 0xFu | (unsigned __int8)(16 * ((v21 >> 60) & 7));
  if ( (HIBYTE(v21) & 0xF) == 8 )
  {
    MiUnlockWsle(v127, (__int64)(a2 << 25) >> 16, v20);
    WsleContents = MiGetWsleContents(v73, (__int64)(a2 << 25) >> 16);
    v22 = v125;
    v23 = WsleContents;
    v130 = WsleContents;
  }
  v24 = ZeroPte;
  v25 = *(_QWORD *)v18;
  v26 = 0xFFFFF6FB7DBED000uLL;
  v27 = 0xFFFFF6FB7DBED000uLL;
  if ( v18 >= 0xFFFFF6FB7DBED000uLL )
  {
    v27 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v18 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v25) )
        v25 |= 0x20uLL;
    }
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    v25 = 32LL;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v25 & 0x20) != 0 )
  {
    if ( v18 >= v26 && v18 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v27, v25) )
      {
        if ( !HIBYTE(word_14043B26C) && (v24 & 1) != 0 )
          v24 |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = v24;
        MiWritePteShadow(v18);
        v23 = v130;
        goto LABEL_33;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v24 & 1) != 0 )
      {
        v24 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = v24;
  }
  else
  {
    v125 = _InterlockedExchange64((volatile __int64 *)v18, v24);
    if ( v18 >= v26 && v18 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v18);
      v23 = v130;
    }
    if ( (v125 & 0x20) == 0 )
    {
      v28 = 0;
      goto LABEL_34;
    }
  }
LABEL_33:
  v28 = 1;
  v122 = 1;
LABEL_34:
  MiRemoveWsle(v127, (__int64)(a2 << 25) >> 16, 1, v23, 10, v22);
  if ( v128 )
  {
    v31 = ((v13 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v33 = *(_QWORD *)v31;
    v32 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v31 >= 0xFFFFF6FB7DBED000uLL
      && v31 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v33 & 1) != 0
      && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
    {
      v108 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v108 )
      {
        v109 = *(_QWORD *)(v108 + 8 * ((v31 >> 3) & 0x1FF));
        v31 = v33 | 0x20;
        if ( (v109 & 0x20) == 0 )
          v31 = v33;
        v33 = v31;
        if ( (v109 & 0x42) != 0 )
          v33 = v31 | 0x42;
      }
    }
    v134 = v33;
    Process = (unsigned __int64)&v134;
    if ( (unsigned __int64)&v134 >= 0xFFFFF6FB7DBED000uLL )
    {
      Process = (unsigned __int64)&v134;
      if ( (unsigned __int64)&v134 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 640) != 1 && (v33 & 1) != 0 && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v31 = *(_QWORD *)(Process + 1544);
          if ( v31 )
          {
            v110 = *(_QWORD *)(v31 + 8 * (((unsigned __int64)&v134 >> 3) & 0x1FF));
            v31 = v33 | 0x20;
            Process = (unsigned __int8)v110;
            LOBYTE(Process) = v110 & 0x20;
            if ( (v110 & 0x20) == 0 )
              v31 = v33;
            v33 = v31;
            if ( (v110 & 0x42) != 0 )
              v33 = v31 | 0x42;
          }
        }
      }
    }
    v30 = (v33 >> 12) & 0xFFFFFFFFFLL;
    v34 = (size_t *)(48 * v30 - 0x58000000000LL);
    if ( ((*(_DWORD *)v34 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v30, (__int64)(a2 << 25) >> 16, v138, 0xFFFFF6FB7DBED7F8uLL);
      LOBYTE(v30) = 8;
      while ( 1 )
      {
        LOBYTE(v30) = v30 - 1;
        Process = (unsigned int)v138[(unsigned __int8)v30];
        if ( (_DWORD)Process )
          break;
        if ( !(_BYTE)v30 )
          goto LABEL_39;
      }
      Process &= 0x3FFu;
      v30 = *v34 & 0xFFFFFFFFFFFE000FuLL | (16 * (Process | ((v30 & 7) << 10)));
      *v34 = v30;
    }
LABEL_39:
    v28 = v122;
  }
  if ( v28 != 1 )
    goto LABEL_49;
  v35 = 1LL;
  v36 = (__int64)(a2 << 25) >> 16;
  if ( *(_DWORD *)v9 != 1 )
  {
    v30 = *(unsigned __int8 *)(v9 + 4);
    if ( (v30 & 8) == 0 && v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      LOBYTE(v30) = v30 | 8;
      *(_BYTE *)(v9 + 4) = v30;
    }
  }
  v32 = *(unsigned int *)(v9 + 12);
  v37 = *(_BYTE *)(v9 + 4);
  if ( (_DWORD)v32 )
  {
    if ( (v37 & 4) == 0 )
    {
      v38 = v9 + 8LL * (unsigned int)(v32 - 1);
      v39 = *(_QWORD *)(v38 + 24);
      if ( (v39 & 0xC00) == 0 )
      {
        v31 = *(_QWORD *)(v38 + 24) & 0x3FFLL;
        v30 = v39 & 0xFFFFFFFFFFFFF000uLL;
        Process = (v39 & 0xFFFFFFFFFFFFF000uLL) + ((v31 + 1) << 12);
        if ( Process == v13 )
        {
          v30 = v31 + 1;
          if ( v31 + 1 >= v31 && v30 <= 0x3FF )
          {
            ++*(_QWORD *)(v9 + 16);
            v30 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)(v39 + 1)) & 0x3FF;
            *(_QWORD *)(v38 + 24) = v30;
            goto LABEL_49;
          }
        }
      }
      v36 = (__int64)(a2 << 25) >> 16;
    }
    if ( (v37 & 4) == 0 )
    {
      v31 = v9 + 8LL * (unsigned int)(v32 - 1);
      v53 = *(_QWORD *)(v31 + 24);
      if ( (v53 & 0xC00) == 0 )
      {
        v30 = v13 + 4096;
        Process = v53 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v53 & 0xFFFFFFFFFFFFF000uLL) == v13 + 4096 )
        {
          v30 = *(_QWORD *)(v31 + 24) & 0x3FFLL;
          Process = v30 + 1;
          if ( v30 + 1 >= v30 && Process <= 0x3FF )
          {
            ++*(_QWORD *)(v9 + 16);
            v30 = (v53 - 4096) ^ ((unsigned __int16)(v53 - 4096) ^ (unsigned __int16)(v53 - 4096 + 1)) & 0x3FF;
            *(_QWORD *)(v31 + 24) = v30;
            goto LABEL_49;
          }
        }
      }
    }
  }
  if ( (unsigned int)v32 >= *(_DWORD *)(v9 + 8) )
  {
    *(_BYTE *)(v9 + 5) = 1;
    goto LABEL_49;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)(v35 - 1) > 0x3FF )
      Process = 1024LL;
    else
      Process = v35;
    v54 = v36 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)Process - 1) & 0x3FF;
    v35 -= Process;
    v36 += Process << 12;
    v55 = *(unsigned int *)(v9 + 12);
    v125 = v36;
    *(_QWORD *)(v9 + 8 * v55 + 24) = v54;
    v30 = (unsigned int)++*(_DWORD *)(v9 + 12);
    *(_QWORD *)(v9 + 16) += Process;
    if ( (_DWORD)v30 != *(_DWORD *)(v9 + 8) || (*(_BYTE *)(v9 + 4) & 4) != 0 )
      goto LABEL_104;
    qsort((void *)(v9 + 24), v30, 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(v9);
    v67 = *(unsigned int *)(v9 + 12);
    if ( (_DWORD)v67 == *(_DWORD *)(v9 + 8) )
      break;
    v36 = v125;
LABEL_104:
    if ( !v35 )
      goto LABEL_49;
  }
  if ( v35 )
  {
    *(_BYTE *)(v9 + 5) = 1;
    *(_QWORD *)(v9 + 16) = v67;
  }
LABEL_49:
  v40 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  v124 = v40;
  if ( v126 == 3 && (*(_BYTE *)(v127 + 184) & 7) != 0 )
  {
    MiWriteTopLevelPxe(a2, v40);
  }
  else
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v30, Process) )
      {
        *(_QWORD *)a2 = v40;
        MiWritePteShadow(a2);
        goto LABEL_52;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v124 & 1) != 0 )
      {
        v40 = v124 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v40;
  }
LABEL_52:
  v41 = qword_14043B1D0;
  if ( (*(_BYTE *)(v9 + 4) & 2) == 0
    && *(_DWORD *)v9 == 1
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15] )
  {
    v41 = -1LL;
  }
  if ( (*(_DWORD *)(v9 + 12) >= *(_DWORD *)(v9 + 8) || *(_BYTE *)(v9 + 5) || *(_QWORD *)(v9 + 16) > v41)
    && v41 >= 0x400
    && !*(_BYTE *)(v9 + 5) )
  {
    MiFlushTbList(v9, v41, v31, v32);
  }
  if ( !v129 )
  {
LABEL_61:
    if ( !*(_QWORD *)v3 )
      *(_QWORD *)v3 = a2;
    *(_QWORD *)(v3 + 8) = a2;
    return 0LL;
  }
  v48 = 0xFFFFF6FB7DBED000uLL;
LABEL_89:
  if ( (v10 & 0x40) != 0 && (a2 < v48 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v49 = (v13 >> 18) & 0x3FFFFFF8;
    v50 = *(_QWORD *)(v49 - 0x904C0000000LL);
    v51 = v49 - 0x904C0000000LL;
    if ( v49 - 0x904C0000000LL >= v48
      && v51 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v50 & 1) != 0
      && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
    {
      v116 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v116 )
      {
        v117 = *(_QWORD *)(v116 + 8 * ((v51 >> 3) & 0x1FF));
        v118 = v50 | 0x20;
        if ( (v117 & 0x20) == 0 )
          v118 = *(_QWORD *)(v49 - 0x904C0000000LL);
        v50 = v118;
        if ( (v117 & 0x42) != 0 )
          v50 = v118 | 0x42;
      }
    }
    v136[0] = v50;
    if ( (unsigned __int64)v136 >= v48
      && (unsigned __int64)v136 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v50 & 1) != 0
      && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
    {
      v119 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v119 )
      {
        v120 = *(_QWORD *)(v119 + 8 * (((unsigned __int64)v136 >> 3) & 0x1FF));
        v121 = v50 | 0x20;
        if ( (v120 & 0x20) == 0 )
          v121 = v50;
        v50 = v121;
        if ( (v120 & 0x42) != 0 )
          v50 = v121 | 0x42;
      }
    }
    v52 = 48 * ((v50 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_DWORD *)(v52 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v52, HIWORD(*(_DWORD *)(v52 + 16)) & 0x3FF, 1uLL);
    v132 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v132);
      while ( *(__int64 *)(v52 + 24) < 0 );
    }
    *(_QWORD *)(v52 + 16) ^= ((unsigned int)*(_QWORD *)(v52 + 16) ^ (((unsigned int)(*(_QWORD *)(v52 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
