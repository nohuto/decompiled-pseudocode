/*
 * XREFs of MiWsleFlush @ 0x140025220
 * Callers:
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 * Callees:
 *     MI_IS_RESET_PTE @ 0x1400241E0 (MI_IS_RESET_PTE.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiReservePageFileSpace @ 0x14002F780 (MiReservePageFileSpace.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14005E380 (MiUnlockNestedPageTableWritePte.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073EB0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140116650 (MiCompressTbFlushList.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x14011CE1C (MiCanMergeTbFlushEntryBackwards.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x140131BBC (MiLockedPageTableHasActiveLargeEntries.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  char v12; // al
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  char v20; // r11
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  unsigned int v28; // edi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // r8
  char v38; // r11
  __int64 v39; // rcx
  __int64 v40; // r10
  unsigned __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  size_t v45; // rcx
  signed __int8 v46; // cf
  __int64 v47; // rdx
  char v48; // cl
  unsigned int v49; // edx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r11
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 CloneAddress; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  char v67; // r9
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r8
  int v73; // [rsp+20h] [rbp-58h] BYREF
  __int64 v74; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v75; // [rsp+30h] [rbp-48h]
  unsigned __int64 v77; // [rsp+88h] [rbp+10h]
  __int64 v78; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v59 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v6 >> 3) & 0x1FF));
      v60 = v7 | 0x20;
      if ( (v59 & 0x20) == 0 )
        v60 = *(_QWORD *)v6;
      v7 = v60;
      if ( (v59 & 0x42) != 0 )
        v7 = v60 | 0x42;
    }
  }
  v74 = v7;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v74) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v11 = 0LL;
    v75 = 0LL;
    goto LABEL_5;
  }
  if ( *(_WORD *)(v10 + 32) <= 1u )
  {
    v11 = v10;
    v73 = 0;
    v46 = _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL);
    v75 = v10;
    if ( v46 )
    {
      do
      {
        do
          KeYieldProcessorEx(&v73);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
      v9 = a2;
      v11 = v10;
      v8 = 0xFFFFF68000000000uLL;
    }
LABEL_5:
    if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0
      || (v12 = *(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v10 + 32) > 1u )
    {
LABEL_124:
      if ( !v11 )
        return 0LL;
LABEL_155:
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v13 = v7 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !v12
      && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0
      && v6 <= v8 + 0x3FFFFFFF78LL
      && v6 >= v8
      && (v7 & 0x42) != 0
      && (*(_DWORD *)(a1 - 500) & 0x8000) != 0 )
    {
      MiCaptureWriteWatchDirtyBit(a1 - 1280, v9, 0LL);
      v9 = a2;
      v8 = 0xFFFFF68000000000uLL;
    }
    v14 = 0;
    if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
    {
      v34 = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL
        && v6 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v61 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 8 * ((v6 >> 3) & 0x1FF));
          v63 = v34 | 0x20;
          if ( (v62 & 0x20) == 0 )
            v63 = *(_QWORD *)v6;
          v34 = v63;
          if ( (v62 & 0x42) != 0 )
            v34 = v63 | 0x42;
        }
      }
      v35 = (v34 >> 60) & 7;
      if ( v35 )
      {
        v47 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x18) == 8 )
        {
          v35 |= 0x18u;
        }
        else if ( (v47 & 0x10) != 0 )
        {
          v35 |= 8u;
        }
        v74 = MiSwizzleInvalidPte(32 * (*(_QWORD *)&v35 | 0xFFFFFFFFF8000020uLL), v47, 0x8000000000000000uLL, v8);
LABEL_20:
        v19 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL) )
            LOBYTE(v19) = v19 | 0x20;
        }
        if ( (MiFlags & 0x800) != 0 )
        {
          LOBYTE(v19) = 32;
        }
        else if ( (MiFlags & 0x4000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v19 & 0x20) == 0 )
        {
          v20 = _InterlockedExchange64((volatile __int64 *)v6, v74);
          if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            MiWritePteShadow(v6, v74);
            v17 = a2;
          }
          if ( (v20 & 0x20) == 0 )
            goto LABEL_27;
LABEL_42:
          v27 = v17 & 0xFFFFFFFFFFFFF000uLL;
          v77 = v27;
          if ( *(_DWORD *)a4 != 1 )
          {
            v48 = *(_BYTE *)(a4 + 4);
            if ( (v48 & 8) == 0 && v27 >= 0xFFFFF68000000000uLL && v27 <= 0xFFFFF6FFFFFFFFFFuLL )
              *(_BYTE *)(a4 + 4) = v48 | 8;
          }
          v28 = *(_DWORD *)(a4 + 12);
          if ( !v28 || (*(_BYTE *)(a4 + 4) & 4) != 0 )
          {
            v31 = 0;
          }
          else
          {
            v29 = *(_QWORD *)(a4 + 8LL * (v28 - 1) + 24);
            if ( (v29 & 0xC00) != 0 )
              goto LABEL_72;
            v30 = *(_QWORD *)(a4 + 8LL * (v28 - 1) + 24) & 0x3FFLL;
            if ( (v29 & 0xFFFFFFFFFFFFF000uLL) + ((v30 + 1) << 12) != v27 || v30 + 1 < v30 || v30 + 1 > 0x3FF )
              goto LABEL_72;
            v31 = 1;
          }
          if ( v31 )
          {
            v32 = a4 + 8LL * (v28 - 1);
            v33 = *(_QWORD *)(v32 + 24);
            goto LABEL_52;
          }
LABEL_72:
          if ( !(unsigned int)MiCanMergeTbFlushEntryBackwards(a4, v27, 1LL, 0LL) )
          {
            if ( v28 >= *(_DWORD *)(a4 + 8) )
            {
              *(_BYTE *)(a4 + 5) = 1;
            }
            else
            {
              v41 = v77;
              v42 = 1LL;
              while ( 1 )
              {
                v43 = (unsigned __int64)(v42 - 1) > 0x3FF ? 1024LL : v42;
                v78 = v42 - v43;
                v44 = v41 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v43 - 1) & 0x3FF;
                v41 += v43 << 12;
                *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v44;
                v45 = *(unsigned int *)(a4 + 12);
                *(_QWORD *)(a4 + 16) += v43;
                if ( (_DWORD)v45 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
                {
                  qsort((void *)(a4 + 24), v45, 8uLL, MiTbFlushSort);
                  MiCompressTbFlushList(a4);
                  v57 = *(unsigned int *)(a4 + 12);
                  if ( (_DWORD)v57 == *(_DWORD *)(a4 + 8) )
                    break;
                }
                v42 = v78;
                if ( !v78 )
                  goto LABEL_27;
              }
              if ( v78 )
              {
                *(_BYTE *)(a4 + 5) = 1;
                *(_QWORD *)(a4 + 16) = v57;
              }
            }
LABEL_27:
            if ( v75 )
              _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v5 == 1 )
              return v13;
            v21 = *(_QWORD *)(v10 + 40);
            if ( (v21 & 0x200000000000000LL) != 0 )
              return v13;
            v22 = *(_QWORD *)(v10 + 16);
            v23 = v10 + 16;
            if ( v10 + 16 >= 0xFFFFF6FB7DBED000uLL
              && v23 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
            {
              if ( (v22 & 1) == 0 )
                goto LABEL_34;
              if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
              {
                v70 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v70 )
                {
                  v71 = *(_QWORD *)(v70 + 8 * ((v23 >> 3) & 0x1FF));
                  v72 = v22 | 0x20;
                  if ( (v71 & 0x20) == 0 )
                    v72 = *(_QWORD *)(v10 + 16);
                  v22 = v72;
                  if ( (v71 & 0x42) != 0 )
                    v22 = v72 | 0x42;
                }
              }
            }
            if ( (v22 & 1) != 0 )
              return v13;
LABEL_34:
            if ( (!v22 || !qword_140465800 || (v22 & qword_140465800) != 0)
              && *(_DWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((v21 >> 40) & 0x3FF)) + 1028LL)
              && (v22 & 2) == 0
              && ((*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(MiGetSharedVm(a1, v22) + 24))
              && (!MI_IS_RESET_PTE(v22) || (*(_BYTE *)(v10 + 34) & 0x10) != 0 || (*(_BYTE *)v6 & 0x42) != 0)
              && v6 <= 0xFFFFF6BFFFFFFF78uLL
              && v6 >= 0xFFFFF68000000000uLL )
            {
              MiReservePageFileSpace(v40, v6, a1);
            }
            return v13;
          }
          v32 = a4 + 8LL * (v28 - 1);
          v33 = *(_QWORD *)(v32 + 24) - 4096LL;
LABEL_52:
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v32 + 24) = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)(v33 + 1)) & 0x3FF;
          goto LABEL_27;
        }
        if ( (unsigned int)MiPteInShadowRange(v6, v74, v18, v16) )
        {
          if ( (unsigned int)MiPteHasShadow(v26) )
          {
            if ( !HIBYTE(word_1404658EC) && (v25 & 1) != 0 )
              v25 |= v69;
            *(_QWORD *)v6 = v25;
            MiWritePteShadow(v6, v25);
            v17 = a2;
            goto LABEL_42;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v25 & 1) != 0 )
          {
            v25 |= v69;
          }
        }
        *(_QWORD *)v6 = v25;
        goto LABEL_42;
      }
      v37 = MiSwizzleInvalidPte(
              ((*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) << 16) | 0x400,
              *(_QWORD *)(v10 + 8),
              0x8000000000000000uLL,
              *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
      v74 = v37;
      v39 = v37;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v7 & 0xA00) == 0 && v7 < 0 )
      {
        v74 = v37 | 8;
        v39 = v37 | 8;
      }
      if ( v36 >= 0 )
      {
        v74 = v39 | 0x800;
      }
      else if ( (v38 & 2) != 0 )
      {
        if ( *(_QWORD *)(a1 - 360) )
        {
          CloneAddress = MiLocateCloneAddress(a1 - 1280, v16);
          if ( CloneAddress )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v65 + 1296) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
              v74 = v66 | 8;
          }
        }
      }
    }
    else
    {
      if ( v9 >= v8 && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v14 = 1;
        MiLockPageTableInternal(a1, v6, 0LL, v8);
        if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          MiUnlockPageTableInternal(a1);
          v11 = v75;
          goto LABEL_124;
        }
        if ( (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
        {
          MiUnlockPageTableInternal(a1);
          v11 = v75;
          if ( !v75 )
            return 0LL;
          goto LABEL_155;
        }
      }
      if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 4 && a1 == MiGetAnyMultiplexedVm(2LL) )
      {
        MiReleasePageFileSpace(&MiSystemPartition, *(_QWORD *)(v10 + 16), v49);
        v74 = MI_READ_PTE_LOCK_FREE(a2 & 0xFFFFFFFFFFFFF000uLL) | 2;
        v13 |= 4uLL;
        v5 = 1;
        if ( (unsigned int)MiPteInShadowRange(v6, v74, v50, v74) )
        {
          if ( (unsigned int)MiPteHasShadow(v52) )
          {
            if ( !HIBYTE(word_1404658EC) && (v67 & 1) != 0 )
              v51 |= 0x8000000000000000uLL;
            *(_QWORD *)v6 = v51;
            MiWritePteShadow(v6, v51);
            goto LABEL_118;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v67 & 1) != 0 )
          {
            v51 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v6 = v51;
LABEL_118:
        MiInsertTbFlushEntry(a4, a2 & 0xFFFFFFFFFFFFF000uLL, v53);
        MiFlushTbList(a4, v54, v55, v56);
        goto LABEL_27;
      }
      v15 = (32 * ((*(_DWORD *)(v10 + 16) >> 5) & 0x1F | 0x40LL)) | MI_READ_PTE_LOCK_FREE(&v74) & 0xFFFFFFFFF000LL;
      if ( qword_140465800 )
      {
        if ( (qword_140465800 & v15) != 0 )
          v15 |= 0x10uLL;
        else
          v15 |= qword_140465800;
      }
      v74 = v15;
      if ( v14 )
      {
        MiUnlockNestedPageTableWritePte(a1, v6, v15, 0LL, v73);
        MiInsertTbFlushEntry(a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL);
        goto LABEL_27;
      }
    }
    v18 = 0x8000000000000000uLL;
    goto LABEL_20;
  }
  return 0LL;
}
