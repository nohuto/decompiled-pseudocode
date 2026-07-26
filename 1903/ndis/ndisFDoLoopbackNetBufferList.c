/*
 * XREFs of ndisFDoLoopbackNetBufferList @ 0x1C008E534
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C008F11C (ndisFLoopbackNetBufferLists.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

void __fastcall ndisFDoLoopbackNetBufferList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
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
  __int64 *v16; // r14
  char *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned int v21; // ebp
  char *i; // r15
  PVOID v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rbx
  unsigned int Flags; // ecx
  int v27; // ecx

  DataLength = *(unsigned int *)(a2 + 24);
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
    || ((v16 = *(__int64 **)(a2 + 8), (*((_BYTE *)v16 + 10) & 5) == 0)
      ? (v17 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000000u))
      : (v17 = (char *)v16[3]),
        !v17) )
  {
    NdisFreeNetBufferList(v13);
    goto LABEL_35;
  }
  v18 = *(unsigned int *)(a2 + 16);
  v19 = DataLength;
  if ( *((_DWORD *)v16 + 10) - (int)v18 <= (unsigned int)DataLength )
    v19 = *((_DWORD *)v16 + 10) - v18;
  v20 = v19;
  v21 = DataLength - v19;
  memmove(v15, &v17[v18], v19);
  for ( i = &v15[v20]; ; i += v25 )
  {
    v16 = (__int64 *)*v16;
    if ( !v16 || !v21 )
      break;
    v23 = (*((_BYTE *)v16 + 10) & 5) != 0
        ? (PVOID)v16[3]
        : MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v23 )
      break;
    v24 = v21;
    if ( v21 >= *((_DWORD *)v16 + 10) )
      v24 = *((_DWORD *)v16 + 10);
    v25 = v24;
    v21 -= v24;
    memmove(i, v23, v24);
  }
  Flags = v13->Flags;
  v13->NblFlags |= 0x8000u;
  v27 = Flags | 0x80;
  v13->Flags = v27;
  v13->SourceHandle = *(void **)(a3 + 120);
  if ( (a5 & 2) != 0 )
    v13->Flags = v27 | 0x200;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8, 0LL, 0x9Bu, 0);
  (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, __int64, int))(a1 + 632))(a1, v13, a4, 1LL, 2);
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, 0LL, 0xA8uLL, 0x9Cu, 0);
  if ( (v10->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v10->MappedSystemVa, v10);
  ExFreePoolWithTag(v10, 0);
  NdisFreeNetBufferList(v13);
}
