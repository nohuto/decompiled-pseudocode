/*
 * XREFs of MiTbFlushType @ 0x140023DD0
 * Callers:
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MiNoFaultFound @ 0x140075DA0 (MiNoFaultFound.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiTrimWorkingSet @ 0x140129C88 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14012A074 (MiSimpleAging.c)
 *     MiCrcStillIntact @ 0x14013E6D0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A358 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14017CD38 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9814 (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x1402CA5B0 (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1405EC600 (MiEliminateZeroPages.c)
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
