/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC650 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010F00 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AE58 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CD4C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00ACF40 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00ACFD8 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AE0EC (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C00AE474 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C98AC (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int NewIrql)
{
  char v5; // r15
  unsigned __int64 RcvLinkSpeedIndicateUp; // rax
  unsigned int v7; // r14d
  struct _NDIS_FILTER_BLOCK *v8; // rbx
  KSPIN_LOCK *v10; // rcx
  _QWORD *v12; // rsi
  KSPIN_LOCK *v13; // r14
  unsigned __int64 CurrentThread; // rax
  struct _NET_BUFFER_LIST *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r9
  char *v18; // rsi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v20; // r15
  struct _NDIS_OPEN_BLOCK *v21; // r14
  struct _NDIS_OPEN_BLOCK *v22; // rdx
  __int64 v23; // r8
  struct _NET_BUFFER_LIST *v24; // r10
  struct _NDIS_OPEN_BLOCK *v25; // rdi
  unsigned int v26; // ebx
  unsigned int v27; // r13d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r12
  unsigned int v29; // r14d
  __int64 v30; // rcx
  struct _NET_BUFFER_LIST *v31; // rdx
  unsigned int v32; // r15d
  unsigned int v33; // r12d
  unsigned int v34; // r14d
  unsigned int v35; // edi
  __int64 v36; // rax
  unsigned int v37; // ebx
  KSPIN_LOCK *v38; // r8
  unsigned int v39; // eax
  unsigned int FilterFriendlyName; // eax
  struct _NET_BUFFER_LIST *v41; // rcx
  unsigned __int64 CurrentIrql; // rax
  _QWORD *EdgeHandle; // r14
  void (*SpinLock)(void); // r12
  _PKTMON_COMPONENT_CONTEXT *CompContext; // r13
  unsigned int v46; // ecx
  struct _NET_BUFFER_LIST **v47; // r15
  bool v48; // zf
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  char v51; // al
  struct _NET_BUFFER_LIST *v52; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v54; // rbx
  char *PoolWithTag; // rax
  KSPIN_LOCK *v56; // rcx
  signed __int32 v57[6]; // [rsp+8h] [rbp-B1h] BYREF
  PVOID Context; // [rsp+28h] [rbp-91h]
  unsigned int v59; // [rsp+30h] [rbp-89h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-81h]
  struct _LOCK_STATE_EX LockState; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v62; // [rsp+4Ch] [rbp-6Dh]
  char v63; // [rsp+50h] [rbp-69h]
  unsigned int v64; // [rsp+54h] [rbp-65h]
  unsigned int v65; // [rsp+58h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v66; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v67; // [rsp+80h] [rbp-39h]
  _QWORD Parameter[5]; // [rsp+88h] [rbp-31h] BYREF
  int v69; // [rsp+B0h] [rbp-9h]
  __int64 v70; // [rsp+B4h] [rbp-5h]
  unsigned int v71; // [rsp+BCh] [rbp+3h]
  _QWORD v72[9]; // [rsp+C0h] [rbp+7h] BYREF
  char v74; // [rsp+118h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+138h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v7 = NewIrql & 1;
  *(_WORD *)&LockState.OldIrql = 515;
  v8 = a1;
  v67 = RcvLinkSpeedIndicateUp;
  v62 = v7;
  v10 = *(KSPIN_LOCK **)(RcvLinkSpeedIndicateUp + 288);
  if ( (NewIrql & 1) != 0 )
  {
    v12 = (_QWORD *)(v10[4] + (KeGetPcr()->Prcb.Number << 12));
    LockState.OldIrql = 2;
    ++*v12;
    _InterlockedOr(v57, 0);
    v13 = v10 + 2;
    CurrentThread = v10[2];
    if ( CurrentThread )
    {
      if ( *v12 <= 1uLL )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        if ( v10[3] != CurrentThread )
        {
          *v12 = 0LL;
          KeAcquireSpinLockAtDpcLevel(v10 + 2);
          *v12 = 1LL;
          KeReleaseSpinLockFromDpcLevel(v13);
        }
      }
    }
    v7 = v62;
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)v10, &LockState, 0);
  }
  v65 = 0;
  v15 = 0LL;
  v63 = 0;
  if ( (v7 || (CurrentThread = KeGetCurrentIrql(), (_BYTE)CurrentThread == 2))
    && ndisPerProcRcvTrackers
    && (LODWORD(CurrentThread) = KeGetPcr()->Prcb.Number,
        v16 = 2096 * CurrentThread,
        v65 = CurrentThread,
        v17 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentThread),
        (unsigned int)v17 < 3) )
  {
    v63 = 1;
    v18 = (char *)ndisPerProcRcvTrackers + 696 * v17 + v16 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    v24 = 0LL;
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v22,
          4,
          10,
          (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids);
        v24 = 0LL;
      }
      goto LABEL_33;
    }
  }
  Alignment = a2;
  v20 = (_QWORD *)v8->RcvLinkSpeedIndicateUp;
  v18[692] = 0;
  v64 = NewIrql & 2;
  if ( (NewIrql & 2) == 0 )
  {
    do
    {
      v15 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v21 = (struct _NDIS_OPEN_BLOCK *)v20[41];
  if ( v21 && v21->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v21, a2, (char *)a3, a4, NewIrql);
    v24 = 0LL;
    *((_QWORD *)v18 + 8) = 0LL;
    *((_DWORD *)v18 + 20) = 0;
  }
  else
  {
    *((_DWORD *)v18 + 11) = a4;
    *((_QWORD *)v18 + 3) = a2;
    *((_QWORD *)v18 + 1) = v20;
    *((_DWORD *)v18 + 4) = NewIrql;
    *(_QWORD *)v18 = v8;
    *((_QWORD *)v18 + 4) = v15;
    *((_DWORD *)v18 + 10) = a3;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v18);
    v24 = 0LL;
    if ( !*((_QWORD *)v18 + 8) && !*((_DWORD *)v18 + 172) )
      goto LABEL_31;
    if ( !*v20 || a3 )
    {
      v18[692] = 1;
    }
    else
    {
      ndisIndicateXlatedPacketsToNdis5Protocols(v18);
      v24 = 0LL;
    }
    if ( v21 )
      goto LABEL_31;
    v25 = (struct _NDIS_OPEN_BLOCK *)v20[1];
    if ( v25 )
    {
      v26 = *((_DWORD *)v18 + 172);
      v27 = *((_DWORD *)v18 + 4) | 2;
      do
      {
        FilterNextOpen = v25->FilterNextOpen;
        v29 = 0;
        do
        {
          v30 = v29++;
          v31 = *(struct _NET_BUFFER_LIST **)&v18[40 * v30 + 64];
          if ( v31 )
          {
            ndisMIndicateNetBufferListsToOpen(
              v25,
              v31,
              (char *)*((unsigned int *)v18 + 10),
              *(_DWORD *)&v18[40 * v30 + 80],
              v27);
            v24 = 0LL;
          }
        }
        while ( v29 <= v26 );
        v25 = FilterNextOpen;
      }
      while ( FilterNextOpen );
      v8 = a1;
    }
    v22 = (struct _NDIS_OPEN_BLOCK *)v20[2];
    if ( !v22 )
      goto LABEL_31;
    if ( v64 )
    {
      ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v18, v22);
    }
    else
    {
      v32 = *((_DWORD *)v18 + 4);
      v33 = *((_DWORD *)v18 + 10);
      v34 = *((_DWORD *)v18 + 172);
      if ( *(_DWORD *)(*(_QWORD *)v18 + 2244LL) )
      {
        ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v18);
        v24 = 0LL;
      }
      v35 = 1;
      if ( !v34 )
        goto LABEL_31;
      do
      {
        v36 = v35++;
        ndisMIndicateNetBufferListsToOpen(
          *(struct _NDIS_OPEN_BLOCK **)&v18[40 * v36 + 56],
          *(struct _NET_BUFFER_LIST **)&v18[40 * v36 + 64],
          (char *)v33,
          *(_DWORD *)&v18[40 * v36 + 80],
          v32);
      }
      while ( v35 <= v34 );
    }
    v24 = 0LL;
  }
