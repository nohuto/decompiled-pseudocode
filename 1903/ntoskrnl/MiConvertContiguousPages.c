/*
 * XREFs of MiConvertContiguousPages @ 0x1400A1890
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiIsFreeZeroPfnCold @ 0x1400A185C (MiIsFreeZeroPfnCold.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400A19C0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x1400A452C (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1400B87B0 (MiChangePageAttributeBatch.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 */

char __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 updated; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  int v9; // eax
  int v10; // r14d
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  LOBYTE(updated) = MiSetOriginalPtePfnFromFreeList(&v20);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      LOBYTE(v9) = MiIsFreeZeroPfnCold((__int64)a1);
      v10 = v9;
      v11 = MiPfnZeroingNeeded(a1, a3);
      LODWORD(updated) = MiPageAttributeBatchChangeNeeded(a1, v12);
      if ( (_DWORD)updated )
      {
        v15 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v15;
        if ( v10 )
        {
          v15 |= 2uLL;
          *a1 = v15;
        }
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v11 )
          *a1 = v15 | 1;
      }
      else
      {
        v14 = v20 & -(__int64)(v11 != 0);
        a1[2] = v14;
        if ( v10 )
        {
          updated = MiUpdatePageFileHighInPte(v14, 4294967293LL, v13);
          a1[2] = updated;
        }
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch(v6, a3, -1LL);
      do
      {
        v16 = *v6;
        v17 = (unsigned __int64 *)v6[2];
        LOBYTE(updated) = -(*v6 & 1);
        v18 = v20 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v18;
        if ( (v16 & 2) != 0 )
        {
          updated = MiUpdatePageFileHighInPte(v18, 4294967293LL, v16);
          v6[2] = updated;
        }
        *v6 = v16 & 0xFFFFFFF000000000uLL;
        v6 = v17;
      }
      while ( v17 );
    }
  }
  return updated;
}
