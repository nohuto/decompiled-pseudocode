/*
 * XREFs of ndisStackExpansionFallbackWorker @ 0x1C0090D10
 * Callers:
 *     <none>
 * Callees:
 *     ndisFOidRequestCompleteInternal @ 0x1C0003030 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000E210 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1C0010740 (NdisFReturnNetBufferLists.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisDereferenceFilter @ 0x1C008E22C (ndisDereferenceFilter.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C008E5F0 (ndisFDirectOidRequestCompleteInternal.c)
 */

void __fastcall ndisStackExpansionFallbackWorker(struct _NDIS_FILTER_BLOCK *a1)
{
  KIRQL v2; // al
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  KIRQL v5; // bl
  __int64 v6; // rbx
  char *v7; // rbx
  char *v8; // rax
  void *v9; // r14
  struct _KEVENT *v10; // rdi
  struct _NDIS_STATUS_INDICATION *v11; // rdx
  KIRQL v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // r14
  char *v16; // rbx
  struct _KEVENT *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rax
  struct _KEVENT *v20; // rbx
  PVOID P[2]; // [rsp+48h] [rbp-29h]
  PNET_BUFFER_LIST NetBufferLists; // [rsp+68h] [rbp-9h]
  _QWORD Parameter[7]; // [rsp+70h] [rbp-1h] BYREF
  __int128 v24; // [rsp+A8h] [rbp+37h]

  memset(Parameter, 0, sizeof(Parameter));
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v3 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest;
  v4 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents;
  v5 = v2;
  a1->StackExpansionFallback.WorkItemQueued = 0;
  v24 = v3;
  *(_OWORD *)P = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications;
  NetBufferLists = a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
  memset(&a1->StackExpansionFallback.PendingWork, 0, sizeof(a1->StackExpansionFallback.PendingWork));
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  Parameter[1] = a1;
  if ( (_BYTE)v24 )
    ndisFDoOidRequestInternal((char *)a1);
  if ( BYTE1(v3) )
    ndisFOidRequestCompleteInternal(a1);
  v6 = *((_QWORD *)&v3 + 1);
  while ( v6 )
  {
    Parameter[3] = v6;
    v6 = *(_QWORD *)(v6 + 72);
    ndisFDirectOidRequestCompleteInternal(Parameter);
  }
  v7 = (char *)P[0];
  if ( P[0] )
  {
    do
    {
      v8 = v7 + 80;
      v9 = v7;
      v10 = (struct _KEVENT *)*((_QWORD *)v7 + 11);
      v11 = (struct _NDIS_STATUS_INDICATION *)v7;
      v7 = (char *)*((_QWORD *)v7 + 10);
      *((_QWORD *)v8 + 1) = 0LL;
      ndisFIndicateStatusInternal(a1, v11);
      if ( v10 )
      {
        KeSetEvent(v10, 0, 0);
      }
      else
      {
        ndisDereferenceRef(&a1->PnPRef.SpinLock, 1u);
        ExFreePoolWithTag(v9, 0);
      }
    }
    while ( v7 );
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  if ( !a1->StackExpansionFallback.PendingWork.StatusIndications )
    a1->StatusIndicationsQueued = 0;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  v15 = (char *)P[1];
  while ( v15 )
  {
    v16 = v15 + 32;
    Parameter[3] = v15;
    v17 = (struct _KEVENT *)*((_QWORD *)v15 + 4);
    v15 = (char *)*((_QWORD *)v15 + 7);
    *(_QWORD *)v16 = 0LL;
    ndisFNetPnPEventInternal(Parameter, v13, v14);
    *((_DWORD *)v16 + 2) = Parameter[0];
    KeSetEvent(v17, 0, 0);
  }
  v18 = v4;
  while ( v18 )
  {
    v19 = v18 + 28;
    Parameter[3] = v18;
    v20 = *(struct _KEVENT **)(v18 + 36);
    v18 = *(_QWORD *)(v18 + 28);
    *(_QWORD *)(v19 + 8) = 0LL;
    ndisFDevicePnPEventNotifyInternal(Parameter, v13, v14);
    KeSetEvent(v20, 0, 0);
  }
  if ( *((_QWORD *)&v4 + 1) )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        *((struct _NET_BUFFER_LIST **)&v4 + 1),
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        (unsigned __int64)a1->NblTracker,
        0x91u,
        0);
    NdisFSendNetBufferListsComplete(a1, *((PNET_BUFFER_LIST *)&v4 + 1), 0);
  }
  if ( NetBufferLists )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        (unsigned __int64)a1->NblTracker,
        0x8Bu,
        0);
    NdisFReturnNetBufferLists(a1, NetBufferLists, 0);
  }
  ndisDereferenceFilter((KSPIN_LOCK *)&a1->Header.Type, 1u);
}
