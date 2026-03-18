/*
 * XREFs of MiConvertContiguousPages @ 0x1400C4818
 * Callers:
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400C4948 (MiPageAttributeBatchChangeNeeded.c)
 *     MiIsFreeZeroPfnCold @ 0x1400C4A94 (MiIsFreeZeroPfnCold.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 */

char __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  __int64 updated; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // rsi
  int IsFreeZeroPfnCold; // r14d
  BOOL v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // r9
  __int64 v18; // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v4 = a3;
  LOBYTE(updated) = MiSetOriginalPtePfnFromFreeList(&v20, a2, a3, a2);
  v9 = 0LL;
  v10 = &a1[6 * v8];
  if ( a1 != v10 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1, v6, v7, v8);
      v12 = MiPfnZeroingNeeded((__int64)a1, v4);
      LODWORD(updated) = MiPageAttributeBatchChangeNeeded(a1, v13);
      if ( (_DWORD)updated )
      {
        v15 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v15;
        if ( IsFreeZeroPfnCold )
        {
          v15 |= 2uLL;
          *a1 = v15;
        }
        a1[2] = (unsigned __int64)v9;
        v9 = a1;
        if ( v12 )
          *a1 = v15 | 1;
      }
      else
      {
        v14 = v20 & -(__int64)v12;
        a1[2] = v14;
        if ( IsFreeZeroPfnCold )
        {
          updated = MiUpdatePageFileHighInPte(v14, 4294967293LL);
          a1[2] = updated;
        }
      }
      a1 += 6;
    }
    while ( a1 != v10 );
    if ( v9 )
    {
      MiChangePageAttributeBatch((__int64)v9, v4, -1LL, v8);
      do
      {
        v16 = *v9;
        v17 = (unsigned __int64 *)v9[2];
        LOBYTE(updated) = -(*v9 & 1);
        v18 = v20 & -(__int64)((*v9 & 1) != 0);
        v9[2] = v18;
        if ( (v16 & 2) != 0 )
        {
          updated = MiUpdatePageFileHighInPte(v18, 4294967293LL);
          v9[2] = updated;
        }
        *v9 = v16 & 0xFFFFFFF000000000uLL;
        v9 = v17;
      }
      while ( v17 );
    }
  }
  return updated;
}
