/*
 * XREFs of MiTbFlushType @ 0x1400241C0
 * Callers:
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiNoFaultFound @ 0x140076010 (MiNoFaultFound.c)
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiTrimWorkingSet @ 0x14012A6A8 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14012AA94 (MiSimpleAging.c)
 *     MiCrcStillIntact @ 0x14013ED60 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14017D428 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C458C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9574 (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1405ECDD0 (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
