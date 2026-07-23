/*
 * XREFs of MiGetFastLargePage @ 0x14085E68C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140028AD4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiSetPfnOriginalPte @ 0x1402BFFE4 (MiSetPfnOriginalPte.c)
 */

__int64 __fastcall MiGetFastLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int *a6)
{
  int *v6; // rdi
  __int64 LargePageDemoteAsNeeded; // rbx
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  _BYTE v17[34]; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+52h] [rbp-16h]

  v6 = a6;
  *a6 = 0;
  LargePageDemoteAsNeeded = MiGetLargePageDemoteAsNeeded(a1, a2, a3, a4, 4u);
  if ( LargePageDemoteAsNeeded )
  {
    MiFreeZeroPageSizeIndex(LargePageDemoteAsNeeded);
    v9 = ZeroPte;
    a6 = (int *)ZeroPte;
    v10 = *(_BYTE *)(LargePageDemoteAsNeeded + 34);
    v18 = v18 & 0x38 | v10 & 0xC5 | 5;
    if ( (v10 & 7) == 1 )
    {
      MiSetOriginalPtePfnFromFreeList(&a6);
      v9 = (__int64)a6;
    }
    MiSetPfnOriginalPte((__int64)v17, v9);
    MiSetPfnOriginalPte(LargePageDemoteAsNeeded, v11);
    v12 = MiProtectionToCacheAttribute(a5);
    if ( v12 != v13 || MiPfnZeroingNeeded((__int64)v17, v13) )
      *v6 = v13;
    MiUpdateLargePageBitMap(a1, v14, v15, v13, v13);
  }
  return LargePageDemoteAsNeeded;
}
