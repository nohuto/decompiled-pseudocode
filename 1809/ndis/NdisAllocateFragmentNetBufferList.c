/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C004D310
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0004520 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C0012710 (NdisRetreatNetBufferListDataStart.c)
 *     NdisAllocateNetBuffer @ 0x1C00216F0 (NdisAllocateNetBuffer.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004D1FC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C004DA80 (NdisFreeFragmentNetBufferList.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C004DC9C (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateFragmentNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPool,
        NDIS_HANDLE NetBufferPool,
        ULONG StartOffset,
        ULONG MaximumLength,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateFragmentFlags)
{
  unsigned __int64 v8; // rbp
  ULONG v9; // r15d
  NDIS_HANDLE v10; // rbx
  _DWORD *v11; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  PNET_BUFFER NetBuffer; // rax
  _NET_BUFFER *FirstNetBuffer; // rbx
  _NET_BUFFER *v16; // r14
  ULONG v17; // r12d
  ULONG DataLength; // ecx
  struct _MDL *MdlChain; // rsi
  ULONG i; // edx
  ULONG ByteCount; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  ULONG v24; // r15d
  ULONG v25; // r13d
  char *v26; // rax
  struct _MDL *Mdl; // rax
  void *v28; // r8
  _MDL *v29; // rax
  char v30; // r13
  void *v31; // rcx
  PNET_BUFFER v32; // rax
  PNET_BUFFER v33; // rax
  NDIS_STATUS v34; // eax
  struct _NET_BUFFER_LIST *v35; // rcx
  _QWORD *v36; // rbx
  const struct _EVENT_DESCRIPTOR *v37; // rdx
  __int128 v38; // xmm0
  __int64 v39; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-60h]
  const struct _GUID *v42; // [rsp+28h] [rbp-58h]
  _BYTE v43[4]; // [rsp+80h] [rbp+0h] BYREF

  v8 = (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v8 + 176) = 0LL;
  v9 = StartOffset;
  *(_DWORD *)(v8 + 12) = StartOffset;
  v10 = NetBufferPool;
  v11 = NetBufferListPool;
  *(_QWORD *)(v8 + 144) = OriginalNetBufferList;
  *(_BYTE *)v8 = 0;
  if ( !MaximumLength )
    return 0LL;
  if ( !NetBufferListPool )
    v11 = ndisNetBufferListPool;
  if ( !NetBufferPool )
    v10 = ndisNetBufferPool;
  *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v10;
  if ( (v11[15] & 1) != 0 )
  {
    NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v11, 0, 0, 0LL, 0, 0LL);
    if ( !NetBufferAndNetBufferList )
      return NetBufferAndNetBufferList;
  }
  else
  {
    NetBufferAndNetBufferList = NdisAllocateNetBufferList(v11, 0, 0);
    if ( !NetBufferAndNetBufferList )
      return NetBufferAndNetBufferList;
    NetBuffer = NdisAllocateNetBuffer(v10, 0LL, 0, 0LL);
    if ( !NetBuffer )
      goto LABEL_61;
    NetBufferAndNetBufferList->Link.Region = (unsigned __int64)NetBuffer;
  }
  FirstNetBuffer = OriginalNetBufferList->FirstNetBuffer;
  if ( !FirstNetBuffer )
    goto LABEL_61;
  do
  {
    if ( FirstNetBuffer->DataLength > v9 )
      break;
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
  }
  while ( FirstNetBuffer );
  if ( !FirstNetBuffer )
    goto LABEL_61;
  v16 = NetBufferAndNetBufferList->FirstNetBuffer;
  v17 = 0;
  while ( 1 )
  {
    DataLength = FirstNetBuffer->DataLength;
    if ( DataLength > v9 )
      break;
LABEL_53:
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
LABEL_54:
    if ( !FirstNetBuffer )
      goto LABEL_55;
  }
  MdlChain = FirstNetBuffer->MdlChain;
  for ( i = v9 + FirstNetBuffer->DataOffset; ; i -= ByteCount )
  {
    *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = i;
    if ( !MdlChain )
      goto LABEL_53;
    ByteCount = MdlChain->ByteCount;
    if ( i < ByteCount )
      break;
    MdlChain = MdlChain->Next;
  }
  v22 = DataLength - v9;
  v23 = ByteCount - i;
  *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v22;
  v24 = v22;
  if ( v23 <= v22 )
    v24 = v23;
  while ( !v24 )
  {
    MdlChain = MdlChain->Next;
LABEL_46:
    if ( !MdlChain )
      goto LABEL_49;
  }
  v25 = v22;
  if ( v22 >= MaximumLength - v17 )
    v25 = MaximumLength - v17;
  v26 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + i;
  *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v26;
  Mdl = IoAllocateMdl(v26, v25, 0, 0, 0LL);
  *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = Mdl;
  if ( !Mdl )
    goto LABEL_61;
  v28 = *(void **)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  if ( v25 < v24 )
  {
    IoBuildPartialMdl(MdlChain, Mdl, v28, v25);
    i = v25 + *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = i;
  }
  else
  {
    v25 = v24;
    IoBuildPartialMdl(MdlChain, Mdl, v28, v24);
    i = *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  }
  v29 = *(_MDL **)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
  v17 += v25;
  if ( v16->MdlChain )
  {
    **(_QWORD **)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v29;
  }
  else
  {
    v16->Link.Region = (unsigned __int64)v29;
    v16->MdlChain = v29;
    v16->DataOffset = 0;
    v16->CurrentMdlOffset = 0;
  }
  v24 -= v25;
  v22 = *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8) - v25;
  *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v29;
  v29->Next = 0LL;
  *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v22;
  if ( v22 )
  {
    if ( v24 )
    {
      v16->DataLength = v17;
    }
    else
    {
      MdlChain = MdlChain->Next;
      if ( !MdlChain )
        goto LABEL_48;
      v24 = MdlChain->ByteCount;
      i = 0;
      *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
      if ( v17 < MaximumLength || (v16->DataLength = v17, !v24) )
      {
        v30 = *(_BYTE *)v8;
LABEL_43:
        if ( v30 )
        {
          v31 = *(void **)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          *(_BYTE *)v8 = 0;
          v32 = NdisAllocateNetBuffer(v31, 0LL, 0, 0LL);
          if ( !v32 )
            goto LABEL_61;
          i = *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          v17 = 0;
          v22 = *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v16->Link.Alignment = (unsigned __int64)v32;
          v16 = v32;
        }
        goto LABEL_46;
      }
    }
    v30 = 1;
    *(_BYTE *)v8 = 1;
    goto LABEL_43;
  }
