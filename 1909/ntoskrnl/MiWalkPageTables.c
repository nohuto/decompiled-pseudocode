/*
 * XREFs of MiWalkPageTables @ 0x140049000
 * Callers:
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D3A0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiOutSwapWorkingSet @ 0x1400D987C (MiOutSwapWorkingSet.c)
 *     MiDeleteSystemPageTables @ 0x1400E7108 (MiDeleteSystemPageTables.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x14010DDA8 (MiClearNonPagedPtes.c)
 *     MiTrimWorkingSet @ 0x14012A6A8 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14012AA94 (MiSimpleAging.c)
 *     MmRemoveExecuteGrants @ 0x14013BF24 (MmRemoveExecuteGrants.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14017D428 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiWalkResetCommitPages @ 0x1402BC454 (MiWalkResetCommitPages.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C624C (MmRemoveSystemCacheFromDump.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9574 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D8538 (MiGetWorkingSetInfoEx.c)
 *     MiCombineWorkingSet @ 0x1402E5F90 (MiCombineWorkingSet.c)
 *     MiConvertHiberPhasePages @ 0x14059C7E4 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1405ABF9C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1405AC0EC (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1405AC190 (MiMarkNonPagedHiberPhasePages.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF438 (MiCreateInitialSystemWsles.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F12C0 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x1409F4394 (MiMarkLargePageMappings.c)
 * Callees:
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14015D2F4 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiWalkPageTables(__int16 *a1)
{
  __int16 *v1; // rsi
  __int64 v2; // r9
  unsigned __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rax
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned int v9; // r15d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  __int16 v21; // ax
  __int64 v22; // r9
  unsigned __int64 v23; // r12
  _KPROCESS *Process; // rcx
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 i; // rdi
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  int v30; // ebx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // [rsp+20h] [rbp-79h]
  __m128i si128; // [rsp+28h] [rbp-71h]
  unsigned __int64 v37; // [rsp+38h] [rbp-61h]
  __int64 v38; // [rsp+40h] [rbp-59h]
  __int64 v39; // [rsp+48h] [rbp-51h]
  unsigned __int64 *v40; // [rsp+50h] [rbp-49h]
  __int64 v41; // [rsp+58h] [rbp-41h]
  unsigned __int64 v42; // [rsp+60h] [rbp-39h]
  unsigned __int64 v43; // [rsp+68h] [rbp-31h]
  unsigned __int64 v44; // [rsp+70h] [rbp-29h] BYREF
  __int64 v45; // [rsp+78h] [rbp-21h]
  __int64 v46; // [rsp+80h] [rbp-19h]
  unsigned __int64 v47; // [rsp+88h] [rbp-11h]
  unsigned __int64 v48; // [rsp+90h] [rbp-9h]
  unsigned __int64 v49; // [rsp+98h] [rbp-1h]
  unsigned __int64 v50; // [rsp+A0h] [rbp+7h]
  __int64 v51; // [rsp+A8h] [rbp+Fh]
  unsigned int v53; // [rsp+108h] [rbp+6Fh]
  unsigned int v54; // [rsp+110h] [rbp+77h]
  unsigned int v55; // [rsp+118h] [rbp+7Fh]

  v1 = a1;
  if ( !*((_BYTE *)a1 + 5) )
    *((_BYTE *)a1 + 5) = 15;
  v2 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 8) = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v3 = *((_QWORD *)a1 + 6);
  if ( v3 )
  {
    if ( v3 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v3 = 0xFFFFF6FB7DBEDF70uLL;
      *((_QWORD *)v1 + 6) = 0xFFFFF6FB7DBEDF70uLL;
    }
    v4 = -1;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v3 = 0LL;
      *((_QWORD *)v1 + 6) = 0LL;
    }
    else
    {
      do
      {
        ++v4;
        v3 = (__int64)(v3 << 25) >> 16;
      }
      while ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL );
    }
    v44 = v3;
    v45 = -1LL;
    v54 = 1;
    if ( v4 != -1 )
    {
      v46 = 0LL;
      v47 = v3 - 1;
      v54 = 2;
    }
  }
  else
  {
    v44 = *((_QWORD *)v1 + 3);
    v45 = *((_QWORD *)v1 + 4);
    v54 = 1;
  }
  if ( (*v1 & 0x800) != 0 )
  {
    si128.m128i_i64[0] = 0LL;
    si128.m128i_i64[1] = 0xFFFFF67FFFFFFFFFuLL;
    v37 = 0xFFFFF70000000000uLL;
    v38 = -1LL;
  }
  else
  {
    v53 = 1;
    if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    {
      switch ( *(_BYTE *)(v2 + 184) & 7 )
      {
        case 1:
          si128.m128i_i64[0] = qword_1404656D0;
          si128.m128i_i64[1] = qword_1404656D0 + 0x7FFFFFFFFFLL;
          break;
        case 2:
          si128.m128i_i64[0] = qword_140465A98;
          si128.m128i_i64[1] = qword_140465A98 + (qword_140465A78 << 21) - 1;
          break;
        case 3:
          si128.m128i_i64[0] = qword_140465A50;
          si128.m128i_i64[1] = qword_140465A50 + (qword_140465A30 << 21) - 1;
          break;
        case 4:
          si128.m128i_i64[0] = qword_1404659C0;
          si128.m128i_i64[1] = qword_1404659C0 + (qword_1404659A0 << 21) - 1;
          break;
        case 6:
          si128.m128i_i64[0] = qword_140465930;
          si128.m128i_i64[1] = qword_140465930 + (qword_140465910 << 21) - 1;
          break;
      }
      goto LABEL_17;
    }
    v5 = qword_140465BE8;
    v37 = qword_140465BD8;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( !qword_140465BE8 )
    {
      v5 = 276840448LL;
      qword_140465BF8 = 0x10000000LL;
      qword_140465BE8 = 276840448LL;
      qword_140465BF0 = 276824064LL;
    }
    v38 = qword_140465BD8 + v5 - 1;
  }
  v53 = 2;
LABEL_17:
  v6 = &v44;
  v35 = 0;
  v40 = &v44;
  do
  {
    v7 = *v6;
    v8 = v6[1];
    v9 = 0;
    v43 = *v6;
    v42 = v8;
    v55 = 0;
    do
    {
      v10 = v7;
      v11 = si128.m128i_u64[2 * v9 + 1];
      if ( v7 > v11 )
        goto LABEL_44;
      v12 = si128.m128i_u64[2 * v9];
      if ( v8 < v12 )
        goto LABEL_44;
      if ( v7 < v12 )
        v10 = si128.m128i_u64[2 * v9];
      v13 = v8;
      if ( v8 > v11 )
        v13 = si128.m128i_u64[2 * v9 + 1];
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 9) = v14;
      v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 10) = v15;
      v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 11) = v16;
      v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 12) = v17;
      v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 13) = v18;
      v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 14) = v19;
      v20 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 15) = v20;
      *((_QWORD *)v1 + 16) = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = *v1;
      *((_QWORD *)v1 + 7) = 0LL;
      if ( (v21 & 4) != 0 )
      {
        v22 = *((_QWORD *)v1 + 2);
        *((_BYTE *)v1 + 2) |= 1u;
        v41 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v39 = v22;
        v48 = (((unsigned __int64)(v41 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = 0xFFFFF6FB7DBEDF68uLL;
        MiLockPageTableInternal(v22, 0xFFFFF6FB7DBEDF68uLL, 0LL, v22);
        v26 = v39;
        for ( i = 2LL; ; --i )
        {
          v28 = *(&v48 + i);
          v29 = *(_QWORD *)v28;
          if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
              if ( DeepFreezeStartTime )
              {
                v33 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v28 >> 3) & 0x1FF));
                v34 = v29 | 0x20;
                Process = (_KPROCESS *)(unsigned __int8)v33;
                LOBYTE(Process) = v33 & 0x20;
                if ( (v33 & 0x20) == 0 )
                  v34 = *(_QWORD *)v28;
                v29 = v34;
                if ( (v33 & 0x42) != 0 )
                  v29 = v34 | 0x42;
              }
            }
          }
          if ( (v29 & 0x81) != 1 )
            break;
          if ( (v29 & 0x20) == 0 )
            MiPerformSafePdeWrite(Process, *(&v48 + i), v29, 1LL);
          if ( v28 != v23 )
          {
            MiLockPageTableInternal(v26, v28, 0LL, v25);
            MiUnlockPageTableInternal(v26);
            v23 = v28;
          }
          if ( !i )
            break;
        }
        v1 = a1;
        v9 = v55;
        if ( v23 != v41 )
        {
          MiUnlockPageTableInternal(v39);
          goto LABEL_39;
        }
        *((_QWORD *)a1 + 5) = v41;
      }
      else
      {
        *((_QWORD *)v1 + 5) = 0LL;
        if ( (v21 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140465B94);
      }
      *((_BYTE *)v1 + 2) &= ~1u;
LABEL_39:
      v30 = MiWalkPageTablesRecursively(v1, v20, 3LL);
      if ( (*v1 & 0x400) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140465B94);
      if ( v30 >= 3 )
        return (unsigned int)v30;
      v8 = v42;
LABEL_44:
      v7 = v43;
      v55 = ++v9;
    }
    while ( v9 < v53 );
    v6 = v40 + 2;
    ++v35;
    v40 += 2;
  }
  while ( v35 < v54 );
  return 3LL;
}
