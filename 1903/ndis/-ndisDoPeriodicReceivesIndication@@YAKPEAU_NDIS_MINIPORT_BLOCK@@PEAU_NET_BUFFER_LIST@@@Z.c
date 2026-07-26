/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC480
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AE15C (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00AEEC0 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010F00 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038710 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CB7C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00ACE08 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00ADF1C (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C00AE2A4 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v2; // r13d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rsi
  unsigned int v6; // r15d
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r12d
  KSPIN_LOCK *p_Lock; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Number; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  char *PoolWithTag; // r14
  _X_FILTER *EthDB; // r13
  struct _NET_BUFFER_LIST *v16; // rcx
  struct _NET_BUFFER_LIST *v17; // rdx
  struct _NDIS_OPEN_BLOCK *SingleActiveOpen; // rbx
  int v19; // r8d
  int v20; // edx
  struct _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rbx
  unsigned int v22; // edi
  unsigned int v23; // r12d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v25; // rsi
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  unsigned int v28; // r15d
  unsigned int v29; // r12d
  unsigned int v30; // esi
  unsigned int i; // ebx
  __int64 v32; // rax
  struct _NET_BUFFER_LIST *v33; // rcx
  unsigned __int64 v34; // rax
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // r15
  void *ReturnNetBufferListsContext; // rcx
  void (*ReturnNetBufferListsHandler)(void); // r13
  struct _NET_BUFFER_LIST **v38; // r12
  bool v39; // zf
  _NDIS_OBJECT_HEADER *v40; // rdx
  __int64 v41; // rsi
  char v42; // al
  struct _NET_BUFFER_LIST *v43; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v46; // eax
  struct _NET_BUFFER_LIST *v47; // rbx
  int v49; // [rsp+40h] [rbp-79h]
  unsigned int v50; // [rsp+44h] [rbp-75h]
  unsigned int v51; // [rsp+48h] [rbp-71h]
  void *v52; // [rsp+50h] [rbp-69h]
  unsigned int v53; // [rsp+58h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v54; // [rsp+60h] [rbp-59h] BYREF
  _QWORD Parameter[5]; // [rsp+80h] [rbp-39h] BYREF
  int v56; // [rsp+A8h] [rbp-11h]
  int v57; // [rsp+ACh] [rbp-Dh]
  int v58; // [rsp+B0h] [rbp-9h]
  int v59; // [rsp+B4h] [rbp-5h]
  _QWORD v60[11]; // [rsp+B8h] [rbp-1h] BYREF
  struct _NET_BUFFER_LIST *v62; // [rsp+128h] [rbp+6Fh]
  unsigned int v63; // [rsp+130h] [rbp+77h]
  char v64; // [rsp+130h] [rbp+77h]
  char v65; // [rsp+138h] [rbp+7Fh]

  v2 = 0;
  v50 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v62 = Alignment;
    v49 = 1;
    if ( Alignment )
    {
      do
      {
        if ( v6 != LODWORD(Alignment->ProtocolReserved[0]) )
          break;
        v7 = Alignment;
        ++v8;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v49 = v8;
      v62 = Alignment;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&v4->Lock);
        p_Lock = &v4->Lock;
        v4->MiniportThread = KeGetCurrentThread();
        if ( !v4->LockAcquired )
          break;
        v4->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        v63 = 0;
        do
          ++v63;
        while ( v63 < 0x32 );
      }
      v4->LockAcquired = 1;
      CurrentThread = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      v4->LockThread = CurrentThread;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
    }
    if ( !v4->InitMode )
    {
      v51 = 0;
      v64 = 0;
      if ( ndisPerProcRcvTrackers )
      {
        Number = KeGetPcr()->Prcb.Number;
        v12 = 2096LL * Number;
        v51 = Number;
        v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12);
        if ( (unsigned int)v13 < 3 )
        {
          v64 = 1;
          PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v13 + v12 + 8;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
LABEL_19:
          EthDB = v4->EthDB;
          v16 = v5;
          PoolWithTag[692] = 0;
          do
          {
            v17 = v16;
            v16->Flags = v16->Flags & 0xFFFFFFF0 | 4;
            v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
          }
          while ( v16 );
          SingleActiveOpen = EthDB->SingleActiveOpen;
          if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, (char *)v6, v8, 1u);
            *((_QWORD *)PoolWithTag + 8) = 0LL;
            *((_DWORD *)PoolWithTag + 20) = 0;
          }
          else
          {
            *((_QWORD *)PoolWithTag + 3) = v5;
            *((_QWORD *)PoolWithTag + 1) = EthDB;
            *((_DWORD *)PoolWithTag + 4) = 1;
            *(_QWORD *)PoolWithTag = v4;
            *((_QWORD *)PoolWithTag + 4) = v17;
            *((_DWORD *)PoolWithTag + 10) = v6;
            *((_DWORD *)PoolWithTag + 11) = v8;
            ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
            if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
            {
              if ( !EthDB->OpenList || v6 )
                PoolWithTag[692] = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
              if ( !SingleActiveOpen )
              {
                NoFTypeOpenList = EthDB->NoFTypeOpenList;
                if ( NoFTypeOpenList )
                {
                  v22 = *((_DWORD *)PoolWithTag + 172);
                  v23 = *((_DWORD *)PoolWithTag + 4) | 2;
                  do
                  {
                    FilterNextOpen = NoFTypeOpenList->FilterNextOpen;
                    v25 = 0LL;
                    do
                    {
                      v26 = (unsigned int)v25;
                      v27 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v25 + 64];
                      v25 = (unsigned int)(v25 + 1);
                      if ( v27 )
                        ndisMIndicateNetBufferListsToOpen(
                          NoFTypeOpenList,
                          v27,
                          (char *)*((unsigned int *)PoolWithTag + 10),
                          *(_DWORD *)&PoolWithTag[40 * v26 + 80],
                          v23);
                    }
                    while ( (unsigned int)v25 <= v22 );
                    NoFTypeOpenList = FilterNextOpen;
                  }
                  while ( FilterNextOpen );
                  v4 = a1;
                }
                if ( EthDB->FTypeOpenList )
                {
                  v28 = *((_DWORD *)PoolWithTag + 4);
                  v29 = *((_DWORD *)PoolWithTag + 10);
                  v30 = *((_DWORD *)PoolWithTag + 172);
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
                    ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
                  for ( i = 1; i <= v30; ++i )
                  {
                    v32 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v32 + 56],
                      *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v32 + 64],
                      (char *)v29,
                      *(_DWORD *)&PoolWithTag[40 * v32 + 80],
                      v28);
                  }
                }
              }
            }
          }
          if ( PoolWithTag[692] )
          {
            v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
            goto LABEL_49;
          }
          goto LABEL_90;
        }
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      if ( PoolWithTag )
        goto LABEL_19;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          4,
          10,
          (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids);
      }
