/*
 * XREFs of MiActivePageClaimCandidate @ 0x1400DAA40
 * Callers:
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1400DA610 (MiPfnsWorthTrying.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiHyperPage @ 0x1400DD8BC (MiHyperPage.c)
 *     MiVaIsPageFileHash @ 0x1400DD974 (MiVaIsPageFileHash.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 *v12; // r10
  __int64 v13; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int i; // r10d
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int16 v22; // ax
  bool v23; // cc
  unsigned __int64 v24; // r9
  unsigned __int16 v25; // ax

  v5 = 1LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v9 = v6 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) == 0 )
  {
    v10 = *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)(qword_140466188 + 8 * ((v10 >> 40) & 0x3FF)) == a1 )
    {
      if ( *(_BYTE *)(a1 + 4766) )
      {
        v11 = 0LL;
        v12 = MiLargePageSizes;
        v13 = a1 + 5000;
        while ( !*(_QWORD *)v13 || !_bittest64(*(const signed __int64 **)(v13 + 8), v8 / *v12) )
        {
          v11 = (unsigned int)(v11 + 1);
          v13 += 16LL;
          ++v12;
          if ( (unsigned int)v11 >= 2 )
            goto LABEL_8;
        }
        return MiLargePageSizes[v11];
      }
      else
      {
LABEL_8:
        if ( (v10 & 0x200000000000000LL) != 0 )
        {
          if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0
            && v9 != qword_140465A10
            && v9 != qword_140465A18
            && (a3 != 1 || !MiIsPfnFileOnly(a2) && !MiIsPfnFromSlabAllocation(a2)) )
          {
            if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
            {
              return 512LL;
            }
            else
            {
              v16 = *(_WORD *)(a2 + 32);
              if ( v16 <= 1u
                && v16 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
                && (*(_BYTE *)a2 & 1) != 0
                && *(__int64 *)(a2 + 8) < 0 )
              {
                return 0LL;
              }
            }
          }
        }
        else if ( v9 != -8LL
               && (v9 < 0xFFFF800000000000uLL || byte_140467440[((v9 >> 39) & 0x1FF) - 256] != 5)
               && ((v10 >> 54) & 7) != 1
               && (v10 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
               && v9 >= 0xFFFFF68000000000uLL
               && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v15 = (__int64)(v9 << 25) >> 16;
          if ( (*(_BYTE *)a2 & 1) == 0 )
          {
            if ( (unsigned int)MiHyperPage(a2) )
            {
              v25 = *(_WORD *)(a2 + 32);
              if ( v25 > 1u || v25 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
                return v5;
            }
            else if ( !MiVaIsPageFileHash(*(_QWORD *)(qword_140466188 + 8 * ((v10 >> 40) & 0x3FF)), v15)
                   && ((unsigned int)MiGetSystemRegionType(v15) != 5
                    || (*(_BYTE *)(a2 + 35) & 0x10) != 0
                    || *(_WORD *)(a2 + 32) > 1u
                    || (MiFlags & 0x800) != 0
                    || a3 == 1 && (MI_READ_PTE_LOCK_FREE(v9) & 0x201) != 1) )
            {
              return v5;
            }
            return 0LL;
          }
          if ( !PsInitialSystemProcess || v8 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
          {
            v17 = 0xFFFFF6FB40000000uLL;
            v18 = 0xFFFFF6FB5FFFFFF8uLL;
            for ( i = 0; i < 3; ++i )
            {
              if ( v9 <= v18 && v9 >= v17 )
              {
                if ( *(_WORD *)(a2 + 32) <= 1u && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
                  return 0LL;
                return v5;
              }
              v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
            if ( (v10 & 0xFFFFFFFFFLL) == v8 )
            {
              v5 = 0LL;
              if ( v9 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
                return 1LL;
              return v5;
            }
            v20 = *(_QWORD *)(a2 + 24);
            v21 = v20 & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v20 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
            {
              if ( (v20 & 0xFFFFFFFFFLL) == 0 || v15 >= qword_1404659D8 && v15 < qword_1404659D8 + 4096 )
                return v5;
              v22 = *(_WORD *)(a2 + 32);
              if ( v22 > 1u )
                return v5;
              v23 = v22 <= v21;
              goto LABEL_51;
            }
            if ( (unsigned int)MiGetSystemRegionType((__int64)(v9 << 25) >> 16) != 6 )
            {
              if ( !(unsigned int)MiHyperPage(a2) )
                return v5;
              v23 = *(_WORD *)(a2 + 32) <= 1u;
LABEL_51:
              if ( !v23 )
                return v5;
              return 0LL;
            }
            if ( *(_WORD *)(a2 + 32) <= 1u && v24 < 0x10000 )
              return 0LL;
          }
        }
      }
    }
  }
  return v5;
}
