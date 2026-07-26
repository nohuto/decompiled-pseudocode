/*
 * XREFs of ndisSetReceiveFilter @ 0x1C0060DE8
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C0060B60 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C0023DD4 (ndisReferenceOpenByHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B5C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C005E320 (-ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EC38 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EF7C (WPP_RECORDER_SF_qdD_ea_1C005EF7C.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F2E4 (ndisFindReceiveQueueByQueueId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C00B19D0 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r14
  __int64 *ReceiveQueueByQueueId; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v5; // r15
  struct _NDIS_RECEIVE_FILTER_BLOCK *v6; // r13
  __int64 VPortByVPortId; // r12
  char v8; // si
  __int64 v9; // rcx
  const struct _GUID *v10; // rdx
  unsigned __int8 v11; // al
  int v12; // edx
  char v13; // r14
  char v14; // r15
  _BYTE *OidSourceHandle; // rax
  __int64 v16; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rcx
  unsigned int v23; // r15d
  unsigned __int64 v24; // rcx
  struct _NDIS_RECEIVE_FILTER_BLOCK *PoolWithTag; // rax
  _DWORD *v26; // r14
  KIRQL v27; // r10
  unsigned int v28; // edx
  KIRQL v29; // r10
  KIRQL v30; // dl
  KSPIN_LOCK *p_Lock; // rcx
  unsigned __int8 *AllocatedReceiveFilterIndices; // r15
  unsigned int AllocatedReceiveFilterIndicesLength; // r8d
  __int64 v34; // rax
  int v35; // r11d
  unsigned __int8 *v36; // rcx
  _BYTE *v37; // r14
  __int64 v38; // r9
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // r11d
  int v43; // eax
  KIRQL v44; // r10
  _LIST_ENTRY *v45; // rcx
  __int64 v46; // rdx
  _LIST_ENTRY *p_QueueLink; // rax
  _LIST_ENTRY *v48; // rax
  _LIST_ENTRY *v49; // rcx
  __int64 v50; // rax
  int v52; // [rsp+40h] [rbp-78h]
  unsigned int v53; // [rsp+44h] [rbp-74h]
  unsigned int Size; // [rsp+48h] [rbp-70h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+50h] [rbp-68h]
  __int64 v57; // [rsp+58h] [rbp-60h]
  _DWORD *Src; // [rsp+60h] [rbp-58h]
  char v59; // [rsp+C0h] [rbp+8h]
  char v60; // [rsp+D0h] [rbp+18h]
  KIRQL v61; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v57 = 0LL;
  v52 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  VPortByVPortId = 0LL;
  Src = (_DWORD *)v5;
  v53 = 0;
  v8 = 1;
  v59 = 0;
  v60 = 0;
  v9 = v1;
  v10 = &WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v10,
      25,
      20,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v3);
    v9 = *(_QWORD *)(a1 + 32);
  }
  v11 = *(_BYTE *)(v5 + 1);
  if ( v11 >= 2u )
    v53 = *(_DWORD *)(v5 + 40);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v9 + 64) = v11 < 2u ? 36 : 44;
  Size_4 = v11 < 2u ? 36 : 44;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !(unsigned __int8)ndisReferenceMiniport((__int64)v3) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v13 = 0;
    v14 = 0;
LABEL_20:
    v18 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v57 = (__int64)OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v13 = 0;
LABEL_19:
      v14 = 1;
      goto LABEL_20;
    }
    v59 = 1;
  }
  if ( v3->PFBlock
    && (ndisIovNicSwitchWithoutIovSupported((__int64)v3)
     || (SriovCurrentCapabilities = v3->SriovCurrentCapabilities) != 0LL
     && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3) )
  {
    if ( *(_DWORD *)(v5 + 12) )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v16, v53);
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v53 )
      goto LABEL_34;
    v19 = *(_QWORD *)(VPortByVPortId + 80) == v57;
  }
  else
  {
    v19 = v53 == 0;
  }
  if ( !v19 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_18:
    v13 = v59;
    goto LABEL_19;
  }
LABEL_34:
  v20 = *(unsigned int *)(v5 + 24);
  v21 = -1;
  v22 = *(unsigned int *)(v5 + 28);
  v23 = -1;
  v24 = v20 * v22;
  if ( v24 <= 0xFFFFFFFF )
    v23 = v24;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v24 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v23 + 184 >= 0xB8 )
    v21 = v23 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v23 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  PoolWithTag = (struct _NDIS_RECEIVE_FILTER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x6672444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, v21);
  v26 = Src;
  v6->FilterId = 0;
  v6->Open = (_NDIS_OPEN_BLOCK *)v57;
  v6->Reference = 1;
  v6->Miniport = v3;
  memmove(&v6->FilterParameters, Src, Size_4);
  v6->FilterParameters.FieldParametersArrayOffset = 184;
  memmove(&v6[1], (char *)v26 + (unsigned int)v26[5], (unsigned int)(v26[6] * v26[7]));
  v6->VPortBlock = (_NDIS_VPORT_BLOCK *)VPortByVPortId;
  v6->VPortLink.Blink = &v6->VPortLink;
  v6->VPortLink.Flink = &v6->VPortLink;
  v27 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
  v3->MiniportThread = KeGetCurrentThread();
  v28 = Src[3];
  if ( v28 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId((__int64)v3, v28);
  else
    ReceiveQueueByQueueId = (__int64 *)v3->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v60 = 1;
  }
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v27);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_48;
  if ( Src[3] )
  {
    if ( v57 )
    {
      if ( v57 != ReceiveQueueByQueueId[9] )
      {
LABEL_48:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_49:
        v13 = v59;
        v14 = 1;
        v18 = v60;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_49;
    }
  }
  v29 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
  v61 = v29;
  v3->MiniportThread = KeGetCurrentThread();
  v6->ReceiveQueue = (_NDIS_RECEIVE_QUEUE_BLOCK *)ReceiveQueueByQueueId;
  if ( v3->NumReceiveFilters + 1 > 0x5555555 )
  {
    v30 = v29;
    p_Lock = &v3->Lock;
LABEL_55:
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v30);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_49;
  }
  AllocatedReceiveFilterIndices = v3->AllocatedReceiveFilterIndices;
  AllocatedReceiveFilterIndicesLength = v3->AllocatedReceiveFilterIndicesLength;
  Size = AllocatedReceiveFilterIndicesLength;
  if ( AllocatedReceiveFilterIndices && (v34 = 0LL, AllocatedReceiveFilterIndicesLength) )
  {
    v35 = 0;
    v36 = v3->AllocatedReceiveFilterIndices;
    while ( *v36 == 0xFF )
    {
      v35 += 8;
      v34 = (unsigned int)(v34 + 1);
      ++v36;
      v52 = v35;
      if ( (unsigned int)v34 >= AllocatedReceiveFilterIndicesLength )
        goto LABEL_63;
    }
    v38 = (unsigned int)v34;
    v39 = 1;
    v40 = AllocatedReceiveFilterIndices[v34];
    v41 = 0;
    while ( (v40 & v39) != 0 )
    {
      v39 *= 2;
      if ( (unsigned int)++v41 >= 8 )
        goto LABEL_63;
    }
    v42 = v41 + v35;
    AllocatedReceiveFilterIndices[v38] = v39 | v40;
    v52 = v42;
  }
  else
  {
LABEL_63:
    v56 = AllocatedReceiveFilterIndicesLength + 64;
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, AllocatedReceiveFilterIndicesLength + 64, 0x7571444Eu);
    if ( !v37 )
    {
      v30 = v61;
      p_Lock = &v3->Lock;
      goto LABEL_55;
    }
    memset(&v37[Size], 0, 0x40uLL);
    if ( AllocatedReceiveFilterIndices )
    {
      memmove(v37, AllocatedReceiveFilterIndices, Size);
      v37[Size] = 1;
      ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
      v42 = v52;
    }
    else
    {
      *v37 = 3;
      v42 = 1;
      v52 = 1;
    }
    v3->AllocatedReceiveFilterIndices = v37;
    v26 = Src;
    v3->AllocatedReceiveFilterIndicesLength = v56;
  }
  v26[4] = v42;
  v6->FilterParameters.FilterId = v42;
  v6->FilterId = v42;
  v43 = ndisAddReceiveFilterToList(v3, v6);
  v13 = 0;
  *(_DWORD *)(a1 + 40) = v43;
  if ( v43 )
  {
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, v44);
    goto LABEL_49;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v45 = (_LIST_ENTRY *)(ReceiveQueueByQueueId + 4);
  v46 = ReceiveQueueByQueueId[4];
  p_QueueLink = &v6->QueueLink;
  if ( *(__int64 **)(v46 + 8) != ReceiveQueueByQueueId + 4 )
    goto LABEL_83;
  p_QueueLink->Flink = (_LIST_ENTRY *)v46;
  v6->QueueLink.Blink = v45;
  *(_QWORD *)(v46 + 8) = p_QueueLink;
  v45->Flink = p_QueueLink;
  if ( VPortByVPortId )
  {
    ++*(_DWORD *)(VPortByVPortId + 864);
    v48 = (_LIST_ENTRY *)(VPortByVPortId + 872);
    v49 = *(_LIST_ENTRY **)(VPortByVPortId + 872);
    if ( v49->Blink == (_LIST_ENTRY *)(VPortByVPortId + 872) )
    {
      v6->VPortLink.Flink = v49;
      v6->VPortLink.Blink = v48;
      v49->Blink = &v6->VPortLink;
      v48->Flink = &v6->VPortLink;
      v50 = *(_QWORD *)(VPortByVPortId + 88);
      if ( v53 )
        ++*(_DWORD *)(v50 + 656);
      else
        ++*(_DWORD *)(v50 + 652);
      goto LABEL_82;
    }
LABEL_83:
    __fastfail(3u);
  }
LABEL_82:
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v44);
  v18 = 0;
  v14 = 0;
  v8 = 0;
LABEL_21:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v18 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v57, 11);
    if ( v14 )
      ndisDereferenceMiniport((__int64)v3, 0x46u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      0x19u,
      0x15u,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v3,
      *(_DWORD *)(a1 + 40),
      v52);
  return v8;
}
