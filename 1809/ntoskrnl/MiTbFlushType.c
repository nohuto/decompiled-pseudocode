/*
 * XREFs of MiTbFlushType @ 0x1400EDBA4
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiTerminateWsleCluster @ 0x14007B968 (MiTerminateWsleCluster.c)
 *     MiCrcStillIntact @ 0x140082C54 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiFreeWsleList @ 0x1400B2AB0 (MiFreeWsleList.c)
 *     MiValidFault @ 0x1400B6DF0 (MiValidFault.c)
 *     MiNoFaultFound @ 0x1400E9394 (MiNoFaultFound.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiTrimWorkingSet @ 0x140130E38 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140131200 (MiSimpleAging.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142220 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140173B88 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiReplaceLockedPage @ 0x14018B034 (MiReplaceLockedPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB6BC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4374 (MmUpdateOldWorkingSetPages.c)
 *     MiEliminateZeroPages @ 0x14066BEB0 (MiEliminateZeroPages.c)
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
