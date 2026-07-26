/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C0004520
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0003CB0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C004D310 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0004CB4 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferListContext @ 0x1C00119E0 (NdisAllocateNetBufferListContext.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DF78 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  unsigned int Number; // r13d
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  char *v9; // r15
  _SLIST_HEADER *v10; // rcx
  PSLIST_ENTRY v11; // rbx
  __int16 v12; // r15
  int v13; // eax
  __int64 v14; // rax
  _SLIST_ENTRY *v15; // rax
  int v16; // eax
  unsigned __int16 v17; // ax
  struct _MDL *v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  KIRQL v22; // al
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v26; // al
  __int64 v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int16 v32; // dx
  int v33; // edx
  __int64 v34; // rax

  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v8 = (unsigned __int64)Number << 8;
    v9 = (char *)PoolHandle + v8 + 384;
    if ( !v9[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v8 + 384),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
    v10 = (_SLIST_HEADER *)*((_QWORD *)v9 + 24);
    ++*((_DWORD *)v9 + 5);
    v11 = ExpInterlockedPopEntrySList(v10);
    if ( !v11 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v9 + 25)) < 0xAu
        || (v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9 + 26),
            v23 = *((_QWORD *)v9 + 24),
            *((_QWORD *)v9 + 24) = *((_QWORD *)v9 + 25),
            *((_QWORD *)v9 + 25) = v23,
            KeReleaseSpinLock((PKSPIN_LOCK)v9 + 26, v22),
            (v11 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v9 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v9 + 6);
      }
    }
    if ( v11 )
      goto LABEL_8;
  }
  ++*((_DWORD *)PoolHandle + 37);
  v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( !v11 )
  {
    v24 = *((unsigned int *)PoolHandle + 43);
    ++*((_DWORD *)PoolHandle + 38);
    if ( v24 + 32 < v24 )
      return 0LL;
    PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v24 + 32,
                                            *((_DWORD *)PoolHandle + 42),
                                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      v11 = PoolWithTagPriority + 2;
      PoolWithTagPriority->Next = 0LL;
      if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
      {
        PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v27 = *((_QWORD *)PoolHandle + 2);
        v28 = (char *)PoolHandle + 16;
        v29 = &v11[-2].Next + 1;
        if ( *(NDIS_HANDLE *)(v27 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        v29[1] = v28;
        *v29 = v27;
        *(_QWORD *)(v27 + 8) = v29;
        *v28 = v29;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v26);
      }
    }
    else
    {
      v11 = 0LL;
    }
    v7 = 0;
    if ( !v11 )
      return 0LL;
  }
  *((_DWORD *)&v11[-1].Next + 2) = Number;
LABEL_8:
  v12 = *((_WORD *)&v11[3].Next + 5);
  memset(v11, 0, 8 * (v7 ^ 1LL) + 368);
  v11[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v11[8].Next + 2) = 256;
  if ( v7 )
    *((_WORD *)&v11[3].Next + 5) = v12;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v11, 1LL);
  *((_BYTE *)&v11[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
  v13 = *((_DWORD *)PoolHandle + 15);
  if ( (v13 & 2) != 0
    && ((v13 & 1) == 0 ? (v14 = 24LL) : (v14 = 35LL),
        v15 = &v11[v14],
        v11[1].Next = v15,
        v15->Next = 0LL,
        *((_WORD *)&v11[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17),
        *((_WORD *)&v11[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17),
        *((_WORD *)PoolHandle + 17) >= ContextSize) )
  {
    *((_WORD *)&v11[1].Next->Next + 5) -= ContextSize;
  }
  else if ( ContextSize )
  {
    if ( NdisAllocateNetBufferListContext(
           (PNET_BUFFER_LIST)v11,
           ContextSize,
           ContextBackFill,
           *((_DWORD *)PoolHandle + 14)) )
    {
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v11);
      v11 = 0LL;
    }
    else
    {
      *((_DWORD *)&v11[8].Next + 2) |= 0x400u;
    }
  }
  if ( v11 )
  {
    v16 = *((_DWORD *)PoolHandle + 15);
    if ( (v16 & 1) != 0 )
    {
      *((_QWORD *)&v11->Next + 1) = v11 + 24;
      v16 = *((_DWORD *)PoolHandle + 15);
    }
    if ( (v16 & 4) != 0 )
    {
      v17 = *((_WORD *)PoolHandle + 17);
      if ( v17 )
        v18 = (struct _MDL *)((char *)&v11[36] + v17);
      else
        v18 = (struct _MDL *)&v11[35];
      if ( v7 )
      {
        v18->ByteCount = *((_DWORD *)PoolHandle + 22);
        v18->Next = 0LL;
      }
      else
      {
        v30 = *((unsigned int *)PoolHandle + 22);
        v31 = (unsigned __int64)v18 + *((unsigned int *)PoolHandle + 23);
        v32 = (_WORD)v18 + *((_DWORD *)PoolHandle + 23);
        v18->Next = 0LL;
        v18->MdlFlags = 0;
        v18->ByteCount = v30;
        v18->StartVa = (PVOID)(v31 & 0xFFFFFFFFFFFFF000uLL);
        v33 = v32 & 0xFFF;
        v18->ByteOffset = v33;
        v18->Size = 8 * ((((unsigned __int64)(unsigned __int16)v33 + v30 + 4095) >> 12) + 6);
        MmBuildMdlForNonPagedPool(v18);
      }
      v19 = *((_QWORD *)&v11->Next + 1);
      if ( v19 )
      {
        v20 = *((_DWORD *)PoolHandle + 22);
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 56) = PoolHandle;
        *(_QWORD *)(v19 + 8) = v18;
        *(_DWORD *)(v19 + 16) = v20;
        *(_QWORD *)(v19 + 32) = v18;
        *(_DWORD *)(v19 + 40) = v20;
        *(_DWORD *)(v19 + 24) = 0;
        *(_DWORD *)(v19 + 48) = 0;
        *(_QWORD *)(v19 + 72) = 0LL;
        *(_QWORD *)(v19 + 64) = 0LL;
        *(_QWORD *)(v19 + 136) = 0LL;
        *(_QWORD *)(v19 + 128) = 0LL;
        *(_QWORD *)(v19 + 168) = 0LL;
      }
    }
    else
    {
      v34 = *((_QWORD *)&v11->Next + 1);
      if ( v34 )
      {
        *(_QWORD *)v34 = 0LL;
        *(_QWORD *)(v34 + 56) = PoolHandle;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_DWORD *)(v34 + 16) = 0;
        *(_QWORD *)(v34 + 32) = 0LL;
        *(_DWORD *)(v34 + 40) = 0;
        *(_DWORD *)(v34 + 24) = 0;
        *(_DWORD *)(v34 + 48) = 0;
        *(_QWORD *)(v34 + 72) = 0LL;
        *(_QWORD *)(v34 + 64) = 0LL;
        *(_QWORD *)(v34 + 136) = 0LL;
        *(_QWORD *)(v34 + 128) = 0LL;
        *(_QWORD *)(v34 + 168) = 0LL;
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v11, 0LL, 2u, 0LL, 0);
  }
  return (PNET_BUFFER_LIST)v11;
}
