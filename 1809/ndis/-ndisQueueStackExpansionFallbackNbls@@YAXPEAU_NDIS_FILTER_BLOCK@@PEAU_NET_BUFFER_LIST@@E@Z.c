/*
 * XREFs of ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0001C90 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C00036A0 (NdisReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00057B0 (NdisFSendNetBufferListsComplete.c)
 *     ndisFilterSendNetBufferLists @ 0x1C0006950 (ndisFilterSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0007070 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C000FE40 (ndisInvokeNextReceiveHandler.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0059B2C (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C005C2AC (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005C4D0 (ndisInvokeNextSendCompleteHandler.c)
 * Callees:
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisQueueStackExpansionFallbackNbls(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  KIRQL v6; // al
  KIRQL v7; // r14
  _QWORD **v8; // rcx
  _QWORD *i; // rdx

  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      a1->NblTracker,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
      (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
      0);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  v7 = v6;
  a1->LockDbg = 2099710;
  v8 = (_QWORD **)((char *)&a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete
                 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL));
  for ( i = *v8; i; i = (_QWORD *)*i )
    v8 = (_QWORD **)i;
  *v8 = &a2->Link.Alignment;
  ndisQueueStackExpansionFallbackWorkItem(a1);
  a1->LockThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v7);
}
