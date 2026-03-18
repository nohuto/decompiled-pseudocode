/*
 * XREFs of MiSplitPfnBitMaps @ 0x14075079C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiCreatePfnBitMaps @ 0x14075063C (MiCreatePfnBitMaps.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400ACFF0 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitPfnBitMaps(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v4; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  ULONG_PTR *v9; // rdi
  unsigned __int64 v10; // r14

  v4 = MiLargePageSizes;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 < 2 )
    {
      v8 = *v4;
      v9 = &a1[2 * v7 + 625];
      goto LABEL_4;
    }
    if ( a1 == &MiSystemPartition )
      break;
LABEL_7:
    ++v7;
    ++v4;
    if ( v7 >= 3 )
      return 1LL;
  }
  v9 = a1 + 887;
  v8 = 512LL;
LABEL_4:
  v10 = ((v8 + a2 + a3 - 1) & ~(v8 - 1)) / v8;
  if ( (unsigned int)MiSplitBitmapPages(9, v9[1] + ((a2 / v8) >> 3), 8 * (((v10 + 7) >> 3) - ((a2 / v8) >> 3))) )
  {
    if ( v10 > *v9 )
      *v9 = v10;
    goto LABEL_7;
  }
  return 0LL;
}
