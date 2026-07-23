/*
 * XREFs of MiPfnRangeIsZero @ 0x140184794
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140111958 (MiInsertRecursiveTbFlushEntries.c)
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 *     MiClearSystemAccessBits @ 0x140184B5C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r12
  signed __int64 v16; // rax
  int v17; // r9d
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 ValidPte; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  char v32; // al
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+28h] [rbp-D8h]
  _QWORD *v40; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+38h] [rbp-C8h]
  int v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v47; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h]
  _QWORD *v53[3]; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v55; // [rsp+A4h] [rbp-5Ch]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[4]; // [rsp+160h] [rbp+60h] BYREF

  v48 = a2;
  v47 = a1;
  v3 = a1;
  memset(v59, 0, sizeof(v59));
  memset(v53, 0, sizeof(v53));
  if ( v3 >= a2 )
    return;
  v4 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( (v4 & 0x1FFFFF) != 0 )
  {
    v5 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v49 = v5;
  }
  else
  {
    v5 = 0LL;
    v49 = 0LL;
  }
  v39 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = MI_IS_PHYSICAL_ADDRESS(v3);
    v11 = v8;
    v12 = v8;
    v38 = v8;
    if ( !v8 )
    {
      v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = v48 - v3;
      v14 = 4096LL;
      goto LABEL_7;
    }
    v13 = ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v13 == v5 )
      break;
    v14 = 0x200000LL;
    if ( v8 > 1uLL )
    {
      v27 = v8 - 1LL;
      v9 = 0xFFFFF68000000000uLL;
      do
      {
        v14 <<= 9;
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v27;
      }
      while ( v27 );
      v12 = v8;
    }
    if ( ((v14 - 1) & v3) != 0 || (v10 = v48 - v3, v48 - v3 < v14) )
    {
      if ( (unsigned int)MiDemoteValidLargePageOneLevel(v3, v9, v10, v12) )
        continue;
      goto LABEL_25;
    }
LABEL_7:
    if ( (*(_BYTE *)v13 & 0x20) != 0 )
    {
      if ( (v14 << 9) - (v3 & ((v14 << 9) - 1)) <= v10 )
        v10 = (v14 << 9) - (v3 & ((v14 << 9) - 1));
      MiClearSystemAccessBits(v13, v10 / v14, v8, v12);
    }
    if ( (unsigned int)v11 < 4 )
    {
      v15 = v39;
      v42 = v11;
      do
      {
        v52 = v7;
        v16 = MI_READ_PTE_LOCK_FREE(v13);
        v45 = v16;
        if ( (_DWORD)v11 != v17 && (v16 & 0x20) != 0 )
        {
          _InterlockedCompareExchange64((volatile signed __int64 *)v13, v16 & 0xFFFFFFFFFFFFFFDFuLL, v16);
          KeFlushSingleTb((__int64)(v13 << 25) >> 16, 0, 1u);
        }
        v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45);
        v21 = 0xFFFFFA8000000000uLL;
        v22 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v40 = (_QWORD *)v22;
        v23 = 48 * (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v43 = v20;
        v51 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v43, v21, v19);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
          v15 = v39;
          v20 = 0LL;
        }
        *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v14 == 4096 || (_DWORD)v11 != v38 )
        {
          LODWORD(v46) = 2;
          v24 = 1LL;
        }
        else
        {
          v41 = v20;
          v28 = v20;
          LOBYTE(v28) = (_DWORD)v11 != 2;
          v29 = v20;
          v30 = v14 >> 12;
          v31 = v28;
          v46 = v28;
          v50 = v14 >> 12;
          if ( v14 >> 12 )
          {
            do
            {
              v44 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v44, v30, v29);
                  while ( *(__int64 *)(v22 + 24) < 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
                v30 = v50;
                v29 = v41;
                v31 = v46;
              }
              *(_WORD *)(v22 + 32) = 0;
              *(_QWORD *)(v22 + 24) &= 0xC000000000000000uLL;
              v32 = *(_BYTE *)(v22 + 34) & 0xEF;
              *(_BYTE *)(v22 + 34) = v32;
              if ( v29 )
                *(_BYTE *)(v22 + 34) = v32 & 0xF8;
              *(_QWORD *)(v22 + 40) ^= (*(_QWORD *)(v22 + 40) ^ MiLargePageContainingFrames[v31]) & 0xFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v29;
              v22 += 48LL;
              v41 = v29;
            }
            while ( v29 < v30 );
            v23 = v51;
            v20 = 0LL;
            v15 = v39;
          }
          v24 = MiLargePageSizes[v31];
          v40 = (_QWORD *)(-48LL * v30 + v22);
        }
        v15 += v24;
        v39 = v15;
        if ( qword_14043BEE8 == (PVOID)qword_14043BEF0 )
          ValidPte = v20;
        else
          ValidPte = MiMakeValidPte(
                       v13,
                       *(__int64 *)((char *)&qword_14043BEE8 + v42 * 8),
                       (_DWORD)v11 != 0 ? -1476395004 : 536870913);
        v45 = ValidPte;
        v59[v42] = ValidPte;
        MiTransformValidPteInPlace((volatile signed __int64 *)v13, v13, ValidPte, v11);
        if ( (_DWORD)v11 == 3 )
        {
          v33 = v13;
          if ( v6 )
            v33 = v6;
          v6 = v33;
        }
        v26 = (unsigned int)v46;
        v7 = v13;
        if ( (_DWORD)v11 != 3 )
          v7 = v52;
        *v40 = v53[(unsigned int)v46];
        v53[v26] = v40;
        if ( !(_DWORD)v11 )
          v40[2] = ZeroPte;
        if ( (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          break;
        ++v42;
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LODWORD(v11) = v11 + 1;
        v39 = v15;
      }
      while ( (unsigned int)v11 < 4 );
      v5 = v49;
      v3 = v47;
    }
    if ( v14 == 4096 && (_DWORD)v11 )
    {
      do
      {
        v14 <<= 9;
        LODWORD(v11) = v11 - 1;
      }
      while ( (_DWORD)v11 );
    }
LABEL_25:
    v3 = -(__int64)v14 & (v14 + v3);
    v47 = v3;
  }
  while ( v3 < v48 );
  if ( v6 )
  {
    v34 = 3LL;
    do
    {
      v6 = (__int64)(v6 << 25) >> 16;
      v7 = (__int64)(v7 << 25) >> 16;
      --v34;
    }
    while ( v34 );
    MiReplicatePteChange(v6, v7);
    v55 = 0;
    v56 = 20LL;
    v54 = 0;
    v57 = 0LL;
    v58 = 0LL;
    while ( v6 <= v7 )
    {
      MiInsertRecursiveTbFlushEntries((__int64)&v54, 3, v6);
      v6 += 8LL;
    }
    MiFlushTbList(&v54, v35, v36, v37);
  }
  _InterlockedExchangeAdd64(&qword_14043C100, -(__int64)v39);
  MiFreeLargeZeroPages((__int64)&MiSystemPartition, v53);
  MiReleaseNonPagedResources((__int64)&MiSystemPartition, v39);
}
