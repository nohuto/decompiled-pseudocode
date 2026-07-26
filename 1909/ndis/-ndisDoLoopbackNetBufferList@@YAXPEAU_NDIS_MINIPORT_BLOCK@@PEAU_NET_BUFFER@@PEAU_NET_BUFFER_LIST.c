/*
 * XREFs of ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0089164
 * Callers:
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0089B10 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00210F0 (ndisInvokeNextReceiveHandler.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned int a4,
        char a5)
{
  SIZE_T DataLength; // rbp
  __int64 v8; // rbx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v10; // rdi
  unsigned __int64 v11; // rax
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v13; // rsi
  __int64 v14; // rax
  char *v15; // r15
  _MDL *CurrentMdl; // r14
  char *MappedSystemVa; // rax
  __int64 CurrentMdlOffset; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rbx
  ULONG v21; // ebp
  char *i; // r15
  PVOID v23; // rax
  ULONG ByteCount; // ecx
  __int64 v25; // rbx

  DataLength = a2->DataLength;
  v8 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( (v8 + DataLength) >> 32 )
    return;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v8 + DataLength), 0x706C444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  v11 = (unsigned __int64)PoolWithTag + v8;
  if ( v11 < (unsigned __int64)v10 )
  {
LABEL_37:
    ExFreePoolWithTag(v10, 0);
    return;
  }
  v10->Next = 0LL;
  v10->MdlFlags = 0;
  v10->ByteCount = DataLength;
  v10->StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
  v10->ByteOffset = v11 & 0xFFF;
  v10->Size = 8 * ((((v11 & 0xFFF) + DataLength + 4095) >> 12) + 6);
  MmBuildMdlForNonPagedPool(v10);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, v10, 0, DataLength);
  v13 = NetBufferAndNetBufferList;
  if ( !NetBufferAndNetBufferList )
  {
LABEL_35:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    goto LABEL_37;
  }
  v14 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
  if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
    v15 = *(char **)(v14 + 24);
  else
    v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !v15
    || ((CurrentMdl = a2->CurrentMdl, (CurrentMdl->MdlFlags & 5) == 0)
      ? (MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
      : (MappedSystemVa = (char *)CurrentMdl->MappedSystemVa),
        !MappedSystemVa) )
  {
    NdisFreeNetBufferList(v13);
    goto LABEL_35;
  }
  CurrentMdlOffset = a2->CurrentMdlOffset;
  v19 = DataLength;
  if ( CurrentMdl->ByteCount - (int)CurrentMdlOffset <= (unsigned int)DataLength )
    v19 = CurrentMdl->ByteCount - CurrentMdlOffset;
  v20 = v19;
  v21 = DataLength - v19;
  memmove(v15, &MappedSystemVa[CurrentMdlOffset], v19);
  for ( i = &v15[v20]; ; i += v25 )
  {
    CurrentMdl = CurrentMdl->Next;
    if ( !CurrentMdl || !v21 )
      break;
    v23 = (CurrentMdl->MdlFlags & 5) != 0
        ? CurrentMdl->MappedSystemVa
        : MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v23 )
      break;
    ByteCount = v21;
    if ( v21 >= CurrentMdl->ByteCount )
      ByteCount = CurrentMdl->ByteCount;
    v25 = ByteCount;
    v21 -= ByteCount;
    memmove(i, v23, ByteCount);
  }
  v13->Flags |= 0x80u;
  v13->NblFlags |= 0x8000u;
  v13->SourceHandle = a3->SourceHandle;
  v13->NetBufferListInfo[5] = a3->SourceHandle;
  if ( (a5 & 2) != 0 )
    v13->Flags |= 0x200u;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8, 0LL, 0x9Bu, 0);
  ndisInvokeNextReceiveHandler(
    v13,
    a4,
    1u,
    2,
    (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsObject,
    a1->Next.IndicateNetBufferListsContext,
    (void (*)(void))a1->Next.IndicateNetBufferListsHandler);
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, 0LL, 0xA8uLL, 0x9Cu, 0);
  if ( (v10->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v10->MappedSystemVa, v10);
  ExFreePoolWithTag(v10, 0);
  NdisFreeNetBufferList(v13);
}
