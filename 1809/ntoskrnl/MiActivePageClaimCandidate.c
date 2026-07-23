/*
 * XREFs of MiActivePageClaimCandidate @ 0x14009C990
 * Callers:
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiHyperPage @ 0x14009D914 (MiHyperPage.c)
 *     MiVaIsPageFileHash @ 0x14009D9C8 (MiVaIsPageFileHash.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r9
  __int64 *v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned int i; // r9d
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int16 v23; // ax
  bool v24; // cc
  unsigned __int64 v25; // rdx
  unsigned __int16 v26; // ax

  v3 = a3;
  v5 = 1LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v9 = v6 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
    return v5;
  v10 = *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(qword_14043B808 + 8 * ((v10 >> 40) & 0x3FF));
  if ( v11 != a1 )
    return v5;
  if ( *(_BYTE *)(a1 + 4766) )
  {
    v12 = 0LL;
    v13 = MiLargePageSizes;
    v14 = a1 + 5000;
    while ( !*(_QWORD *)v14 || !_bittest64(*(const signed __int64 **)(v14 + 8), v8 / *v13) )
    {
      v12 = (unsigned int)(v12 + 1);
      v14 += 16LL;
      ++v13;
      if ( (unsigned int)v12 >= 2 )
      {
        v3 = a3;
        goto LABEL_9;
      }
    }
    return MiLargePageSizes[v12];
  }
  else
  {
LABEL_9:
    if ( (v10 & 0x200000000000000LL) != 0 )
    {
      if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0
        && v9 != qword_14043B0B8
        && v9 != qword_14043B0C0
        && (v3 != 1 || !MiIsPfnFileOnly(a2) && !MiIsPfnFromSlabAllocation(a2)) )
      {
        if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          return 512LL;
        }
        else
        {
          v17 = *(_WORD *)(a2 + 32);
          if ( v17 <= 1u
            && v17 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
            && (*(_BYTE *)a2 & 1) != 0
            && *(__int64 *)(a2 + 8) < 0 )
          {
            return 0LL;
          }
        }
      }
    }
    else if ( v9 != -8LL
           && (v9 < 0xFFFF800000000000uLL || ((byte_14043CA10[((v9 >> 39) & 0x1FF) - 256] - 5) & 0xF7) != 0)
           && ((v10 >> 54) & 7) != 1
           && (v10 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
           && v9 >= 0xFFFFF68000000000uLL
           && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v16 = (__int64)(v9 << 25) >> 16;
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        if ( (unsigned int)MiHyperPage(a2) )
        {
          v26 = *(_WORD *)(a2 + 32);
          if ( v26 > 1u || v26 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
            return v5;
        }
        else if ( !MiVaIsPageFileHash(v11, v16) )
        {
          if ( (unsigned int)MiGetSystemRegionType(v16) != 5 || *(_WORD *)(a2 + 32) > 1u || (MiFlags & 0x800) != 0 )
            return v5;
          if ( a3 == 1 )
          {
            if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x201) == 1 )
              return 0LL;
            return v5;
          }
        }
        return 0LL;
      }
      if ( !PsInitialSystemProcess || v8 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
      {
        v18 = 0xFFFFF6FB40000000uLL;
        v19 = 0xFFFFF6FB5FFFFFF8uLL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v9 >= v18 && v9 <= v19 )
          {
            if ( *(_WORD *)(a2 + 32) <= 1u && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
              return 0LL;
            return v5;
          }
          v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        if ( (v10 & 0xFFFFFFFFFLL) == v8 )
        {
          v5 = 0LL;
          if ( v9 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
            return 1LL;
          return v5;
        }
        v21 = *(_QWORD *)(a2 + 24);
        v22 = v21 & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v21 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
        {
          if ( (v21 & 0xFFFFFFFFFLL) == 0 || v16 >= qword_14043B080 && v16 < qword_14043B080 + 12288 )
            return v5;
          v23 = *(_WORD *)(a2 + 32);
          if ( v23 > 1u )
            return v5;
          v24 = v23 <= v22;
          goto LABEL_50;
        }
        if ( (unsigned int)MiGetSystemRegionType((__int64)(v9 << 25) >> 16) != 6 )
        {
          if ( !(unsigned int)MiHyperPage(a2) )
            return v5;
          v24 = *(_WORD *)(a2 + 32) <= 1u;
LABEL_50:
          if ( !v24 )
            return v5;
          return 0LL;
        }
        if ( *(_WORD *)(a2 + 32) <= 1u && v25 < 0x10000 )
          return 0LL;
      }
    }
  }
  return v5;
}
