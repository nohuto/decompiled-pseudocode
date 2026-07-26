/*
 * XREFs of ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AE0EC
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000D590 (NdisReturnNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC650 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD4A4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE630 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AF188 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0089C44 (ExFreeToNPagedLookasideList.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisReturnPeriodicReceives(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  _QWORD *p_Alignment; // r14
  struct _NET_BUFFER_LIST *v4; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  _MDL *CurrentMdl; // rsi

  v2 = 0LL;
  p_Alignment = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
      v4->Link.Alignment = 0LL;
      if ( v4->NdisPoolHandle == WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        _InterlockedDecrement(&a1->PeriodicReceiveQueue.NblsAllocated);
        FirstNetBuffer = v4->FirstNetBuffer;
        v8 = (struct _NPAGED_LOOKASIDE_LIST *)v4->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v4);
      }
      else
      {
        if ( v2 )
          *p_Alignment = v4;
        else
          v2 = v4;
        p_Alignment = &v4->Link.Alignment;
      }
      v4 = Alignment;
    }
    while ( Alignment );
  }
  return v2;
}
