/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C00AE630
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
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

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int NewIrql)
{
  unsigned __int64 CurrentIrql; // rax
  char v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // r10d
  struct _NDIS_FILTER_BLOCK *v11; // rbx
  struct _NET_BUFFER_LIST *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r9
  char *v15; // rsi
  char *PoolWithTag; // rax
  int v17; // edx
  int v18; // r8d
  struct _NET_BUFFER_LIST *Context; // r11
  _QWORD *RcvLinkSpeedIndicateUp; // r15
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v22; // r14
  struct _NDIS_OPEN_BLOCK *v23; // rdi
  unsigned int v24; // ebx
  unsigned int v25; // r13d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r12
  unsigned int v27; // r14d
  __int64 v28; // rcx
  struct _NET_BUFFER_LIST *v29; // rdx
  struct _NDIS_OPEN_BLOCK *v30; // rdx
  unsigned int v31; // r15d
  unsigned int v32; // r12d
  unsigned int v33; // r14d
  unsigned int v34; // edi
  __int64 v35; // rax
  unsigned int FilterFriendlyName; // eax
  struct _NET_BUFFER_LIST *v37; // rcx
  unsigned __int64 v38; // rax
  _QWORD *EdgeHandle; // r14
  void (*SpinLock)(void); // r12
  _PKTMON_COMPONENT_CONTEXT *CompContext; // r13
  struct _NET_BUFFER_LIST **v42; // r15
  bool v43; // zf
  _QWORD *v44; // rdx
  __int64 v45; // rdi
  char v46; // al
  struct _NET_BUFFER_LIST *v47; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v49; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-71h]
  unsigned int v51; // [rsp+38h] [rbp-71h]
  char v52; // [rsp+48h] [rbp-61h]
  unsigned int v53; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v54; // [rsp+50h] [rbp-59h]
  int v55; // [rsp+58h] [rbp-51h]
  struct NDIS_PCW_CONTEXT v56; // [rsp+60h] [rbp-49h] BYREF
  _QWORD Parameter[5]; // [rsp+78h] [rbp-31h] BYREF
  int v58; // [rsp+A0h] [rbp-9h]
  __int64 v59; // [rsp+A4h] [rbp-5h]
  unsigned int v60; // [rsp+ACh] [rbp+3h]
  _QWORD v61[9]; // [rsp+B0h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF
  char v64; // [rsp+108h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+128h] [rbp+7Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v6 = NewIrql;
  v54 = 0;
  v7 = NewIrql & 1;
  v52 = 0;
  v55 = v7;
  v8 = a4;
  v11 = a1;
  v12 = 0LL;
  if ( ((NewIrql & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2))
    && ndisPerProcRcvTrackers
    && (LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number,
        v13 = 2096 * CurrentIrql,
        v54 = CurrentIrql,
        v14 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql),
        (unsigned int)v14 < 3) )
  {
    v52 = 1;
    v15 = (char *)ndisPerProcRcvTrackers + 696 * v14 + v13 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    Context = 0LL;
    v15 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v17,
          4,
          10,
          (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids);
        Context = 0LL;
      }
      goto LABEL_41;
    }
    v8 = a4;
  }
  RcvLinkSpeedIndicateUp = (_QWORD *)v11->RcvLinkSpeedIndicateUp;
  v15[692] = 0;
  Alignment = a2;
  if ( (NewIrql & 2) == 0 )
  {
    do
    {
      v12 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v22 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[41];
  if ( v22 && v22->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v22, a2, (char *)a3, v8, NewIrql);
    Context = 0LL;
    *((_QWORD *)v15 + 8) = 0LL;
    *((_DWORD *)v15 + 20) = 0;
  }
  else
  {
    *((_QWORD *)v15 + 3) = a2;
    *((_QWORD *)v15 + 1) = RcvLinkSpeedIndicateUp;
    *((_DWORD *)v15 + 4) = NewIrql;
    *(_QWORD *)v15 = v11;
    *((_QWORD *)v15 + 4) = v12;
    *((_DWORD *)v15 + 10) = a3;
    *((_DWORD *)v15 + 11) = v8;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15);
    Context = 0LL;
    if ( !*((_QWORD *)v15 + 8) && !*((_DWORD *)v15 + 172) )
      goto LABEL_39;
    if ( !*RcvLinkSpeedIndicateUp || a3 )
    {
      v15[692] = 1;
    }
    else
    {
      ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v15);
      Context = 0LL;
    }
    if ( v22 )
      goto LABEL_39;
    v23 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
    if ( v23 )
    {
      v24 = *((_DWORD *)v15 + 172);
      v25 = *((_DWORD *)v15 + 4) | 2;
      do
      {
        FilterNextOpen = v23->FilterNextOpen;
        v27 = 0;
        do
        {
          v28 = v27++;
          v29 = *(struct _NET_BUFFER_LIST **)&v15[40 * v28 + 64];
          if ( v29 )
          {
            ndisMIndicateNetBufferListsToOpen(
              v23,
              v29,
              (char *)*((unsigned int *)v15 + 10),
              *(_DWORD *)&v15[40 * v28 + 80],
              v25);
            Context = 0LL;
          }
        }
        while ( v27 <= v24 );
        v23 = FilterNextOpen;
      }
      while ( FilterNextOpen );
      v11 = a1;
    }
    v30 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
    if ( !v30 )
      goto LABEL_39;
    if ( (NewIrql & 2) != 0 )
    {
      ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15, v30);
    }
    else
    {
      v31 = *((_DWORD *)v15 + 4);
      v32 = *((_DWORD *)v15 + 10);
      v33 = *((_DWORD *)v15 + 172);
      if ( *(_DWORD *)(*(_QWORD *)v15 + 2244LL) )
      {
        ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v15);
        Context = 0LL;
      }
      v34 = 1;
      if ( !v33 )
        goto LABEL_39;
      do
      {
        v35 = v34++;
        ndisMIndicateNetBufferListsToOpen(
          *(struct _NDIS_OPEN_BLOCK **)&v15[40 * v35 + 56],
          *(struct _NET_BUFFER_LIST **)&v15[40 * v35 + 64],
          (char *)v32,
          *(_DWORD *)&v15[40 * v35 + 80],
          v31);
      }
      while ( v34 <= v33 );
    }
    Context = 0LL;
  }
