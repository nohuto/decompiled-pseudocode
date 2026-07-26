/*
 * XREFs of NdisFreeFragmentNetBufferList @ 0x1C004DA80
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C004D310 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C00089E0 (NdisFreeNetBuffer.c)
 *     NdisAdvanceNetBufferListDataStart @ 0x1C0012820 (NdisAdvanceNetBufferListDataStart.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __stdcall NdisFreeFragmentNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeFragmentFlags)
{
  bool v5; // bp
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *Alignment; // rbx

  FragmentNetBufferList->Link.Alignment = 0LL;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      FragmentNetBufferList,
      0LL,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0x98,
      (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)8,
      0);
  v5 = (*((_BYTE *)FragmentNetBufferList->NdisPoolHandle + 60) & 1) == 0;
  NdisAdvanceNetBufferListDataStart(
    FragmentNetBufferList,
    DataOffsetDelta,
    1u,
    (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdl);
  FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    do
    {
      MdlChain = FirstNetBuffer->MdlChain;
      if ( MdlChain )
      {
        do
        {
          Next = MdlChain->Next;
          IoFreeMdl(MdlChain);
          MdlChain = Next;
        }
        while ( Next );
      }
      Alignment = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != FragmentNetBufferList->FirstNetBuffer || v5 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = Alignment;
    }
    while ( Alignment );
  }
  NdisFreeNetBufferList(FragmentNetBufferList);
}
