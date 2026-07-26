/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0003CB0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeCloneNetBufferList @ 0x1C0001440 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0004520 (NdisAllocateNetBufferList.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0004CB4 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisAllocateNetBuffer @ 0x1C00216F0 (NdisAllocateNetBuffer.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004D1FC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DF78 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  NDIS_HANDLE v5; // r15
  char *v6; // rsi
  PNET_BUFFER_LIST v7; // r13
  int v8; // eax
  unsigned int Number; // ebx
  unsigned int v10; // r12d
  bool v11; // zf
  unsigned __int64 v12; // rax
  char *v13; // r15
  _SLIST_HEADER *v14; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // rdi
  __int16 v16; // bx
  int v17; // ecx
  SIZE_T DataLength; // rdx
  PNET_BUFFER FirstNetBuffer; // rsi
  _NET_BUFFER *Alignment; // rbx
  unsigned int DataOffset; // r8d
  struct _MDL *MdlChain; // r12
  ULONG ByteCount; // eax
  unsigned int v24; // eax
  ULONG v25; // r13d
  _MDL *v26; // r15
  char *v27; // rcx
  struct _MDL *Mdl; // rax
  __int64 v30; // rax
  _NET_BUFFER_LIST_CONTEXT *v31; // rax
  struct _MDL *Next; // rsi
  char *v33; // r12
  ULONG v34; // r13d
  struct _MDL *v35; // rax
  struct _MDL *v36; // rax
  int v37; // edx
  unsigned __int64 v38; // rax
  _QWORD *PoolWithTagPriority; // rax
  KIRQL v40; // al
  char **v41; // r8
  void ***v42; // rdx
  void **v43; // rcx
  KIRQL v44; // al
  __int64 v45; // r8
  PNET_BUFFER NetBuffer; // rax
  __int128 v47; // xmm0
  __int64 v48; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v50; // [rsp+28h] [rbp-58h]
  _BYTE v51[4]; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 8) = AllocateCloneFlags;
  v5 = NetBufferPoolHandle;
  *(_QWORD *)(v4 + 64) = NetBufferPoolHandle;
  v6 = (char *)NetBufferListPoolHandle;
  *(_QWORD *)(v4 + 128) = OriginalNetBufferList;
  v7 = OriginalNetBufferList;
  *(_BYTE *)v4 = (AllocateCloneFlags & 2) != 0;
  if ( !NetBufferListPoolHandle )
    v6 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPoolHandle )
  {
    v5 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v8 = *((_DWORD *)v6 + 15);
  if ( (v8 & 1) == 0 )
  {
    NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
    if ( !NetBufferList )
      return NetBufferList;
    NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
    FirstNetBuffer = NetBuffer;
    if ( !NetBuffer )
      goto LABEL_77;
    NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
    goto LABEL_23;
  }
  if ( (v8 & 5) != 1 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
    return 0LL;
  }
  Number = KeGetPcr()->Prcb.Number;
  v10 = 1;
  v11 = ndisMaxNumberOfProcessors == 1;
  *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Number;
  if ( !v11 )
  {
    v12 = (unsigned __int64)Number << 8;
    v13 = &v6[v12 + 384];
    if ( !v13[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v6[v12 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v6 + 128));
    v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
    ++*((_DWORD *)v13 + 5);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v14);
    if ( !NetBufferList )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) < 0xAu
        || (v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26),
            v45 = *((_QWORD *)v13 + 24),
            *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25),
            *((_QWORD *)v13 + 25) = v45,
            KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v44),
            (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v13 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v13 + 6);
      }
    }
    if ( NetBufferList )
      goto LABEL_14;
    Number = *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  }
  ++*((_DWORD *)v6 + 37);
  NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
  if ( NetBufferList )
    goto LABEL_48;
  v38 = *((unsigned int *)v6 + 43);
  ++*((_DWORD *)v6 + 38);
  DataLength = v38 + 32;
  if ( v38 + 32 >= v38 )
  {
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            DataLength,
                            *((_DWORD *)v6 + 42),
                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      NetBufferList = (struct _NET_BUFFER_LIST *)(PoolWithTagPriority + 4);
      *PoolWithTagPriority = 0LL;
      if ( PoolWithTagPriority != (_QWORD *)-32LL )
      {
        *PoolWithTagPriority = v6;
        v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
        v41 = (char **)*((_QWORD *)v6 + 2);
        v42 = (void ***)(v6 + 16);
        v43 = &NetBufferList[-1].NetBufferListInfo[27];
        if ( v41[1] != v6 + 16 )
          __fastfail(3u);
        v43[1] = v42;
        *v43 = v41;
        v41[1] = (char *)v43;
        *v42 = v43;
        KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v40);
      }
    }
    else
    {
      NetBufferList = 0LL;
    }
    v10 = 0;
    if ( NetBufferList )
    {
LABEL_48:
      LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
LABEL_14:
      v16 = WORD1(NetBufferList->NdisReserved[1]);
      memset(NetBufferList, 0, 8 * (v10 ^ 1LL) + 368);
      NetBufferList->NdisPoolHandle = v6;
      NetBufferList->Flags = 256;
      if ( v10 )
        WORD1(NetBufferList->NdisReserved[1]) = v16;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1LL);
      LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[32];
      v17 = *((_DWORD *)v6 + 15);
      if ( (v17 & 2) != 0 )
      {
        v30 = 384LL;
        if ( (v17 & 1) != 0 )
          v30 = 560LL;
        v31 = (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v30);
        NetBufferList->Context = v31;
        v31->Next = 0LL;
        NetBufferList->Context->Size = *((_WORD *)v6 + 17);
        NetBufferList->Context->Offset = *((_WORD *)v6 + 17);
      }
      memset(&NetBufferList[1], 0, 0xB0uLL);
      NetBufferList[1].NdisPoolHandle = 0LL;
      *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
      LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
      NetBufferList[1].NdisReserved[1] = v6;
      NetBufferList[1].Link.Region = 0LL;
      LODWORD(NetBufferList[1].Context) = 0;
      NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(NetBufferList, 0LL, 3u, 0LL, 0);
      goto LABEL_21;
    }
  }
  NetBufferList = 0LL;
