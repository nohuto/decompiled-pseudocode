/*
 * XREFs of MiGet64KPage @ 0x14002B8B0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiGetClusterPage @ 0x1402C69AC (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x140028C1C (MiInsertLargePageInNodeList.c)
 *     MiGetFreeZeroLargePage @ 0x14002BCF4 (MiGetFreeZeroLargePage.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiZeroAndConvertLargePage @ 0x140118D38 (MiZeroAndConvertLargePage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEC3C (MiAddColdPagesToHotRanges.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGet64KPage(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  int v4; // esi
  unsigned int v5; // edi
  _DWORD *v6; // r15
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v10; // r13d
  __int64 FreeZeroLargePage; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  unsigned __int64 v29; // rbx
  ULONG_PTR v30; // r12
  __int64 v31; // r15
  unsigned __int64 v32; // rsi
  __int64 v33; // r13
  unsigned int v34; // edi
  __int64 v35; // rbx
  char v36; // al
  int v37; // [rsp+30h] [rbp-168h]
  int v38; // [rsp+34h] [rbp-164h] BYREF
  int v39; // [rsp+38h] [rbp-160h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-15Ch]
  int v41; // [rsp+40h] [rbp-158h] BYREF
  __int64 v42; // [rsp+48h] [rbp-150h]
  ULONG_PTR v43; // [rsp+50h] [rbp-148h]
  unsigned __int64 v44; // [rsp+58h] [rbp-140h]
  __int64 v45; // [rsp+60h] [rbp-138h]
  unsigned __int64 v46; // [rsp+68h] [rbp-130h]
  _DWORD *v47; // [rsp+70h] [rbp-128h]
  char v48[16]; // [rsp+78h] [rbp-120h] BYREF
  __int64 v49; // [rsp+88h] [rbp-110h] BYREF
  char v50; // [rsp+9Ah] [rbp-FEh]
  _DWORD v51[36]; // [rsp+B0h] [rbp-E8h] BYREF

  v4 = a1;
  v40 = a2;
  v5 = a3 >> byte_14043B109;
  v6 = a4;
  v8 = *(_QWORD *)(a1 + 16);
  v47 = a4;
  if ( !*(_QWORD *)(1984LL * (a3 >> byte_14043B109) + v8 + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  v9 = 3;
  while ( 1 )
  {
    v10 = v9;
    v37 = v9--;
    FreeZeroLargePage = MiGetFreeZeroLargePage(v4, v9, 4, v5, a3, 4);
    v12 = FreeZeroLargePage;
    if ( FreeZeroLargePage )
      break;
    if ( !v9 )
      return 0LL;
  }
  v13 = MiLargePageSizes[v9];
  v14 = *(_BYTE *)(FreeZeroLargePage + 34) & 7;
  if ( v13 != 16 )
  {
    do
    {
      v29 = 0LL;
      v44 = 0LL;
      v30 = (v12 + 0x58000000000LL) / 48;
      v43 = v30;
      v31 = v10;
      v32 = MiLargePageSizes[v31];
      v46 = v13 / v32;
      if ( v13 / v32 )
      {
        v33 = v13 / v32 - 1;
        v45 = 48 * v32;
        v42 = v33;
        do
        {
          v34 = 1;
          if ( v32 > 1 )
          {
            v35 = v12 + 72;
            do
            {
              v38 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v38);
                while ( *(__int64 *)v35 < 0 );
              }
              *(_QWORD *)(v35 + 16) ^= (*(_QWORD *)(v35 + 16) ^ MiLargePageContainingFrames[v31]) & 0xFFFFFFFFFLL;
              *(_QWORD *)v35 &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)v35, 0x7FFFFFFFFFFFFFFFuLL);
              ++v34;
              v35 += 48LL;
            }
            while ( v34 < v32 );
            v29 = v44;
            v30 = v43;
            v33 = v42;
          }
          v39 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v39);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ MiLargePageContainingFrames[v31]) & 0xFFFFFFFFFLL;
          if ( v29 != v33 )
          {
            v36 = *(_BYTE *)(v12 + 34);
            *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v12 + 34) = v14 | v36 & 0xF8;
            MiInsertLargePageInNodeList(v30);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v12 += v45;
          v30 += v32;
          ++v29;
          v43 = v30;
          v44 = v29;
        }
        while ( v29 < v46 );
        v10 = v37;
      }
      ++v10;
      v13 = v32;
      v12 += -48LL * v32;
      v37 = v10;
    }
    while ( v32 != 16 );
    v6 = v47;
  }
  v15 = (v12 + 0x58000000000LL) / 48;
  v17 = MiProtectionToCacheAttribute(v40);
  if ( !v14 && (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero((v12 + 0x58000000000LL) / 48);
  v50 = v50 & 0x38 | 0x45;
  v49 = ZeroPte;
  if ( v14 )
    MiSetOriginalPtePfnFromFreeList(&v49, v16, v18, v19);
  v20 = v51;
  v51[1] = 0;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    if ( v6 )
    {
      v20 = v6;
    }
    else
    {
      v51[0] = 1;
      v51[2] = 16;
    }
    MiAddColdPagesToHotRanges(v20, (v12 + 0x58000000000LL) / 48, v13 + v15);
    if ( v20[1] )
    {
      if ( v20 == v51 )
        MiNotifyPageHeat(v20);
    }
  }
  if ( v17 != 1 || (unsigned int)MiPfnZeroingNeeded(v48, 1LL) )
  {
    if ( v20[1] )
      MiNotifyPageHeat(v20);
    MiZeroAndConvertLargePage(v12, 2LL, v17);
  }
  v21 = v12 + 24;
  v22 = v15 + 1;
  do
  {
    v41 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v41);
      while ( *(__int64 *)v21 < 0 );
    }
    *(_QWORD *)(v21 + 16) &= 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v21 - 8) = ZeroPte;
    v23 = *(_QWORD *)v21;
    v24 = *(_QWORD *)v21;
    *(_QWORD *)(v21 - 24) = 0LL;
    v25 = v23 | 0xFFFFFFFFFLL;
    v26 = v23 ^ (v22 ^ v24) & 0xFFFFFFFFFLL;
    v27 = *(_BYTE *)(v21 + 10);
    if ( v13 == 1 )
      v26 = v25;
    *(_QWORD *)v21 = v26;
    *(_BYTE *)(v21 + 10) = v27 & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
    ++v22;
    v21 += 48LL;
    --v13;
  }
  while ( v13 );
  return v12;
}
