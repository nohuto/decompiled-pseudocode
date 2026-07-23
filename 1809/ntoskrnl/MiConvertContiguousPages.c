/*
 * XREFs of MiConvertContiguousPages @ 0x1400117AC
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x1400118DC (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x140082360 (MiIsFreeZeroPfnCold.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 */

char __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 updated; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  int IsFreeZeroPfnCold; // r14d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // r9
  __int64 v16; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v4 = a3;
  LOBYTE(updated) = MiSetOriginalPtePfnFromFreeList(&v18, a2, a3, a2);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
      v10 = MiPfnZeroingNeeded(a1, v4);
      LODWORD(updated) = MiPageAttributeBatchChangeNeeded(a1, v11);
      if ( (_DWORD)updated )
      {
        v13 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v13;
        if ( IsFreeZeroPfnCold )
        {
          v13 |= 2uLL;
          *a1 = v13;
        }
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v10 )
          *a1 = v13 | 1;
      }
      else
      {
        v12 = v18 & -(__int64)(v10 != 0);
        a1[2] = v12;
        if ( IsFreeZeroPfnCold )
        {
          updated = MiUpdatePageFileHighInPte(v12, 4294967293LL);
          a1[2] = updated;
        }
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch(v6, v4, -1LL);
      do
      {
        v14 = *v6;
        v15 = (unsigned __int64 *)v6[2];
        LOBYTE(updated) = -(*v6 & 1);
        v16 = v18 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v16;
        if ( (v14 & 2) != 0 )
        {
          updated = MiUpdatePageFileHighInPte(v16, 4294967293LL);
          v6[2] = updated;
        }
        *v6 = v14 & 0xFFFFFFF000000000uLL;
        v6 = v15;
      }
      while ( v15 );
    }
  }
  return updated;
}