LABEL_49:
      if ( !v5 )
        goto LABEL_90;
      if ( byte_1C00E5E20 && (*((_DWORD *)&v4->PktMonComp + 3) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v4 + 5800, (_DWORD)v5, v19, 1, -1073676270, -536866809);
      v54.PcwBlock = 0LL;
      v54.DatapathEventsMask = 0;
      v54.DatapathCyclesMask = 0;
      v54.CurrentCpu = -1;
      if ( v4->PcwDatapathEventMask || v4->PcwDatapathCycleMask )
      {
        v54.DatapathEventsMask = v4->PcwDatapathEventMask;
        v54.DatapathCyclesMask = v4->PcwDatapathCycleMask;
        v54.PcwBlock = v4->PcwDataBlock;
        if ( !v54.PcwBlock )
          v54.PcwBlock = v4->PcwDataBlock;
      }
      v33 = v5;
      do
      {
        v33->Flags = v33->Flags & 0xFFFFFFF4 | 8;
        v33 = (struct _NET_BUFFER_LIST *)v33->Link.Alignment;
      }
      while ( v33 );
      v34 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
      if ( Microsoft_Windows_Networking_CorrelationEnabled
        || byte_1C00E5E20 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
      {
        v34 = ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
      }
      if ( v4->PeriodicReceiveQueue.NblsAllocated )
      {
        v34 = (unsigned __int64)ndisReturnPeriodicReceives(v4, v5);
        v5 = (struct _NET_BUFFER_LIST *)v34;
      }
      if ( !v5 )
      {
LABEL_90:
        if ( v64 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v51);
        }
        else if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        Alignment = v62;
        v8 = v49;
        v2 = v50;
        goto LABEL_95;
      }
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v5,
          0LL,
          (unsigned __int64)v4->Next.ReturnNetBufferListsTracker,
          0x87u,
          1u);
      if ( (v54.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwStartCycleCounter(&v54, 5u);
      ReturnNetBufferListsObject = v4->Next.ReturnNetBufferListsObject;
      ReturnNetBufferListsContext = v4->Next.ReturnNetBufferListsContext;
      ReturnNetBufferListsHandler = (void (*)(void))v4->Next.ReturnNetBufferListsHandler;
      v52 = ReturnNetBufferListsContext;
      if ( ReturnNetBufferListsObject->Type == 17 )
        goto LABEL_87;
      if ( !ndisIterativeDataPathDisabled )
      {
        LODWORD(v34) = KeGetPcr()->Prcb.Number;
        v38 = (struct _NET_BUFFER_LIST **)v60;
        v60[2] = 0LL;
        v5->Scratch = 0LL;
        v5->ChildRefCount = 1;
        v39 = ReturnNetBufferListsObject->Type == 5;
        v53 = v34;
        v60[0] = v5;
        v60[1] = v5;
        if ( v39 )
        {
          while ( *v38 )
          {
            v40 = ReturnNetBufferListsObject;
            v41 = *(_QWORD *)&ReturnNetBufferListsObject[106].Type + 96 * v34;
            v42 = *(_BYTE *)(v41 + 88);
            *(_BYTE *)(v41 + 88) = 1;
            v43 = *v38;
            *v38 = 0LL;
            v65 = v42;
            if ( v43 )
            {
              do
              {
                ChildRefCount = v43->ChildRefCount;
                Scratch = (struct _NET_BUFFER_LIST *)v43->Scratch;
                v43->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  ReturnNetBufferListsObject,
                  ReturnNetBufferListsHandler,
                  v52,
                  v43,
                  0,
                  0,
                  ChildRefCount);
                v43 = Scratch;
              }
              while ( Scratch );
              v4 = a1;
              v40 = ReturnNetBufferListsObject;
              v42 = v65;
            }
            *(_BYTE *)(v41 + 88) = 0;
            if ( v42 )
            {
              ReturnNetBufferListsContext = v52;
              *(_BYTE *)(v41 + 88) = 1;
              v5 = *v38;
              goto LABEL_80;
            }
            ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[138].Type;
            v38 = (struct _NET_BUFFER_LIST **)(v41 + 72);
            ReturnNetBufferListsContext = *(void **)&v40[134].Type;
            ReturnNetBufferListsHandler = *(void (**)(void))&v40[132].Type;
            v34 = v53;
            v52 = ReturnNetBufferListsContext;
            if ( ReturnNetBufferListsObject->Type != 5 )
            {
              v5 = *(struct _NET_BUFFER_LIST **)(v41 + 72);
              goto LABEL_80;
            }
          }
        }
        else
        {
LABEL_80:
          if ( v5 )
          {
            *v38 = 0LL;
            do
            {
              v46 = v5->ChildRefCount;
              v47 = (struct _NET_BUFFER_LIST *)v5->Scratch;
              v5->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(
                ReturnNetBufferListsObject,
                ReturnNetBufferListsHandler,
                ReturnNetBufferListsContext,
                v5,
                0,
                0,
                v46);
              ReturnNetBufferListsContext = v52;
              v5 = v47;
            }
            while ( v47 );
          }
        }
        goto LABEL_88;
      }
      if ( v4->Header.Type != 5 )
      {
LABEL_87:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
          ReturnNetBufferListsContext,
          v5,
          1LL);
      }
      else
      {
        Parameter[0] = 0LL;
        v58 = 0;
        v56 = 0;
        Parameter[2] = ReturnNetBufferListsContext;
        Parameter[1] = ReturnNetBufferListsObject;
        v57 = 3;
        Parameter[3] = ReturnNetBufferListsHandler;
        Parameter[4] = v5;
        v59 = 1;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v5, 0);
      }
LABEL_88:
      if ( (v54.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwEndCycleCounter(&v54, 5u, 0x12uLL);
      goto LABEL_90;
    }
    ndisMDispatchReceiveNetBufferListsWithLock((struct _NDIS_FILTER_BLOCK *)v4, v5, v6, v8, 1u);
LABEL_95:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->LockAcquired = 0;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += v8;
    v2 += v8;
    v50 = v2;
  }
  while ( Alignment );
  return v2;
}
