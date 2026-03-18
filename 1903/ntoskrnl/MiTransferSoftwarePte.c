/*
 * XREFs of MiTransferSoftwarePte @ 0x1400DBA04
 * Callers:
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400DBFD0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x1400F0E24 (MiFindFreePageFileSpace.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14014AF94 (MiUpdatePfnBackingStore.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
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
