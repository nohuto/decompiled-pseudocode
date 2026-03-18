/*
 * XREFs of MiGetLargePage @ 0x1400A3FF0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiGetClusterPage @ 0x1402E0924 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiZeroAndConvertLargePage @ 0x1400A2188 (MiZeroAndConvertLargePage.c)
 *     MiGetFreeZeroLargePage @ 0x1400A4498 (MiGetFreeZeroLargePage.c)
 *     MiPfnZeroingNeeded @ 0x1400A452C (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x1400A456C (MiProtectionToCacheAttribute.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D905C (MiArePageContentsZero.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EBAB4 (MiAddColdPagesToHotRanges.c)
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGetLargePage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // r13
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // r14d
  __int64 FreeZeroLargePage; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rdi
  __int64 *v15; // r8
  int v16; // ebp
  unsigned int v17; // ebx
  int v18; // r9d
  _DWORD *v19; // r14
  int v20; // eax
  char v21; // bp
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // al
  __int64 v30; // r13
  unsigned __int64 v31; // r15
  ULONG_PTR v32; // r12
  __int64 v33; // r14
  unsigned __int64 v34; // rsi
  __int64 v35; // rbx
  unsigned int v36; // edi
  __int64 v37; // rbx
  char v38; // al
  __int64 v39; // [rsp+30h] [rbp-178h]
  int v40; // [rsp+38h] [rbp-170h]
  int v41; // [rsp+3Ch] [rbp-16Ch] BYREF
  int v42; // [rsp+40h] [rbp-168h]
  int v43; // [rsp+44h] [rbp-164h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-160h]
  unsigned int v45; // [rsp+4Ch] [rbp-15Ch]
  int v46; // [rsp+50h] [rbp-158h] BYREF
  __int64 v47; // [rsp+58h] [rbp-150h]
  unsigned __int64 v48; // [rsp+60h] [rbp-148h]
  __int64 v49; // [rsp+68h] [rbp-140h]
  unsigned __int64 v50; // [rsp+70h] [rbp-138h]
  __int64 *v51; // [rsp+78h] [rbp-130h]
  __int64 v52; // [rsp+80h] [rbp-128h]
  unsigned __int64 v53[7]; // [rsp+88h] [rbp-120h] BYREF
  _DWORD v54[36]; // [rsp+C0h] [rbp-E8h] BYREF

  v5 = a5;
  v7 = a2;
  v45 = a3;
  v44 = a2;
  v52 = a5;
  memset(v53, 0, 0x30uLL);
  memset(v54, 0, sizeof(v54));
  v9 = a4 >> byte_140465A4D;
  if ( !*(_QWORD *)(1984LL * (a4 >> byte_140465A4D) + *(_QWORD *)(a1 + 16) + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  v10 = v7 + 1;
  if ( (_DWORD)v7 == -1 )
    return 0LL;
  while ( 1 )
  {
    v11 = v10;
    v40 = v10--;
    FreeZeroLargePage = MiGetFreeZeroLargePage(a1, v10, 4, v9, a4, 4);
    v39 = FreeZeroLargePage;
    v13 = FreeZeroLargePage;
    if ( FreeZeroLargePage )
      break;
    if ( !v10 )
      return 0LL;
  }
  v14 = MiLargePageSizes[v10];
  v15 = &MiLargePageSizes[v7];
  v16 = *(_BYTE *)(FreeZeroLargePage + 34) & 7;
  v51 = v15;
  v42 = v16;
  if ( v14 != *v15 )
  {
    v30 = FreeZeroLargePage;
    do
    {
      v31 = 0LL;
      v32 = (v30 + 0x58000000000LL) / 48;
      v33 = v11;
      v48 = MiLargePageSizes[v33];
      v34 = v48;
      v50 = v14 / v48;
      if ( v14 / v48 )
      {
        v35 = 48 * v48;
        v47 = 48 * v48;
        v49 = v14 / v48 - 1;
        do
        {
          v36 = 1;
          if ( v34 > 1 )
          {
            v37 = v30 + 72;
            do
            {
              v41 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v41);
                while ( *(__int64 *)v37 < 0 );
              }
              *(_QWORD *)(v37 + 16) ^= (MiLargePageContainingFrames[v33] ^ *(_QWORD *)(v37 + 16)) & 0xFFFFFFFFFLL;
              *(_QWORD *)v37 &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)v37, 0x7FFFFFFFFFFFFFFFuLL);
              ++v36;
              v37 += 48LL;
            }
            while ( v36 < v34 );
            v16 = v42;
            v30 = v39;
            v35 = v47;
          }
          v43 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v43);
              while ( *(__int64 *)(v39 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
            v34 = v48;
            v30 = v39;
          }
          *(_QWORD *)(v30 + 40) ^= (MiLargePageContainingFrames[v33] ^ *(_QWORD *)(v30 + 40)) & 0xFFFFFFFFFLL;
          if ( v31 != v49 )
          {
            v38 = *(_BYTE *)(v30 + 34);
            *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v30 + 34) = v16 | v38 & 0xF8;
            MiInsertLargePageInNodeList(v32, v16, 0);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v30 += v35;
          v32 += v34;
          ++v31;
          v39 = v30;
        }
        while ( v31 < v50 );
        v15 = v51;
      }
      v14 = v34;
      v11 = v40 + 1;
      v30 += -48LL * v34;
      ++v40;
      v39 = v30;
    }
    while ( v34 != *v15 );
    LODWORD(v7) = v44;
    v13 = v39;
    v5 = v52;
  }
  v17 = MiProtectionToCacheAttribute(v45);
  if ( !v16 && (MiFlags & 0x80u) != 0 && (++dword_14046630C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((v13 + 0x58000000000LL) / 48);
    v18 = 0;
  }
  BYTE2(v53[4]) = BYTE2(v53[4]) & 0x38 | 0x45;
  v53[2] = ZeroPte;
  if ( v16 )
    MiSetOriginalPtePfnFromFreeList(&v53[2]);
  v19 = v54;
  v54[1] = v18;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    if ( v5 )
    {
      v19 = (_DWORD *)v5;
    }
    else
    {
      v54[0] = 1;
      v54[2] = 16;
    }
    MiAddColdPagesToHotRanges(v19, (v13 + 0x58000000000LL) / 48);
    if ( v19[1] )
    {
      if ( v19 == v54 )
        MiNotifyPageHeat(v19);
    }
  }
  v20 = MiPfnZeroingNeeded(v53, v17);
  v21 = v20 != 0;
  if ( v17 != 1 || v20 )
  {
    if ( v19[1] )
      MiNotifyPageHeat(v19);
    MiZeroAndConvertLargePage(v13, v7, v17, v21);
  }
  if ( v14 )
  {
    v22 = v13 + 24;
    v23 = (v13 + 0x58000000000LL) / 48 + 1;
    do
    {
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( *(__int64 *)v22 < 0 );
      }
      *(_QWORD *)(v22 + 16) &= 0xFFFFFFF000000000uLL;
      *(_QWORD *)(v22 - 8) = ZeroPte;
      v24 = *(_QWORD *)v22;
      v25 = *(_QWORD *)v22;
      *(_QWORD *)(v22 - 24) = 0LL;
      v26 = v24 | 0xFFFFFFFFFLL;
      v27 = v24 ^ (v23 ^ v25) & 0xFFFFFFFFFLL;
      v28 = *(_BYTE *)(v22 + 10);
      if ( v14 == 1 )
        v27 = v26;
      *(_QWORD *)v22 = v27;
      *(_BYTE *)(v22 + 10) = v28 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)v22, 0x7FFFFFFFFFFFFFFFuLL);
      ++v23;
      v22 += 48LL;
      --v14;
    }
    while ( v14 );
  }
  return v13;
}
