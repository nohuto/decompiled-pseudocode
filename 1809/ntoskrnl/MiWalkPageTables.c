/*
 * XREFs of MiWalkPageTables @ 0x14006E930
 * Callers:
 *     MiDeleteSystemPageTables @ 0x140027FD4 (MiDeleteSystemPageTables.c)
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiOutSwapWorkingSet @ 0x1400E5868 (MiOutSwapWorkingSet.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiTrimWorkingSet @ 0x140130F08 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1401312D0 (MiSimpleAging.c)
 *     MmRemoveExecuteGrants @ 0x14013A0A4 (MmRemoveExecuteGrants.c)
 *     MiCombineWorkingSet @ 0x14013DC80 (MiCombineWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140173C88 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiWalkResetCommitPages @ 0x1402A5550 (MiWalkResetCommitPages.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE89C (MmRemoveSystemCacheFromDump.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4564 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BF044 (MiGetWorkingSetInfoEx.c)
 *     MiConvertHiberPhasePages @ 0x14056EF80 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14057CFDC (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x14057D128 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14057D1BC (MiMarkNonPagedHiberPhasePages.c)
 *     MiCreateInitialSystemWsles @ 0x1409B8B7C (MiCreateInitialSystemWsles.c)
 *     MiMarkLargePageMappings @ 0x1409BA05C (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BDC18 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x140160618 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiWalkPageTables(int *a1)
{
  int *v1; // rbx
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned int v4; // r13d
  unsigned __int64 *v5; // r12
  unsigned __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  int v20; // eax
  int v21; // edi
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // r9d
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+20h] [rbp-79h]
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
  if ( !*((_BYTE *)a1 + 6) )
    *((_BYTE *)a1 + 6) = 15;
  v2 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 9) = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 )
  {
    if ( v3 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v3 = 0xFFFFF6FB7DBEDF70uLL;
      *((_QWORD *)v1 + 7) = 0xFFFFF6FB7DBEDF70uLL;
    }
    v31 = -1;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v3 = 0LL;
      *((_QWORD *)v1 + 7) = 0LL;
    }
    else
    {
      do
      {
        ++v31;
        v3 = (__int64)(v3 << 25) >> 16;
      }
      while ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL );
    }
    v44 = v3;
    v45 = -1LL;
    v53 = 1;
    if ( v31 != -1 )
    {
      v46 = 0LL;
      v47 = v3 - 1;
      v53 = 2;
    }
  }
  else
  {
    v44 = *((_QWORD *)v1 + 4);
    v45 = *((_QWORD *)v1 + 5);
    v53 = 1;
  }
  if ( (*v1 & 0x800) != 0 )
  {
    si128.m128i_i64[0] = 0LL;
    si128.m128i_i64[1] = 0xFFFFF67FFFFFFFFFuLL;
    v37 = 0xFFFFF70000000000uLL;
    v38 = -1LL;
LABEL_7:
    v4 = 2;
    goto LABEL_8;
  }
  v4 = 1;
  switch ( *(_BYTE *)(v2 + 184) & 7 )
  {
    case 0:
      v37 = qword_14043B5E8;
      v30 = qword_14043B5E8 + 276840447;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
LABEL_42:
      v38 = v30;
      goto LABEL_7;
    case 1:
      si128.m128i_i64[0] = qword_14043B078;
      si128.m128i_i64[1] = qword_14043B078 + 0x7FFFFFFFFFLL;
      goto LABEL_8;
    case 2:
      si128.m128i_i64[0] = qword_14043B4A8;
      si128.m128i_i64[1] = qword_14043B4A8 + (qword_14043B488 << 21) - 1;
      goto LABEL_8;
  }
  if ( (*(_BYTE *)(v2 + 184) & 7) != 3 )
  {
    if ( (*(_BYTE *)(v2 + 184) & 7) == 4 )
    {
      si128.m128i_i64[0] = qword_14043B340;
      si128.m128i_i64[1] = qword_14043B340 + (qword_14043B320 << 21) - 1;
    }
    else if ( (*(_BYTE *)(v2 + 184) & 7) == 6 )
    {
      si128.m128i_i64[0] = qword_14043B2B0;
      si128.m128i_i64[1] = qword_14043B2B0 + (qword_14043B290 << 21) - 1;
    }
    goto LABEL_8;
  }
  si128.m128i_i64[0] = qword_14043B3D0;
  si128.m128i_i64[1] = qword_14043B3D0 - 1 + (qword_14043B3B0 << 21);
  if ( qword_14043B440 )
  {
    v37 = qword_14043B460;
    v30 = (qword_14043B440 << 21) + qword_14043B460 - 1;
    goto LABEL_42;
  }
LABEL_8:
  v5 = &v44;
  v55 = 0;
  v40 = &v44;
  do
  {
    v6 = *v5;
    v7 = 0;
    v8 = v5[1];
    v43 = *v5;
    v42 = v8;
    v54 = 0;
    do
    {
      v9 = v6;
      v10 = si128.m128i_u64[2 * v7 + 1];
      if ( v6 > v10 )
        goto LABEL_25;
      v11 = si128.m128i_u64[2 * v7];
      if ( v8 < v11 )
        goto LABEL_25;
      if ( v6 < v11 )
        v9 = si128.m128i_u64[2 * v7];
      v12 = v8;
      if ( v8 > v10 )
        v12 = si128.m128i_u64[2 * v7 + 1];
      v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 10) = v13;
      v14 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 11) = v14;
      v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 12) = v15;
      v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 13) = v16;
      v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 14) = v17;
      v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 15) = v18;
      v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 16) = v19;
      *((_QWORD *)v1 + 17) = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v20 = *v1;
      *((_QWORD *)v1 + 8) = 0LL;
      if ( (v20 & 4) != 0 )
      {
        v23 = *((_QWORD *)v1 + 3);
        v41 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = v41 << 25;
        *((_BYTE *)v1 + 8) = 1;
        v39 = v23;
        v48 = (((unsigned __int64)(v24 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v35 = 0xFFFFF6FB7DBEDF68uLL;
        MiLockPageTableInternal(v23, 0xFFFFF6FB7DBEDF68uLL, 0);
        v25 = 0xFFFFF6FB7DBEDF68uLL;
        v26 = 2LL;
        v27 = v39;
        while ( 1 )
        {
          v28 = *(&v48 + v26);
          v29 = *(_QWORD *)v28;
          if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v29 & 1) != 0
              && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
            {
              v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v32 )
              {
                v33 = *(_QWORD *)(v32 + 8 * ((v28 >> 3) & 0x1FF));
                v34 = v29 | 0x20;
                if ( (v33 & 0x20) == 0 )
                  v34 = *(_QWORD *)v28;
                v29 = v34;
                if ( (v33 & 0x42) != 0 )
                  v29 = v34 | 0x42;
              }
            }
            v25 = v35;
          }
          if ( (v29 & 0x81) != 1 )
            break;
          if ( (v29 & 0x20) == 0 )
          {
            MiPerformSafePdeWrite(v25, *(&v48 + v26), v29, 1LL);
            v25 = v35;
          }
          if ( v28 != v25 )
          {
            MiLockPageTableInternal(v27, v28, 0);
            MiUnlockPageTableInternal(v27, v35);
            v25 = v28;
            v35 = v28;
          }
          if ( !v26 )
            break;
          --v26;
        }
        v1 = a1;
        v7 = v54;
        v5 = v40;
        if ( v25 != v41 )
        {
          MiUnlockPageTableInternal(v39, v25);
          goto LABEL_20;
        }
        *((_QWORD *)a1 + 6) = v41;
      }
      else
      {
        *((_QWORD *)v1 + 6) = 0LL;
        if ( (v20 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043B5A4);
      }
      *((_BYTE *)v1 + 8) = 0;
LABEL_20:
      v21 = MiWalkPageTablesRecursively(v1, v19, 3LL);
      if ( (*v1 & 0x400) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043B5A4);
      if ( v21 >= 3 )
        return (unsigned int)v21;
      v8 = v42;
LABEL_25:
      v6 = v43;
      v54 = ++v7;
    }
    while ( v7 < v4 );
    v5 += 2;
    v40 = v5;
    ++v55;
  }
  while ( v55 < v53 );
  return 3LL;
}
