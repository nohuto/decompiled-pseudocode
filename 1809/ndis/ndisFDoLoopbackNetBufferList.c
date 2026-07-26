/*
 * XREFs of ndisFDoLoopbackNetBufferList @ 0x1C005B2B8
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C005BD5C (ndisFLoopbackNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisFDoLoopbackNetBufferList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rdi
  SIZE_T DataLength; // rbp
  SIZE_T v9; // rbx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // rdi
  unsigned __int64 v12; // rax
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v14; // rsi
  __int64 v15; // rax
  char *v16; // r15
  __int64 *v17; // r14
  char *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  char *i; // rdx
  char *v22; // rax
  __int64 v23; // rbx
  unsigned int Flags; // ecx
  int v25; // ecx

  v5 = a3;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqq(0x62u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, a2, a3);
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
        v11->ByteOffset = v12 & 0xFFF;
        v11->Size = 8 * ((((v12 & 0xFFF) + DataLength + 4095) >> 12) + 6);
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
            v17 = *(__int64 **)(a2 + 8);
            v18 = (*((_BYTE *)v17 + 10) & 5) != 0
                ? (char *)v17[3]
                : (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v18 )
            {
              v19 = *(unsigned int *)(a2 + 16);
              v20 = DataLength;
              if ( *((_DWORD *)v17 + 10) - (int)v19 <= (unsigned int)DataLength )
                v20 = *((_DWORD *)v17 + 10) - v19;
              for ( i = &v18[v19]; ; i = v22 )
              {
                v23 = v20;
                LODWORD(DataLength) = DataLength - v20;
                memmove(v16, i, v20);
                v17 = (__int64 *)*v17;
                v16 += v23;
                if ( !v17 || !(_DWORD)DataLength )
                  break;
                v22 = (*((_BYTE *)v17 + 10) & 5) != 0
                    ? (char *)v17[3]
                    : (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                if ( !v22 )
                  break;
                v20 = DataLength;
                if ( (unsigned int)DataLength >= *((_DWORD *)v17 + 10) )
                  v20 = *((_DWORD *)v17 + 10);
              }
              Flags = v14->Flags;
              v14->NblFlags |= 0x8000u;
              v25 = Flags | 0x80;
              v14->Flags = v25;
              v14->SourceHandle = *(void **)(a3 + 120);
              if ( (a5 & 2) != 0 )
                v14->Flags = v25 | 0x200;
              if ( ndisNblTrackerMode )
                ndisNblTrackerTransferOwnershipInternal(
                  v14,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8,
                  0LL,
                  NdisNblTrackerEvent_LoopbackIndicated,
                  0);
              (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, __int64, int))(a1 + 640))(
                a1,
                v14,
                a4,
                1LL,
                2);
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
              goto LABEL_40;
            }
          }
          NdisFreeNetBufferList(v14);
        }
        if ( (v11->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v11->MappedSystemVa, v11);
      }
      ExFreePoolWithTag(v11, 0);
    }
LABEL_40:
    v5 = a3;
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqq(0x63u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, a2, v5);
}
