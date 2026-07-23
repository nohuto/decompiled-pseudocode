/*
 * XREFs of MiTbFlushType @ 0x1400EDC24
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiCrcStillIntact @ 0x140082C44 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiNoFaultFound @ 0x1400E9414 (MiNoFaultFound.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiTrimWorkingSet @ 0x140130F08 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1401312D0 (MiSimpleAging.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140173C88 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4564 (MmUpdateOldWorkingSetPages.c)
 *     MiEliminateZeroPages @ 0x14066D070 (MiEliminateZeroPages.c)
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