LABEL_48:
  v16->DataLength = v17;
LABEL_49:
  FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
  if ( !FirstNetBuffer )
  {
LABEL_55:
    v34 = NdisRetreatNetBufferListDataStart(
            NetBufferAndNetBufferList,
            DataOffsetDelta,
            DataBackFill,
            (NET_BUFFER_ALLOCATE_MDL_HANDLER)ndisAllocateMdl,
            (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdl);
    v35 = NetBufferAndNetBufferList;
    if ( v34 )
      goto LABEL_62;
    v36 = *(_QWORD **)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    NetioCopyOpaqueNetBufferListInformation(NetBufferAndNetBufferList, v36);
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v36[31] & 0x7FFFFFFFFFFFFFFFLL;
      v38 = *(_OWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      v39 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v38;
      *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v39;
      LODWORD(v39) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_OWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0x40);
      if ( (_DWORD)v39 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFLL,
          v37,
          (const struct _GUID *)(v8 + 160),
          (const struct _GUID *)(v8 + 176),
          FreeMdlHandler,
          v42,
          2u);
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferAndNetBufferList, 0LL, 7u, v36, 0);
    return NetBufferAndNetBufferList;
  }
  v9 = *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  if ( FirstNetBuffer->DataLength <= v9 )
    goto LABEL_54;
  v33 = NdisAllocateNetBuffer(*(NDIS_HANDLE *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40), 0LL, 0, 0LL);
  if ( v33 )
  {
    v16->Link.Alignment = (unsigned __int64)v33;
    v17 = 0;
    v16 = v33;
    goto LABEL_54;
  }
LABEL_61:
  v35 = NetBufferAndNetBufferList;
LABEL_62:
  NdisFreeFragmentNetBufferList(v35, 0, 0);
  return 0LL;
}
