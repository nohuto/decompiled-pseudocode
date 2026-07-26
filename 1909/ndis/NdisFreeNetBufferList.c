/*
 * XREFs of NdisFreeNetBufferList @ 0x1C000DB60
 * Callers:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000D0C0 (NdisAllocateNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C007A9F0 (NdisFreeFragmentNetBufferList.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C007ABB0 (NdisFreeReassembledNetBufferList.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C007B300 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B438 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B9B8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C00807D4 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0089164 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C008E704 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00AC240 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ?ndisFreePeriodicReceives@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00ACDC0 (-ndisFreePeriodicReceives@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AE0EC (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000D4D8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferListContext @ 0x1C001E9A0 (NdisFreeNetBufferListContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __stdcall NdisFreeNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  __int64 v1; // rdx
  char *NdisPoolHandle; // r14
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  char *v7; // rdi
  _SLIST_HEADER *v8; // rsi
  _SLIST_HEADER *v9; // rcx
  char *v10; // r14

  NdisPoolHandle = (char *)NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  if ( Context && (NetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(NetBufferList, Context->Size - Context->Offset);
  NetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)NetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v1) = 1;
    WfpNblInfoCleanup(NetBufferList, v1);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v5 = (unsigned int)NetBufferList[-1].NetBufferListInfo[29];
    v6 = (unsigned __int64)v5 << 8;
    v7 = &NdisPoolHandle[v6 + 384];
    if ( !v7[216] )
    {
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v6 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
      v5 = (unsigned int)NetBufferList[-1].NetBufferListInfo[29];
    }
    if ( v5 == KeGetPcr()->Prcb.Number )
      v8 = (_SLIST_HEADER *)*((_QWORD *)v7 + 24);
    else
      v8 = (_SLIST_HEADER *)*((_QWORD *)v7 + 25);
    ++*((_DWORD *)v7 + 7);
    if ( ExQueryDepthSList(v8) < *((_WORD *)v7 + 8) )
    {
      v9 = v8;
LABEL_15:
      ExpInterlockedPushEntrySList(v9, (PSLIST_ENTRY)NetBufferList);
      return;
    }
    ++*((_DWORD *)v7 + 8);
  }
  v10 = NdisPoolHandle + 128;
  ++*((_DWORD *)v10 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v10) < *((_WORD *)v10 + 8) )
  {
    v9 = (_SLIST_HEADER *)v10;
    goto LABEL_15;
  }
  ++*((_DWORD *)v10 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v10 + 7))(NetBufferList, v10);
}
