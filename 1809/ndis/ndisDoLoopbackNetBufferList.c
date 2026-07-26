/*
 * XREFs of ndisDoLoopbackNetBufferList @ 0x1C0055D90
 * Callers:
 *     ndisMLoopbackNetBufferLists @ 0x1C00578B8 (ndisMLoopbackNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C000FE40 (ndisInvokeNextReceiveHandler.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // r14
  SIZE_T DataLength; // rbp
  SIZE_T v9; // rbx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // rdi
  unsigned __int64 v12; // rax
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v14; // rsi
  __int64 v15; // rax
  char *v16; // r15
  struct _MDL *v17; // r14
  char *MappedSystemVa; // rax
  __int64 v19; // rdx
  unsigned int ByteCount; // ecx
  char *i; // rdx
  char *v22; // rax
  __int64 v23; // rbx

  v5 = a3;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqq(0x3Eu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  DataLength = *(unsigned int *)(a2 + 24);
  v9 = (MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( !((v9 + DataLength) >> 32) )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v9 + DataLength), 0x706C444Eu);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = (unsigned __int64)PoolWithTag + v9;
      if ( v12 >= (unsigned __int64)v11 )
      {
        v11->Next = 0LL;
        v11->MdlFlags = 0;
        v11->ByteCount = DataLength;
        v11->StartVa = (PVOID)(v12 & 0xFFFFFFFFFFFFF000uLL);
        v11->Size = 8 * ((((v12 & 0xFFF) + DataLength + 4095) >> 12) + 6);
        v11->ByteOffset = v12 & 0xFFF;
        MmBuildMdlForNonPagedPool(v11);
        NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(
                                      ndisNetBufferListPool,
                                      0,
                                      0,
                                      v11,
                                      0,
                                      DataLength);
        v14 = NetBufferAndNetBufferList;
        if ( NetBufferAndNetBufferList )
        {
          v15 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
          if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
            v16 = *(char **)(v15 + 24);
          else
            v16 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v15, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
          if ( v16 )
          {
            v17 = *(struct _MDL **)(a2 + 8);
            if ( (v17->MdlFlags & 5) != 0 )
              MappedSystemVa = (char *)v17->MappedSystemVa;
            else
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( MappedSystemVa )
            {
              v19 = *(unsigned int *)(a2 + 16);
              ByteCount = DataLength;
              if ( v17->ByteCount - (int)v19 <= (unsigned int)DataLength )
                ByteCount = v17->ByteCount - v19;
              for ( i = &MappedSystemVa[v19]; ; i = v22 )
              {
                v23 = ByteCount;
                LODWORD(DataLength) = DataLength - ByteCount;
                memmove(v16, i, ByteCount);
                v17 = v17->Next;
                v16 += v23;
                if ( !v17 || !(_DWORD)DataLength )
                  break;
                v22 = (char *)((v17->MdlFlags & 5) != 0
                             ? v17->MappedSystemVa
                             : MmMapLockedPagesSpecifyCache(v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag));
                if ( !v22 )
                  break;
                ByteCount = DataLength;
                if ( (unsigned int)DataLength >= v17->ByteCount )
                  ByteCount = v17->ByteCount;
              }
              v14->Flags |= 0x80u;
              v14->NblFlags |= 0x8000u;
              v5 = a3;
              v14->SourceHandle = *(void **)(a3 + 120);
              v14->NetBufferListInfo[5] = *(void **)(a3 + 120);
              if ( (a5 & 2) != 0 )
                v14->Flags |= 0x200u;
              if ( ndisNblTrackerMode )
                ndisNblTrackerTransferOwnershipInternal(
                  v14,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8,
                  0LL,
                  NdisNblTrackerEvent_LoopbackIndicated,
                  0);
              ndisInvokeNextReceiveHandler(
                v14,
                a4,
                1u,
                2,
                *(struct _NDIS_FILTER_BLOCK **)(a1 + 2528),
                *(void **)(a1 + 2512),
                *(void (**)(void))(a1 + 2640));
              if ( ndisNblTrackerMode )
                ndisNblTrackerTransferOwnershipInternal(
                  v14,
                  0LL,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8,
                  NdisNblTrackerEvent_LoopbackReturned,
                  0);
              if ( (v11->MdlFlags & 0x20) != 0 )
                MmUnmapLockedPages(v11->MappedSystemVa, v11);
              ExFreePoolWithTag(v11, 0);
              NdisFreeNetBufferList(v14);
              goto LABEL_41;
            }
            v5 = a3;
          }
          NdisFreeNetBufferList(v14);
        }
        if ( (v11->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v11->MappedSystemVa, v11);
      }
      ExFreePoolWithTag(v11, 0);
    }
  }
LABEL_41:
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqq(0x3Fu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, v5);
}
