/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C007A0A0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C007A4D0 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007AE78 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B7E8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088F94 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C008E534 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00AC070 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000D4D8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferListContext @ 0x1C001EA90 (NdisAllocateNetBufferListContext.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C007AB9C (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r12d
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  char *v13; // r15
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  __int16 v16; // r15
  int v17; // eax
  ULONG v18; // ecx
  ULONG ByteCount; // eax
  unsigned __int64 v21; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v23; // al
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _SLIST_ENTRY *v28; // rax
  KIRQL v29; // al
  __int64 v30; // r8

  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) == 0 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v11 = 1;
        if ( ndisMaxNumberOfProcessors != 1 )
        {
          v12 = (unsigned __int64)Number << 8;
          v13 = (char *)PoolHandle + v12 + 384;
          if ( !v13[216] )
            ndisPplLazyInitializeLookaside(
              (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v12 + 384),
              (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
          v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
          ++*((_DWORD *)v13 + 5);
          v15 = ExpInterlockedPopEntrySList(v14);
          if ( !v15 )
          {
            if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) < 0xAu
              || (v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26),
                  v30 = *((_QWORD *)v13 + 24),
                  *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25),
                  *((_QWORD *)v13 + 25) = v30,
                  KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v29),
                  (v15 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v13 + 24))) == 0LL) )
            {
              ++*((_DWORD *)v13 + 6);
            }
          }
          if ( v15 )
            goto LABEL_9;
        }
        ++*((_DWORD *)PoolHandle + 37);
        v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( v15 )
          goto LABEL_30;
        v21 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v21 + 32 >= v21 )
        {
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v21 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            PoolWithTagPriority->Next = 0LL;
            v15 = PoolWithTagPriority + 2;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v24 = *((_QWORD *)PoolHandle + 2);
              v25 = (char *)PoolHandle + 16;
              v26 = &v15[-2].Next + 1;
              if ( *(NDIS_HANDLE *)(v24 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              v26[1] = v25;
              *v26 = v24;
              *(_QWORD *)(v24 + 8) = v26;
              *v25 = v26;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v23);
            }
          }
          else
          {
            v15 = 0LL;
          }
          v11 = 0;
          if ( v15 )
          {
LABEL_30:
            *((_DWORD *)&v15[-1].Next + 2) = Number;
LABEL_9:
            v16 = *((_WORD *)&v15[3].Next + 5);
            memset(v15, 0, 8 * (v11 ^ 1LL) + 368);
            v15[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v15[8].Next + 2) = 256;
            if ( v11 )
              *((_WORD *)&v15[3].Next + 5) = v16;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisGenerateNetBufferListCorrelationIds(v15, 1LL);
            *((_BYTE *)&v15[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
            v17 = *((_DWORD *)PoolHandle + 15);
            if ( (v17 & 2) != 0
              && ((v17 & 1) == 0 ? (v27 = 24LL) : (v27 = 35LL),
                  v28 = &v15[v27],
                  v15[1].Next = v28,
                  v28->Next = 0LL,
                  *((_WORD *)&v15[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17),
                  *((_WORD *)&v15[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17),
                  *((_WORD *)PoolHandle + 17) >= ContextSize) )
            {
              *((_WORD *)&v15[1].Next->Next + 5) -= ContextSize;
            }
            else if ( ContextSize )
            {
              if ( NdisAllocateNetBufferListContext(
                     (PNET_BUFFER_LIST)v15,
                     ContextSize,
                     ContextBackFill,
                     *((_DWORD *)PoolHandle + 14)) )
              {
                NdisFreeNetBufferList((PNET_BUFFER_LIST)v15);
                v15 = 0LL;
              }
              else
              {
                *((_DWORD *)&v15[8].Next + 2) |= 0x400u;
              }
            }
            if ( v15 )
            {
              memset(&v15[24], 0, 0xB0uLL);
              v18 = DataOffset;
              *((_DWORD *)&v15[26].Next + 2) = DataOffset;
              *((_DWORD *)&v15[25].Next + 2) = DataLength;
              v15[26].Next = (_SLIST_ENTRY *)MdlChain;
              for ( *((_QWORD *)&v15[27].Next + 1) = PoolHandle; MdlChain; v18 -= ByteCount )
              {
                ByteCount = MdlChain->ByteCount;
                if ( v18 < ByteCount )
                  break;
                MdlChain = MdlChain->Next;
              }
              *((_QWORD *)&v15[24].Next + 1) = MdlChain;
              LODWORD(v15[25].Next) = v18;
              *((_QWORD *)&v15->Next + 1) = v15 + 24;
              if ( *(int *)ndisNblTrackerMode >= 3 )
                ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v15, 0LL, 3u, 0LL, 0);
            }
            return (PNET_BUFFER_LIST)v15;
          }
        }
      }
      return 0LL;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
    return 0LL;
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    return 0LL;
  }
}
