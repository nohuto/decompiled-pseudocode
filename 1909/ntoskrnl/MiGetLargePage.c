/*
 * XREFs of MiGetLargePage @ 0x140096E20
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400AD2E0 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiGetClusterPage @ 0x1402E0684 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiGetFreeZeroLargePage @ 0x1400972C8 (MiGetFreeZeroLargePage.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiZeroAndConvertLargePage @ 0x140097F8C (MiZeroAndConvertLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EB814 (MiAddColdPagesToHotRanges.c)
 *     MiNotifyPageHeat @ 0x1402EBD14 (MiNotifyPageHeat.c)
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
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // r14
  int v22; // eax
  BOOL v23; // ebp
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // al
  __int64 v32; // r13
  unsigned __int64 v33; // r15
  ULONG_PTR v34; // r12
  __int64 v35; // r14
  unsigned __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned int v38; // edi
  __int64 v39; // rbx
  char v40; // al
  __int64 v41; // [rsp+30h] [rbp-178h]
  int v42; // [rsp+38h] [rbp-170h]
  int v43; // [rsp+3Ch] [rbp-16Ch] BYREF
  int v44; // [rsp+40h] [rbp-168h]
  int v45; // [rsp+44h] [rbp-164h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-160h]
  unsigned int v47; // [rsp+4Ch] [rbp-15Ch]
  int v48; // [rsp+50h] [rbp-158h] BYREF
  __int64 v49; // [rsp+58h] [rbp-150h]
  unsigned __int64 v50; // [rsp+60h] [rbp-148h]
  __int64 v51; // [rsp+68h] [rbp-140h]
  unsigned __int64 v52; // [rsp+70h] [rbp-138h]
  __int64 *v53; // [rsp+78h] [rbp-130h]
  __int64 v54; // [rsp+80h] [rbp-128h]
  _QWORD v55[7]; // [rsp+88h] [rbp-120h] BYREF
  _DWORD v56[36]; // [rsp+C0h] [rbp-E8h] BYREF

  v5 = a5;
  v7 = a2;
  v47 = a3;
  v46 = a2;
  v54 = a5;
  memset(v55, 0, 0x30uLL);
  memset(v56, 0, sizeof(v56));
  v9 = a4 >> byte_14046574D;
  if ( !*(_QWORD *)(1984LL * (a4 >> byte_14046574D) + *(_QWORD *)(a1 + 16) + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  v10 = v7 + 1;
  if ( (_DWORD)v7 == -1 )
    return 0LL;
  while ( 1 )
  {
    v11 = v10;
    v42 = v10--;
    FreeZeroLargePage = MiGetFreeZeroLargePage(a1, v10, 4, v9, a4, 4);
    v41 = FreeZeroLargePage;
    v13 = FreeZeroLargePage;
    if ( FreeZeroLargePage )
      break;
    if ( !v10 )
      return 0LL;
  }
  v14 = MiLargePageSizes[v10];
  v15 = &MiLargePageSizes[v7];
  v16 = *(_BYTE *)(FreeZeroLargePage + 34) & 7;
  v53 = v15;
  v44 = v16;
  if ( v14 != *v15 )
  {
    v32 = FreeZeroLargePage;
    do
    {
      v33 = 0LL;
      v34 = (v32 + 0x58000000000LL) / 48;
      v35 = v11;
      v50 = MiLargePageSizes[v35];
      v36 = v50;
      v52 = v14 / v50;
      if ( v14 / v50 )
      {
        v37 = 48 * v50;
        v49 = 48 * v50;
        v51 = v14 / v50 - 1;
        do
        {
          v38 = 1;
          if ( v36 > 1 )
          {
            v39 = v32 + 72;
            do
            {
              v43 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v39, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v43);
                while ( *(__int64 *)v39 < 0 );
              }
              *(_QWORD *)(v39 + 16) ^= (MiLargePageContainingFrames[v35] ^ *(_QWORD *)(v39 + 16)) & 0xFFFFFFFFFLL;
              *(_QWORD *)v39 &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)v39, 0x7FFFFFFFFFFFFFFFuLL);
              ++v38;
              v39 += 48LL;
            }
            while ( v38 < v36 );
            v16 = v44;
            v32 = v41;
            v37 = v49;
          }
          v45 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v45);
              while ( *(__int64 *)(v41 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
            v36 = v50;
            v32 = v41;
          }
          *(_QWORD *)(v32 + 40) ^= (MiLargePageContainingFrames[v35] ^ *(_QWORD *)(v32 + 40)) & 0xFFFFFFFFFLL;
          if ( v33 != v51 )
          {
            v40 = *(_BYTE *)(v32 + 34);
            *(_QWORD *)(v32 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v32 + 34) = v16 | v40 & 0xF8;
            MiInsertLargePageInNodeList(v34, v16, 0);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 += v37;
          v34 += v36;
          ++v33;
          v41 = v32;
        }
        while ( v33 < v52 );
        v15 = v53;
      }
      v14 = v36;
      v11 = v42 + 1;
      v32 += -48LL * v36;
      ++v42;
      v41 = v32;
    }
    while ( v36 != *v15 );
    LODWORD(v7) = v46;
    v13 = v41;
    v5 = v54;
  }
  v18 = MiProtectionToCacheAttribute(v47);
  if ( !v16 && (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((v13 + 0x58000000000LL) / 48);
    v20 = 0LL;
  }
  BYTE2(v55[4]) = BYTE2(v55[4]) & 0x38 | 0x45;
  v55[2] = ZeroPte;
  if ( v16 )
    MiSetOriginalPtePfnFromFreeList(&v55[2], v17, v19, v20);
  v21 = v56;
  v56[1] = v20;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    if ( v5 )
    {
      v21 = (_DWORD *)v5;
    }
    else
    {
      v56[0] = 1;
      v56[2] = 16;
    }
    MiAddColdPagesToHotRanges(v21, (v13 + 0x58000000000LL) / 48);
    if ( v21[1] )
    {
      if ( v21 == v56 )
        MiNotifyPageHeat(v21);
    }
  }
  v22 = MiPfnZeroingNeeded(v55, v18);
  v23 = v22 != 0;
  if ( v18 != 1 || v22 )
  {
    if ( v21[1] )
      MiNotifyPageHeat(v21);
    MiZeroAndConvertLargePage(v13, (unsigned int)v7, v18, v23);
  }
  if ( v14 )
  {
    v24 = v13 + 24;
    v25 = (v13 + 0x58000000000LL) / 48 + 1;
    do
    {
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( *(__int64 *)v24 < 0 );
      }
      *(_QWORD *)(v24 + 16) &= 0xFFFFFFF000000000uLL;
      *(_QWORD *)(v24 - 8) = ZeroPte;
      v26 = *(_QWORD *)v24;
      v27 = *(_QWORD *)v24;
      *(_QWORD *)(v24 - 24) = 0LL;
      v28 = v26 | 0xFFFFFFFFFLL;
      v29 = v26 ^ (v25 ^ v27) & 0xFFFFFFFFFLL;
      v30 = *(_BYTE *)(v24 + 10);
      if ( v14 == 1 )
        v29 = v28;
      *(_QWORD *)v24 = v29;
      *(_BYTE *)(v24 + 10) = v30 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
      ++v25;
      v24 += 48LL;
      --v14;
    }
    while ( v14 );
  }
  return v13;
}
