/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14007EDF0
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x14001B334 (CcWaitForUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x14007F2E0 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x1400D617C (CcWriteBehind.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00B8 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1D80 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x140140390 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1401B2D84 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     CcDereferencePartition @ 0x14007C998 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

char __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
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
  return CcDereferencePartition((__int64)Next);
}
