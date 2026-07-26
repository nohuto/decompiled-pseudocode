/*
 * XREFs of ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000C4C0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000D0C0 (NdisAllocateNetBufferList.c)
 *     NdisReturnNetBufferLists @ 0x1C000D590 (NdisReturnNetBufferLists.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000E210 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C000F5D0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0010740 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0010A50 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisFreeCloneNetBufferList @ 0x1C00123A0 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C007A270 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C007A6A0 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C007AE98 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007B048 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C007B300 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C007B3A0 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B438 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C007B4C8 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B5CC (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B9B8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C00AAD08 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C00AAE80 (NdisNblTrackerRecordEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C00AA578 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00AA718 (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisCaptureStackTrace @ 0x1C00C7F90 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C00C8194 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisNblTrackerRecordEventInternal(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v6; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // r8d
  unsigned __int64 v12; // rdi
  struct _NET_BUFFER_LIST *Alignment; // r9
  unsigned int v14; // r11d
  unsigned int v15; // r10d
  unsigned int v16; // esi
  unsigned __int64 v17; // r12
  unsigned int v18; // r11d
  unsigned int v19; // ebx
  __int64 v20; // r13
  unsigned int v21; // r14d
  int v22; // ecx
  ULONG_PTR v23; // rcx
  unsigned int Number; // edx
  int v25; // edx
  unsigned __int64 *v26; // r10
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned __int64 v29; // rax
  __int64 v30; // r10
  struct _NET_BUFFER_LIST *v31; // r12
  struct _NET_BUFFER_LIST *v32; // r9
  unsigned __int64 v33; // r14
  int v35; // [rsp+28h] [rbp-48h]
  unsigned int v36; // [rsp+30h] [rbp-40h]
  struct _NET_BUFFER_LIST *v38; // [rsp+40h] [rbp-30h]
  unsigned __int64 v39; // [rsp+48h] [rbp-28h]
  __int64 v40; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-18h]
  __int64 v42; // [rsp+60h] [rbp-10h]

  v40 = 0LL;
  v41 = 0LL;
  v6 = a4;
  v42 = 0LL;
  HIDWORD(v9) = 0;
  v38 = ndisBreakNbl;
  v8 = ndisMaxNumberOfProcessors + 1;
  LODWORD(v9) = ndisNblTrackerHistorySize % (unsigned int)v8;
  v10 = 0;
  v11 = 0;
  v35 = 0;
  v12 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v39 = a2 | 0x8000000000000002uLL;
  Alignment = a1;
  if ( a1 )
  {
    do
    {
      v8 = v10 + (unsigned int)(ndisIsPossibleSmuggling(v12, (__int64)Alignment->NetBufferListInfo[27]) != 0) + 1;
      if ( (unsigned int)v8 > v15 )
        return;
      v10 = v8;
      if ( v14 < 0x1F )
        break;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    v11 = 0;
  }
  v16 = 8;
  v17 = v6 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != 0 )
    v16 = 16;
  if ( *(int *)ndisNblTrackerMode >= 4 )
  {
    v11 = ndisCaptureStackTrace(v8, v9, 0LL, Alignment);
    v35 = v11;
  }
  v18 = v16 + 8 * v10;
  v36 = v18;
  v19 = v18 >> 3;
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v18 >> 3)
      % ndisNblTrackerHistorySize;
  if ( *(int *)ndisNblTrackerMode >= 4 )
  {
    v21 = 0;
    if ( v19 )
    {
      do
      {
        v22 = HIDWORD(ndisNblTrackerHistoryBuffer[(v21 + (unsigned int)v20) % ndisNblTrackerHistorySize]);
        if ( v22 >= 0 )
        {
          v23 = v22 & 0x3FFFFFF;
          if ( (_DWORD)v23 )
            ndisReleaseStackTrace(v23);
        }
        ++v21;
      }
      while ( v21 < v19 );
      v11 = v35;
      v18 = v36;
    }
    v6 = a4;
  }
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(v40) = a3;
  v25 = v40 & 0xFFFFF | (Number << 20);
  LODWORD(v40) = v25;
  if ( v17 )
  {
    HIDWORD(v40) = HIDWORD(v40) & 0x80000000 | v11 & 0x3FFFFFF | ((a5 & 0xF) << 26) & 0xBFFFFFFF;
    v41 = v6 | 0x8000000000000000uLL;
  }
  else
  {
    HIDWORD(v40) = HIDWORD(v40) & 0xC0000000 | v11 & 0x3FFFFFF | ((a5 & 0xF) << 26) | 0x40000000;
    LODWORD(v40) = v25 ^ (v25 ^ ((_DWORD)v6 << 8)) & 0xFFF00;
  }
  v26 = (unsigned __int64 *)&v40;
  v27 = 0;
  do
  {
    v28 = (v27 + (unsigned int)v20) % ndisNblTrackerHistorySize;
    v29 = *v26;
    ++v27;
    ++v26;
    ndisNblTrackerHistoryBuffer[v28] = v29;
  }
  while ( v27 < v16 >> 3 );
  if ( v16 < v18 )
  {
    v30 = v20;
    do
    {
      v31 = 0LL;
      v32 = a1;
      v33 = (v30 + ((unsigned __int64)v16 >> 3)) % ndisNblTrackerHistorySize;
      if ( a1 )
      {
        if ( a1 == v38 )
        {
          DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v38);
          if ( a4 )
          {
            if ( a3 >= 0x1F )
            {
              DbgPrint("NBL will be given to: ");
              ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a4 & 0xFFFFFFFFFFFFFFF8uLL));
            }
          }
          __debugbreak();
        }
        if ( a3 >= 0x1F )
          v31 = (struct _NET_BUFFER_LIST *)a1->Link.Alignment;
        if ( ndisIsPossibleSmuggling(v12, (__int64)a1->NetBufferListInfo[27]) )
        {
          v16 += 8;
          if ( v16 >= v18 )
          {
            ndisNblTrackerHistoryBuffer[(unsigned int)v33] = 0LL;
            return;
          }
          ndisNblTrackerHistoryBuffer[(unsigned int)v33] = v39;
          LODWORD(v33) = (v30 + ((unsigned __int64)v16 >> 3)) % ndisNblTrackerHistorySize;
        }
      }
      v16 += 8;
      a1 = v31;
      ndisNblTrackerHistoryBuffer[(unsigned int)v33] = (unsigned __int64)v32;
    }
    while ( v16 < v18 );
  }
}
