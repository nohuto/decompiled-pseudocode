/*
 * XREFs of ndisStackExpansionFallbackWorker @ 0x1C005C7D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C00057B0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1C0007070 (NdisFReturnNetBufferLists.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000AE50 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C005B200 (ndisFDirectOidRequestCompleteInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B8630 (ndisFNetPnPEventInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B8DF0 (ndisFDevicePnPEventNotifyInternal.c)
 */

void __fastcall ndisStackExpansionFallbackWorker(char *P)
{
  KSPIN_LOCK *v1; // r15
  KIRQL v3; // al
  __int128 v4; // xmm0
  KIRQL v5; // bl
  __int128 v6; // xmm1
  char *v7; // rbx
  struct _KEVENT **v8; // rbx
  char *v9; // rax
  struct _KEVENT **v10; // r14
  struct _KEVENT *v11; // rdi
  __int64 v12; // rdx
  KIRQL v13; // al
  char *v14; // r14
  char *v15; // rbx
  struct _KEVENT *v16; // rdi
  char *v17; // rdi
  char *v18; // rax
  struct _KEVENT *v19; // rbx
  PVOID Pa[2]; // [rsp+48h] [rbp-29h]
  struct _NET_BUFFER_LIST *NetBufferLists; // [rsp+68h] [rbp-9h]
  _QWORD Parameter[3]; // [rsp+70h] [rbp-1h] BYREF
  char *v23; // [rsp+88h] [rbp+17h]
  __int128 v24; // [rsp+A8h] [rbp+37h]

  v1 = (KSPIN_LOCK *)(P + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)P + 18);
  v4 = *((_OWORD *)P + 15);
  v5 = v3;
  v6 = *((_OWORD *)P + 17);
  P[232] = 0;
  v24 = v4;
  *(_OWORD *)Pa = *((_OWORD *)P + 16);
  NetBufferLists = (struct _NET_BUFFER_LIST *)*((_QWORD *)P + 36);
  memset(P + 240, 0, 0x38uLL);
  *((_QWORD *)P + 19) = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v5);
  Parameter[1] = P;
  if ( (_BYTE)v24 )
    ndisFDoOidRequestInternal(P);
  if ( BYTE1(v4) )
    ndisFOidRequestCompleteInternal(P);
  v7 = (char *)*((_QWORD *)&v4 + 1);
  while ( v7 )
  {
    v23 = v7;
    v7 = (char *)*((_QWORD *)v7 + 9);
    ndisFDirectOidRequestCompleteInternal(Parameter);
  }
  v8 = (struct _KEVENT **)Pa[0];
  while ( v8 )
  {
    v9 = (char *)(v8 + 10);
    v10 = v8;
    v11 = v8[11];
    v12 = (__int64)v8;
    v8 = (struct _KEVENT **)v8[10];
    *((_QWORD *)v9 + 1) = 0LL;
    ndisFIndicateStatusInternal((__int64)P, v12);
    if ( v11 )
    {
      KeSetEvent(v11, 0, 0);
    }
    else
    {
      ndisDereferenceRef((PKSPIN_LOCK)P + 40, 1u);
      ExFreePoolWithTag(v10, 0);
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc(v1);
  *((_QWORD *)P + 19) = KeGetCurrentThread();
  *((_DWORD *)P + 40) = 2098937;
  if ( !*((_QWORD *)P + 32) )
    P[296] = 0;
  *((_QWORD *)P + 19) = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v13);
  v14 = (char *)Pa[1];
  while ( v14 )
  {
    v15 = v14 + 32;
    v23 = v14;
    v16 = (struct _KEVENT *)*((_QWORD *)v14 + 4);
    v14 = (char *)*((_QWORD *)v14 + 7);
    *(_QWORD *)v15 = 0LL;
    ndisFNetPnPEventInternal(Parameter);
    *((_DWORD *)v15 + 2) = Parameter[0];
    KeSetEvent(v16, 0, 0);
  }
  v17 = (char *)v6;
  while ( v17 )
  {
    v18 = v17 + 28;
    v23 = v17;
    v19 = *(struct _KEVENT **)(v17 + 36);
    v17 = *(char **)(v17 + 28);
    *((_QWORD *)v18 + 1) = 0LL;
    ndisFDevicePnPEventNotifyInternal(Parameter);
    KeSetEvent(v19, 0, 0);
  }
  if ( *((_QWORD *)&v6 + 1) )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        *((struct _NET_BUFFER_LIST **)&v6 + 1),
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)P + 83),
        NdisNblTrackerEvent_SentToFilter,
        0);
    NdisFSendNetBufferListsComplete(P, *((PNET_BUFFER_LIST *)&v6 + 1), 0);
  }
  if ( NetBufferLists )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)P + 83),
        NdisNblTrackerEvent_ReturnedToFilter,
        0);
    NdisFReturnNetBufferLists(P, NetBufferLists, 0);
  }
  ndisDereferenceFilter((KSPIN_LOCK *)P, 1u);
}
