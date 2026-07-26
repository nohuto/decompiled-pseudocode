/*
 * XREFs of ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400
 * Callers:
 *     ndisOidPreRcvFilterAllocateQueue @ 0x1C005FB10 (ndisOidPreRcvFilterAllocateQueue.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C0023DD4 (ndisReferenceOpenByHandle.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005E390 (-ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EF7C (WPP_RECORDER_SF_qdD_ea_1C005EF7C.c)
 */

char __fastcall ndisAllocateReceiveQueue(struct _NDIS_REQ_TRACKER *a1, __int16 a2)
{
  __int64 v2; // r14
  _NDIS_OPEN_BLOCK *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  char v5; // r12
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v6; // rbp
  __int64 v7; // r13
  char v9; // si
  int v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // edx
  char v13; // cl
  char v14; // al
  char v15; // r15
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  struct _NDIS_RECEIVE_QUEUE_BLOCK *PoolWithTag; // rax
  char Revision; // cl
  KIRQL v19; // r10
  unsigned int NumReceiveQueues; // ecx
  KIRQL v21; // dl
  KSPIN_LOCK *p_Lock; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax
  unsigned __int8 *AllocatedQueueIndices; // r12
  unsigned int AllocatedQueueIndicesLength; // r9d
  __int64 v26; // rcx
  unsigned __int8 *v27; // rax
  int v28; // edx
  _BYTE *v29; // r15
  __int64 v30; // r11
  int v31; // eax
  int v32; // ecx
  int v33; // r8d
  int v34; // edx
  int v35; // eax
  KIRQL v36; // r10
  _LIST_ENTRY *p_ReceiveQueueList; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *p_OpenLink; // rax
  int v40; // eax
  unsigned int Size; // [rsp+40h] [rbp-68h]
  unsigned int Size_4; // [rsp+44h] [rbp-64h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  char v45; // [rsp+B0h] [rbp+8h]
  KIRQL v46; // [rsp+C0h] [rbp+18h]
  int v47; // [rsp+C8h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 4);
  v3 = 0LL;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = 0;
  v6 = 0LL;
  v44 = 0LL;
  v47 = 0;
  v7 = *(_QWORD *)(v2 + 40);
  v9 = 1;
  v45 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      25,
      14,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v4);
  }
  v10 = 1096;
  *((_DWORD *)a1 + 10) = -1073741637;
  v11 = 1096LL;
  v12 = *(unsigned __int16 *)(v7 + 2);
  if ( (unsigned __int16)v12 < 0x448u )
    v11 = *(unsigned __int16 *)(v7 + 2);
  if ( v11 >= *(unsigned int *)(v2 + 48) )
  {
    v10 = *(_DWORD *)(v2 + 48);
  }
  else if ( (unsigned __int16)v12 < 0x448u )
  {
    v10 = *(unsigned __int16 *)(v7 + 2);
  }
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = v10;
  v13 = 2;
  if ( *(_DWORD *)(v7 + 8) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v14 = 0;
    v15 = 0;
    goto LABEL_60;
  }
  if ( (unsigned __int8)ndisReferenceMiniport((__int64)v4) )
  {
    OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v2);
    if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
    {
      v44 = (__int64)OidSourceHandle;
      v3 = OidSourceHandle;
      if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xAu) )
      {
        *((_DWORD *)a1 + 10) = -1073676286;
        v14 = 0;
LABEL_18:
        v15 = 1;
        goto LABEL_59;
      }
      v45 = 1;
    }
    if ( *(_DWORD *)(v7 + 8) == 1 && !v3 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
LABEL_23:
      v14 = v45;
      goto LABEL_18;
    }
    PoolWithTag = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *((_DWORD *)a1 + 10) = -1073741670;
      goto LABEL_23;
    }
    memset(PoolWithTag, 0, sizeof(struct _NDIS_RECEIVE_QUEUE_BLOCK));
    v6->Miniport = v4;
    v6->Open = v3;
    v6->FilterList.Blink = &v6->FilterList;
    v6->FilterList.Flink = &v6->FilterList;
    v6->SharedMemoryList.Blink = &v6->SharedMemoryList;
    v6->SharedMemoryList.Flink = &v6->SharedMemoryList;
    v6->Reference = 1;
    memmove(&v6->QueueParameters, (const void *)v7, *(unsigned int *)(v2 + 64));
    v6->QueueParameters.Header.Size = *(_WORD *)(v2 + 64);
    Revision = 2;
    if ( v6->QueueParameters.Header.Revision < 2u )
      Revision = v6->QueueParameters.Header.Revision;
    v6->QueueParameters.Header.Revision = Revision;
    v19 = KeAcquireSpinLockRaiseToDpc(&v4->Lock);
    v46 = v19;
    NumReceiveQueues = v4->NumReceiveQueues;
    v4->MiniportThread = KeGetCurrentThread();
    if ( NumReceiveQueues + 1 > 0x3BCBAD )
      goto LABEL_29;
    ReceiveFilterCurrentCapabilities = v4->ReceiveFilterCurrentCapabilities;
    if ( !ReceiveFilterCurrentCapabilities )
    {
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v19);
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_31;
    }
    if ( NumReceiveQueues == ReceiveFilterCurrentCapabilities->NumQueues )
    {
LABEL_29:
      v21 = v19;
      p_Lock = &v4->Lock;
    }
    else
    {
      AllocatedQueueIndices = v4->AllocatedQueueIndices;
      AllocatedQueueIndicesLength = v4->AllocatedQueueIndicesLength;
      Size = AllocatedQueueIndicesLength;
      if ( AllocatedQueueIndices )
      {
        v26 = 0LL;
        if ( AllocatedQueueIndicesLength )
        {
          v27 = v4->AllocatedQueueIndices;
          v28 = 0;
          while ( *v27 == 0xFF )
          {
            v28 += 8;
            v26 = (unsigned int)(v26 + 1);
            ++v27;
            v47 = v28;
            if ( (unsigned int)v26 >= AllocatedQueueIndicesLength )
              goto LABEL_40;
          }
          v30 = (unsigned int)v26;
          v31 = 1;
          v32 = AllocatedQueueIndices[v26];
          v33 = 0;
          while ( (v32 & v31) != 0 )
          {
            v31 *= 2;
            if ( (unsigned int)++v33 >= 8 )
              goto LABEL_40;
          }
          v34 = v33 + v28;
          AllocatedQueueIndices[v30] = v32 | v31;
          LOBYTE(v47) = v34;
          goto LABEL_51;
        }
      }
LABEL_40:
      Size_4 = AllocatedQueueIndicesLength + 64;
      v29 = ExAllocatePoolWithTag(NonPagedPoolNx, AllocatedQueueIndicesLength + 64, 0x7571444Eu);
      if ( v29 )
      {
        memset(&v29[Size], 0, 0x40uLL);
        if ( AllocatedQueueIndices )
        {
          memmove(v29, AllocatedQueueIndices, Size);
          v29[Size] = 1;
          ExFreePoolWithTag(AllocatedQueueIndices, 0);
          v34 = v47;
        }
        else
        {
          v34 = 1;
          *v29 = 3;
          LOBYTE(v47) = 1;
        }
        v4->AllocatedQueueIndices = v29;
        v3 = (_NDIS_OPEN_BLOCK *)v44;
        v4->AllocatedQueueIndicesLength = Size_4;
LABEL_51:
        *(_DWORD *)(v7 + 12) = v34;
        v6->QueueParameters.QueueId = v34;
        v6->QueueId = v34;
        v35 = ndisAddReceiveQueueToList(v4, v6);
        *((_DWORD *)a1 + 10) = v35;
        if ( !v35 )
        {
          if ( v3 )
          {
            p_ReceiveQueueList = &v3->ReceiveQueueList;
            Flink = v3->ReceiveQueueList.Flink;
            p_OpenLink = &v6->OpenLink;
            if ( Flink->Blink != &v3->ReceiveQueueList )
              __fastfail(3u);
            p_OpenLink->Flink = Flink;
            v6->OpenLink.Blink = p_ReceiveQueueList;
            Flink->Blink = p_OpenLink;
            p_ReceiveQueueList->Flink = p_OpenLink;
            ++v3->NumReceiveQueues;
          }
          v4->MiniportThread = 0LL;
          KeReleaseSpinLock(&v4->Lock, v36);
          v14 = 0;
          v6->QueuePnPState = NdisReceiveQueuePnPStateAddedToList;
          v15 = 0;
          v9 = 0;
          goto LABEL_58;
        }
        v4->MiniportThread = 0LL;
        KeReleaseSpinLock(&v4->Lock, v36);
LABEL_31:
        v14 = v45;
        v15 = 1;
LABEL_58:
        v5 = v47;
        goto LABEL_59;
      }
      v21 = v46;
      p_Lock = &v4->Lock;
    }
    v4->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v21);
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_31;
  }
  *((_DWORD *)a1 + 10) = -1073676286;
  v14 = 0;
  v15 = 0;
LABEL_59:
  v13 = 2;
LABEL_60:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v14 )
      ndisMDereferenceOpenUnlocked(v44, 10);
    if ( v15 )
      ndisDereferenceMiniport((__int64)v4, 0x45u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v40 = *(_DWORD *)(v2 + 64);
    *(_DWORD *)(v2 + 60) = v40;
    *(_WORD *)(v7 + 2) = v40;
    if ( *(_BYTE *)(v7 + 1) < 2u )
      v13 = *(_BYTE *)(v7 + 1);
    *(_BYTE *)(v7 + 1) = v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      25,
      15,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v4,
      *((_DWORD *)a1 + 10),
      v5);
  return v9;
}
