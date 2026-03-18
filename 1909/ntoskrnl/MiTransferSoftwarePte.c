/*
 * XREFs of MiTransferSoftwarePte @ 0x1400BB884
 * Callers:
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400BBE50 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x1400DC1D4 (MiFindFreePageFileSpace.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14014B634 (MiUpdatePfnBackingStore.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x1400BB940 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char v5; // r11
  __int16 v6; // r10
  unsigned __int64 result; // rax
  __int64 updated; // rax
  __int16 v9; // r8
  char v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v4 = a3;
  MiSetNonResidentPteHeat(&v12, 0LL);
  if ( (v6 & 0x400) != 0 || (v5 & 4) != 0 )
    result = v12;
  else
    result = v12 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, v4, *(unsigned __int16 *)(a2 + 204));
    else
      updated = MiSwizzleInvalidPte(v4 << 32);
    result = updated ^ (unsigned __int16)(updated ^ (v9 << 12)) & 0xF000;
    v11 = result;
    if ( (v10 & 1) != 0 )
    {
      result |= 4uLL;
      v11 = result;
    }
    if ( (v10 & 2) != 0 )
      return v11 | 2;
  }
  return result;
}
