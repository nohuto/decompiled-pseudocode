/*
 * XREFs of SmAcquireReleaseCharges @ 0x1400D7A30
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D749C (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14011B304 (SmFpCleanup.c)
 *     SmKmAllocateMdlForLock @ 0x1401485C0 (SmKmAllocateMdlForLock.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14014867C (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140148D6C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpAllocate @ 0x1401491C4 (SmFpAllocate.c)
 *     SmFpFree @ 0x14014A504 (SmFpFree.c)
 *     SmKmFreeMdlForLock @ 0x14014D344 (SmKmFreeMdlForLock.c)
 *     SmFpPreAllocate @ 0x140199274 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x1400D7A78 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x1400D7B04 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(unsigned __int64 a1, char a2, int a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r9d

  v3 = a1 >> 12;
  v4 = 1;
  v5 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v5 = a2 & 1;
  if ( a3 )
    MmReleaseResourceCharge(v3, v5, 0LL);
  else
    return (unsigned int)MmChargeResources(v3, v5);
  return v4;
}
