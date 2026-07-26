/*
 * XREFs of ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00ADFF8
 * Callers:
 *     ?ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00ADEF4 (-ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00AF090 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C007C208 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void __fastcall ndisQueuePeriodicReceivesWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _QWORD WnodeEventItem[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !_InterlockedExchange(&a1->PeriodicReceiveQueue.WorkItemQueued, 1) )
  {
    if ( HIBYTE(word_1C00E809C) )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 48;
      WnodeEventItem[1] = qword_1C00E8090;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 24;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ndisReferenceMiniportNoCheck((__int64)a1, 0x4Cu);
    ndisInsertInWorkQueue(
      (struct _KSEMAPHORE *)WPP_MAIN_CB.Dpc.DeferredRoutine + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      &a1->PeriodicReceiveQueue.WorkItem,
      a2);
  }
}
