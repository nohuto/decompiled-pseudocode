/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14007E468
 * Callers:
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcWriteBehind @ 0x14007DB9C (CcWriteBehind.c)
 *     CcWorkerThread @ 0x14007DD40 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140090B98 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012387C (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x140136AF0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14018CBA0 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1401BE6E4 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
