/*
 * XREFs of MiFreeMdlPageRun @ 0x1400F04E4
 * Callers:
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x14089C784 (MiFreePartitionPageRun.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     MiFreeSmallPageFromMdl @ 0x1400F0614 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x140146738 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v2; // r12
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r14

  v2 = -1LL;
  v3 = 0LL;
  v4 = a2;
  while ( v4 )
  {
    if ( (BugCheckParameter2 & 0xF) != 0 )
    {
LABEL_3:
      if ( v2 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v2 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap(
          *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL)),
          BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL,
          0x200uLL,
          0,
          0);
      }
      v3 += MiFreeSmallPageFromMdl(BugCheckParameter2++);
      --v4;
    }
    else
    {
      v7 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v8 = MiLargePageSizes[v7];
        if ( ((v8 - 1) & BugCheckParameter2) == 0 && v4 >= v8 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= 3 )
          goto LABEL_3;
      }
      v3 += MiFreeLargePageMemory(BugCheckParameter2);
      BugCheckParameter2 += v8;
      v4 -= v8;
    }
  }
  return v3;
}
