/*
 * XREFs of MiGetFastLargePage @ 0x1408997F8
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140096AB8 (MiGetLargePageDemoteAsNeeded.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSetPfnOriginalPte @ 0x1402D947C (MiSetPfnOriginalPte.c)
 */

__int64 __fastcall MiGetFastLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // rbx
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r9d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v19[56]; // [rsp+38h] [rbp-40h] BYREF

  memset(v19, 0, 0x30uLL);
  result = MiGetLargePageDemoteAsNeeded(a1, a2, a3, a4, 4u);
  v10 = result;
  if ( result )
  {
    MiFreeZeroPageSizeIndex(result);
    v11 = *(_BYTE *)(v10 + 34);
    v12 = ZeroPte;
    v18 = ZeroPte;
    v19[34] = v11 & 0xC0 | 5;
    if ( (v11 & 7) == 1 )
    {
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v18);
      v12 = v18;
    }
    MiSetPfnOriginalPte((__int64)v19, v12);
    MiSetPfnOriginalPte(v10, v13);
    v14 = MiProtectionToCacheAttribute(a5);
    if ( MiPfnZeroingNeeded((__int64)v19, v14) )
    {
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v18);
      MiSetPfnOriginalPte(v10, v18);
    }
    MiUpdateLargePageBitMap(a1, v16, v17, v15, v15);
    return v10;
  }
  return result;
}