LABEL_21:
  if ( !NetBufferList )
    return NetBufferList;
  FirstNetBuffer = NetBufferList->FirstNetBuffer;
  v5 = *(NDIS_HANDLE *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_23:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_35:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    if ( ((unsigned __int64)v7->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
      && ((__int64)v7->NetBufferListInfo[10] & 1) == 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      v47 = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      v48 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v47;
      *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v48;
      LODWORD(v48) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xA0);
      if ( (_DWORD)v48 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)DataLength,
          (const struct _GUID *)(v4 + 176),
          (const struct _GUID *)(v4 + 192),
          Irp,
          v50,
          1u);
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  while ( 1 )
  {
    DataLength = Alignment->DataLength;
    DataOffset = Alignment->DataOffset;
    MdlChain = Alignment->MdlChain;
    *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = FirstNetBuffer;
    if ( *(_BYTE *)v4 )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = Alignment->Link.Region;
      FirstNetBuffer->DataLength = Alignment->DataLength;
      FirstNetBuffer->DataOffset = DataOffset;
      FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
      Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_34;
      FirstNetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
      if ( !FirstNetBuffer )
        goto LABEL_77;
      goto LABEL_83;
    }
    if ( MdlChain )
      break;
LABEL_81:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_34:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_35;
    }
    FirstNetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_77;
LABEL_83:
    **(_QWORD **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = FirstNetBuffer;
  }
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset -= ByteCount;
    if ( !MdlChain )
      goto LABEL_81;
  }
  v24 = ByteCount - DataOffset;
  v25 = DataLength;
  v26 = 0LL;
  if ( v24 < (unsigned int)DataLength )
    v25 = v24;
  if ( v25 )
  {
    v27 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + DataOffset;
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v27;
    Mdl = IoAllocateMdl(v27, v25, 0, 0, 0LL);
    v26 = Mdl;
    if ( !Mdl )
      goto LABEL_77;
    IoBuildPartialMdl(MdlChain, Mdl, *(PVOID *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0), v25);
    LODWORD(DataLength) = *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v26->Next = 0LL;
  }
  FirstNetBuffer->Link.Region = (unsigned __int64)v26;
  DataLength = (unsigned int)DataLength - v25;
  FirstNetBuffer->MdlChain = v26;
  FirstNetBuffer->DataLength = Alignment->DataLength;
  FirstNetBuffer->CurrentMdlOffset = 0;
  FirstNetBuffer->DataOffset = 0;
  *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
  if ( !(_DWORD)DataLength || (Next = MdlChain->Next) == 0LL )
  {
LABEL_33:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_34;
    v5 = *(NDIS_HANDLE *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    FirstNetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_77;
    goto LABEL_83;
  }
  while ( 1 )
  {
    v33 = (char *)Next->StartVa + Next->ByteOffset;
    v34 = Next->ByteCount;
    if ( v34 > (unsigned int)DataLength )
      v34 = DataLength;
    v35 = IoAllocateMdl(v33, v34, 0, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v35;
    if ( !v35 )
      break;
    IoBuildPartialMdl(Next, v35, v33, v34);
    v36 = *(struct _MDL **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
    v37 = *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v26->Next = v36;
    DataLength = v37 - v34;
    v26 = v36;
    *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
    v36->Next = 0LL;
    if ( (_DWORD)DataLength )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_33;
  }
LABEL_77:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  return 0LL;
}
