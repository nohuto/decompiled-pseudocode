/*
 * XREFs of MiFreeMdlPageRun @ 0x140029DE0
 * Callers:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1408615A4 (MiFreePartitionPageRun.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiFreeSmallPageFromMdl @ 0x140029F10 (MiFreeSmallPageFromMdl.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r12
  int v4; // r15d
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14

  v3 = -1LL;
  v4 = a3 & 1;
  v5 = 0LL;
  v6 = a2;
  while ( v6 )
  {
    if ( (a1 & 0xF) != 0 )
    {
LABEL_3:
      if ( v3 != (a1 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v3 = a1 & 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap(
          *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL)),
          a1 & 0xFFFFFFFFFFFFFE00uLL,
          0x200uLL,
          0,
          0);
      }
      v5 += MiFreeSmallPageFromMdl(a1++);
      --v6;
    }
    else
    {
      v9 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v10 = MiLargePageSizes[v9];
        if ( ((v10 - 1) & a1) == 0 && v6 >= v10 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= 3 )
          goto LABEL_3;
      }
      v5 += MiFreeLargePageMemory(a1, v9, v4);
      a1 += v10;
      v6 -= v10;
    }
  }
  return v5;
}
