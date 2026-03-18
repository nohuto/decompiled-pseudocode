/*
 * XREFs of SmAcquireReleaseCharges @ 0x140107B54
 * Callers:
 *     SmFpCleanup @ 0x140106120 (SmFpCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140106174 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1401069F4 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmKmAllocateMdlForLock @ 0x140147F20 (SmKmAllocateMdlForLock.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140147FDC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401486CC (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     SmKmFreeMdlForLock @ 0x14014CCA4 (SmKmFreeMdlForLock.c)
 *     SmFpPreAllocate @ 0x140198C14 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x140107B9C (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x140107C28 (MmReleaseResourceCharge.c)
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
