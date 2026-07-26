/*
 * XREFs of ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0001440 (NdisFreeCloneNetBufferList.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001720 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001C90 (NdisMSendNetBufferListsComplete.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006B8B0 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisNblTrackerUpdateOwnershipCount(unsigned __int64 a1, unsigned __int64 a2, char *a3, _BYTE *a4)
{
  char v5; // al
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx

  if ( a2 )
  {
    v5 = *a3;
    if ( !*a3 )
    {
      v5 = 0;
      if ( !*a4 )
      {
        *a4 = 1;
        v5 = KeGetCurrentIrql() == 2;
        *a3 = v5;
      }
    }
    v7 = a1 & 0xFFFFFFFFFFFFFFF8uLL;
    v8 = 2 * ((a1 >> 1) & 1);
    if ( v5 )
    {
      v9 = (_QWORD *)(*(_QWORD *)(v7 + 8 * v8 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v9 += a2;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 8 * v8 + 48), a2);
    }
  }
}