LABEL_31:
  if ( !v18[692] )
  {
LABEL_34:
    v37 = v62;
    goto LABEL_35;
  }
  a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v18 + 8);
  v5 = NewIrql;
  v7 = v62;
LABEL_33:
  if ( !a2 )
    goto LABEL_34;
  if ( byte_1C00E5E20 && (*(_DWORD *)&v8[6].InterfaceGuid.Data2 & 2) != 0 )
  {
    PktMonClientNblDropNdis((_DWORD)v8 + 5800, (_DWORD)a2, v23, 1, -1073676270, -536866809);
    v24 = 0LL;
  }
  if ( (v5 & 2) != 0 )
    goto LABEL_34;
  *(_QWORD *)&v66.DatapathEventsMask = 0LL;
  v66.CurrentCpu = -1;
  FilterFriendlyName = (unsigned int)v8->FilterFriendlyName;
  NewIrqla = 2;
  v66.PcwBlock = 0LL;
  if ( FilterFriendlyName || *(_DWORD *)&v8->Ref.ReferenceCount )
  {
    v66.DatapathEventsMask = FilterFriendlyName;
    v66.DatapathCyclesMask = *(_DWORD *)&v8->Ref.ReferenceCount;
    v66.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v8->FilterInstanceName.__ptr_.__value_;
    if ( !v66.PcwBlock )
      v66.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v8->FilterInstanceName.__ptr_.__value_;
  }
  v41 = a2;
  do
  {
    v41->Flags = v41->Flags & 0xFFFFFFF4 | 8;
    v41 = (struct _NET_BUFFER_LIST *)v41->Link.Alignment;
  }
  while ( v41 );
  CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20 )
    CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(a2, v22, v23);
  if ( LODWORD(v8[3].NblTracker) != (_DWORD)v24 )
  {
    CurrentIrql = (unsigned __int64)ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v8, a2);
    a2 = (struct _NET_BUFFER_LIST *)CurrentIrql;
    v24 = 0LL;
  }
  if ( !a2 )
    goto LABEL_34;
  if ( *(_DWORD *)ndisNblTrackerMode != (_DWORD)v24 )
  {
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)&v8[2].PktMonEdgeLower.PacketType, 0x87u, v7);
    v24 = 0LL;
  }
  if ( (v66.DatapathCyclesMask & 0x20) != 0 )
  {
    if ( !v7 )
      NewIrqla = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v66, 5u);
  }
  EdgeHandle = v8[2].PktMonEdgeUpper.EdgeHandle;
  SpinLock = (void (*)(void))v8[3].Ref.SpinLock;
  CompContext = v8[2].PktMonEdgeLower.CompContext;
  if ( *(_BYTE *)EdgeHandle == 17 )
    goto LABEL_78;
  v46 = v62;
  if ( ndisIterativeDataPathDisabled == (_DWORD)v24 )
  {
    if ( v62 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v47 = (struct _NET_BUFFER_LIST **)v72;
      a2->Scratch = v24;
      a2->ChildRefCount = v46;
      v48 = *(_BYTE *)EdgeHandle == 5;
      v64 = CurrentIrql;
      v72[2] = v24;
      v72[0] = a2;
      v72[1] = a2;
      if ( v48 )
      {
        while ( *v47 != v24 )
        {
          v49 = EdgeHandle;
          v50 = EdgeHandle[53] + 96 * CurrentIrql;
          v51 = *(_BYTE *)(v50 + 88);
          *(_BYTE *)(v50 + 88) = 1;
          v52 = *v47;
          v74 = v51;
          *v47 = v24;
          if ( v52 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v52->Scratch;
              ChildRefCount = v52->ChildRefCount;
              v59 = (unsigned int)v24;
              LODWORD(Context) = (_DWORD)v24;
              v52->ChildRefCount = (int)v24;
              ndisCallReceiveCompleteHandler(
                EdgeHandle,
                SpinLock,
                CompContext,
                v52,
                (unsigned int)Context,
                v59,
                ChildRefCount);
              v24 = 0LL;
              v52 = Scratch;
            }
            while ( Scratch );
            v51 = v74;
            v49 = EdgeHandle;
          }
          *(_BYTE *)(v50 + 88) = (_BYTE)v24;
          if ( v51 )
          {
            *(_BYTE *)(v50 + 88) = 1;
            a2 = *v47;
            goto LABEL_69;
          }
          EdgeHandle = (_QWORD *)EdgeHandle[69];
          v47 = (struct _NET_BUFFER_LIST **)(v50 + 72);
          SpinLock = (void (*)(void))v49[66];
          CompContext = (_PKTMON_COMPONENT_CONTEXT *)v49[67];
          CurrentIrql = v64;
          if ( *(_BYTE *)EdgeHandle != 5 )
          {
            a2 = *(struct _NET_BUFFER_LIST **)(v50 + 72);
            goto LABEL_69;
          }
        }
      }
      else
      {
LABEL_69:
        if ( a2 )
        {
          *v47 = v24;
          do
          {
            v54 = (struct _NET_BUFFER_LIST *)a2->Scratch;
            ChildRefCount = a2->ChildRefCount;
            v59 = (unsigned int)v24;
            LODWORD(Context) = (_DWORD)v24;
            a2->ChildRefCount = (int)v24;
            ndisCallReceiveCompleteHandler(
              EdgeHandle,
              SpinLock,
              CompContext,
              a2,
              (unsigned int)Context,
              v59,
              ChildRefCount);
            LODWORD(v24) = 0;
            a2 = v54;
          }
          while ( v54 );
        }
      }
      goto LABEL_72;
    }
  }
  if ( v8->Header.Type != 5 )
  {
LABEL_78:
    v37 = v62;
    ((void (__fastcall *)(_PKTMON_COMPONENT_CONTEXT *, struct _NET_BUFFER_LIST *, _QWORD))SpinLock)(
      CompContext,
      a2,
      v62);
    goto LABEL_79;
  }
  v71 = v62;
  Parameter[0] = v24;
  Parameter[1] = EdgeHandle;
  Parameter[2] = CompContext;
  v70 = 3LL;
  Parameter[3] = SpinLock;
  Parameter[4] = a2;
  v69 = (int)v24;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
         Parameter,
         0x4CCCuLL,
         0,
         v24) < 0 )
    ndisQueueStackExpansionFallbackNbls(v8, a2, 0);
LABEL_72:
  v37 = v62;
LABEL_79:
  if ( (v66.DatapathCyclesMask & 0x20) != 0 )
  {
    ndisPcwEndCycleCounter(&v66, 5u, 0x12uLL);
    if ( NewIrqla != 2 )
      KeLowerIrql(NewIrqla);
  }
LABEL_35:
  if ( v63 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v65);
  }
  else if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
  }
  v38 = *(KSPIN_LOCK **)(v67 + 288);
  if ( v37 )
  {
    if ( LockState.LockState == 3 )
    {
      v39 = KeGetPcr()->Prcb.Number << 12;
      --*(_QWORD *)(v38[4] + v39);
      if ( LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      v38[3] = 0LL;
      v56 = v38 + 2;
      if ( LockState.OldIrql == 2 )
        KeReleaseSpinLockFromDpcLevel(v56);
      else
        KeReleaseSpinLock(v56, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v67 + 288), &LockState);
  }
}
