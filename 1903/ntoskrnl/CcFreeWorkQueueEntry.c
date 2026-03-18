/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14007E068
 * Callers:
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcWriteBehind @ 0x14007D79C (CcWriteBehind.c)
 *     CcWorkerThread @ 0x14007D940 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400A9898 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012276C (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x140136150 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 * Callees:
 *     CcDereferencePartition @ 0x14007E0D4 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Next = ListEntry[8].Next;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
  }
  return CcDereferencePartition(Next);
}