LABEL_39:
  if ( !v15[692] )
    goto LABEL_88;
  a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v15 + 8);
  v6 = NewIrql;
  v7 = NewIrql & 1;
LABEL_41:
  if ( a2 )
  {
    if ( byte_1C00E5E20 && (*(_DWORD *)&v11[6].InterfaceGuid.Data2 & 2) != 0 )
    {
      PktMonClientNblDropNdis((_DWORD)v11 + 5800, (_DWORD)a2, v18, 1, -1073676270, -536866809);
      Context = 0LL;
    }
    if ( (v6 & 2) == 0 )
    {
      *(_QWORD *)&v56.DatapathEventsMask = 0LL;
      v56.CurrentCpu = -1;
      FilterFriendlyName = (unsigned int)v11->FilterFriendlyName;
      NewIrqla = 2;
      v56.PcwBlock = 0LL;
      if ( FilterFriendlyName || *(_DWORD *)&v11->Ref.ReferenceCount )
      {
        v56.DatapathEventsMask = FilterFriendlyName;
        v56.DatapathCyclesMask = *(_DWORD *)&v11->Ref.ReferenceCount;
        v56.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v11->FilterInstanceName.__ptr_.__value_;
        if ( !v56.PcwBlock )
          v56.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v11->FilterInstanceName.__ptr_.__value_;
      }
      v37 = a2;
      do
      {
        v37->Flags = v37->Flags & 0xFFFFFFF4 | 8;
        v37 = (struct _NET_BUFFER_LIST *)v37->Link.Alignment;
      }
      while ( v37 );
      v38 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
      if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20 )
        v38 = ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
      if ( LODWORD(v11[3].NblTracker) != (_DWORD)Context )
      {
        v38 = (unsigned __int64)ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v11, a2);
        a2 = (struct _NET_BUFFER_LIST *)v38;
        Context = 0LL;
      }
      if ( a2 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode != (_DWORD)Context )
        {
          ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)&v11[2].PktMonEdgeLower.PacketType, 0x87u, v7);
          Context = 0LL;
        }
        if ( (v56.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( !v7 )
            NewIrqla = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v56, 5u);
        }
        EdgeHandle = v11[2].PktMonEdgeUpper.EdgeHandle;
        SpinLock = (void (*)(void))v11[3].Ref.SpinLock;
        CompContext = v11[2].PktMonEdgeLower.CompContext;
        if ( *(_BYTE *)EdgeHandle == 17 )
          goto LABEL_84;
        if ( ndisIterativeDataPathDisabled == (_DWORD)Context )
        {
          if ( v7 || (v38 = KeGetCurrentIrql(), (_BYTE)v38 == 2) )
          {
            LODWORD(v38) = KeGetPcr()->Prcb.Number;
            v42 = (struct _NET_BUFFER_LIST **)v61;
            a2->Scratch = Context;
            a2->ChildRefCount = v55;
            v43 = *(_BYTE *)EdgeHandle == 5;
            v53 = v38;
            v61[2] = Context;
            v61[0] = a2;
            v61[1] = a2;
            if ( v43 )
            {
              while ( *v42 != Context )
              {
                v44 = EdgeHandle;
                v45 = EdgeHandle[53] + 96 * v38;
                v46 = *(_BYTE *)(v45 + 88);
                *(_BYTE *)(v45 + 88) = 1;
                v47 = *v42;
                v64 = v46;
                *v42 = Context;
                if ( v47 )
                {
                  do
                  {
                    Scratch = (struct _NET_BUFFER_LIST *)v47->Scratch;
                    ChildRefCount = v47->ChildRefCount;
                    v47->ChildRefCount = (int)Context;
                    ndisCallReceiveCompleteHandler(
                      EdgeHandle,
                      SpinLock,
                      CompContext,
                      v47,
                      (unsigned int)Context,
                      (unsigned int)Context,
                      ChildRefCount);
                    Context = 0LL;
                    v47 = Scratch;
                  }
                  while ( Scratch );
                  v46 = v64;
                  v44 = EdgeHandle;
                }
                *(_BYTE *)(v45 + 88) = (_BYTE)Context;
                if ( v46 )
                {
                  *(_BYTE *)(v45 + 88) = 1;
                  a2 = *v42;
                  goto LABEL_77;
                }
                EdgeHandle = (_QWORD *)EdgeHandle[69];
                v42 = (struct _NET_BUFFER_LIST **)(v45 + 72);
                SpinLock = (void (*)(void))v44[66];
                CompContext = (_PKTMON_COMPONENT_CONTEXT *)v44[67];
                v38 = v53;
                if ( *(_BYTE *)EdgeHandle != 5 )
                {
                  a2 = *(struct _NET_BUFFER_LIST **)(v45 + 72);
                  goto LABEL_77;
                }
              }
            }
            else
            {
LABEL_77:
              if ( a2 )
              {
                *v42 = Context;
                do
                {
                  v49 = (struct _NET_BUFFER_LIST *)a2->Scratch;
                  v51 = a2->ChildRefCount;
                  a2->ChildRefCount = (int)Context;
                  ndisCallReceiveCompleteHandler(
                    EdgeHandle,
                    SpinLock,
                    CompContext,
                    a2,
                    (unsigned int)Context,
                    (unsigned int)Context,
                    v51);
                  LODWORD(Context) = 0;
                  a2 = v49;
                }
                while ( v49 );
              }
            }
            goto LABEL_85;
          }
        }
        if ( v11->Header.Type != 5 )
        {
LABEL_84:
          ((void (__fastcall *)(_PKTMON_COMPONENT_CONTEXT *, struct _NET_BUFFER_LIST *, _QWORD))v11[3].Ref.SpinLock)(
            v11[2].PktMonEdgeLower.CompContext,
            a2,
            v7);
        }
        else
        {
          Parameter[0] = Context;
          Parameter[1] = EdgeHandle;
          Parameter[2] = CompContext;
          v59 = 3LL;
          Parameter[3] = SpinLock;
          Parameter[4] = a2;
          v58 = (int)Context;
          v60 = v7;
          if ( KeExpandKernelStackAndCalloutEx(
                 (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                 Parameter,
                 0x4CCCuLL,
                 0,
                 Context) < 0 )
            ndisQueueStackExpansionFallbackNbls(v11, a2, 0);
        }
LABEL_85:
        if ( (v56.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v56, 5u, 0x12uLL);
          if ( NewIrqla != 2 )
            KeLowerIrql(NewIrqla);
        }
      }
    }
  }
LABEL_88:
  if ( v52 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v54);
  }
  else if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
  }
}
