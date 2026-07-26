/*
 * XREFs of ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD2D4
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C00AEE10 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010F00 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CB7C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00ACD70 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00ACE08 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00ADF1C (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C00AE2A4 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int64 CurrentIrql; // rax
  unsigned int v7; // r11d
  _SLIST_HEADER *v8; // rdx
  struct _NDIS_FILTER_BLOCK *v9; // r13
  unsigned int v10; // r10d
  unsigned int v11; // r14d
  unsigned int v12; // edi
  unsigned int v13; // ebx
  struct _NET_BUFFER_LIST *v14; // r12
  struct _NET_BUFFER_LIST *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r9
  char *PoolWithTag; // rsi
  int v19; // edx
  int v20; // r8d
  struct _NET_BUFFER_LIST *v21; // rdi
  unsigned int v22; // r12d
  _QWORD *RcvLinkSpeedIndicateUp; // r14
  struct _NET_BUFFER_LIST *v24; // rcx
  struct _NDIS_OPEN_BLOCK *v25; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned __int64 v27; // rax
  _QWORD *EdgeHandle; // r14
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rcx
  void (*SpinLock)(void); // r12
  struct _NET_BUFFER_LIST **v31; // r15
  bool v32; // zf
  _QWORD *v33; // rdx
  __int64 v34; // rdi
  char v35; // al
  struct _NET_BUFFER_LIST *v36; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NDIS_OPEN_BLOCK *v39; // rbx
  unsigned int v40; // r13d
  unsigned int v41; // r12d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v43; // rdi
  __int64 v44; // rcx
  struct _NET_BUFFER_LIST *v45; // rdx
  struct _NDIS_OPEN_BLOCK *v46; // rdx
  unsigned int v47; // r14d
  unsigned int v48; // r15d
  unsigned int v49; // edi
  unsigned int i; // ebx
  __int64 v51; // rax
  unsigned int v52; // eax
  struct _NET_BUFFER_LIST *v53; // rbx
  _SLIST_HEADER *v54; // rcx
  char v55; // [rsp+48h] [rbp-99h]
  char v56; // [rsp+49h] [rbp-98h]
  unsigned int v57; // [rsp+54h] [rbp-8Dh]
  _SLIST_HEADER *v58; // [rsp+58h] [rbp-89h]
  _PKTMON_COMPONENT_CONTEXT *v59; // [rsp+60h] [rbp-81h]
  unsigned int v60; // [rsp+68h] [rbp-79h]
  struct NDIS_PCW_CONTEXT v61; // [rsp+70h] [rbp-71h] BYREF
  _SLIST_HEADER *v62; // [rsp+90h] [rbp-51h]
  _QWORD Parameter[5]; // [rsp+98h] [rbp-49h] BYREF
  int v64; // [rsp+C0h] [rbp-21h]
  int v65; // [rsp+C4h] [rbp-1Dh]
  int v66; // [rsp+C8h] [rbp-19h]
  unsigned int v67; // [rsp+CCh] [rbp-15h]
  _QWORD v68[11]; // [rsp+D0h] [rbp-11h] BYREF
  struct _NET_BUFFER_LIST *v70; // [rsp+140h] [rbp+5Fh]
  KIRQL NewIrql; // [rsp+150h] [rbp+6Fh]

  v70 = a2;
  CurrentIrql = (unsigned __int64)a2;
  v7 = a3;
  v8 = 0LL;
  v9 = a1;
  v58 = 0LL;
  if ( CurrentIrql )
  {
    v10 = a5;
    v11 = a5 & 1;
    v12 = a5 & 2;
    while ( 1 )
    {
      v13 = 0;
      v62 = (_SLIST_HEADER *)CurrentIrql;
      v14 = (struct _NET_BUFFER_LIST *)CurrentIrql;
      if ( a6 )
      {
        do
        {
          if ( !CurrentIrql )
            break;
          ++v13;
          v8 = (_SLIST_HEADER *)CurrentIrql;
          CurrentIrql = *(_QWORD *)CurrentIrql;
        }
        while ( v13 < a6 );
        v58 = v8;
        v70 = (struct _NET_BUFFER_LIST *)CurrentIrql;
      }
      v8->Alignment = 0LL;
      v15 = 0LL;
      v57 = 0;
      v55 = 0;
      if ( !v11 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql != 2 )
          goto LABEL_12;
      }
      if ( ndisPerProcRcvTrackers
        && (LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number,
            v16 = 2096 * CurrentIrql,
            v57 = CurrentIrql,
            v17 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql),
            (unsigned int)v17 < 3) )
      {
        v55 = 1;
        PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v17 + v16 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
      }
      else
      {
LABEL_12:
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        if ( !PoolWithTag )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v19,
              4,
              10,
              (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids);
          }
          v21 = v14;
          v22 = a5 & 2;
LABEL_25:
          if ( !v21 )
            goto LABEL_95;
          if ( byte_1C00E5E20 && (*(_DWORD *)&v9[6].InterfaceGuid.Data2 & 2) != 0 )
            PktMonClientNblDropNdis((_DWORD)v9 + 5800, (_DWORD)v21, v20, 1, -1073676270, -536866809);
          if ( v22 )
            goto LABEL_95;
          v61.PcwBlock = 0LL;
          v61.DatapathEventsMask = 0;
          v61.DatapathCyclesMask = 0;
          v61.CurrentCpu = -1;
          NewIrql = 2;
          if ( LODWORD(v9->FilterFriendlyName) || *(_DWORD *)&v9->Ref.ReferenceCount )
          {
            v61.DatapathEventsMask = (unsigned int)v9->FilterFriendlyName;
            v61.DatapathCyclesMask = *(_DWORD *)&v9->Ref.ReferenceCount;
            v61.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v9->FilterInstanceName.__ptr_.__value_;
            if ( !v61.PcwBlock )
              v61.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v9->FilterInstanceName.__ptr_.__value_;
          }
          Alignment = v21;
          do
          {
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF4 | 8;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          v27 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
          if ( Microsoft_Windows_Networking_CorrelationEnabled
            || byte_1C00E5E20 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
          {
            v27 = ndisMarkNetBufferListCorrelationIdsAsUsed(v21);
          }
          if ( LODWORD(v9[3].NblTracker) )
          {
            v27 = (unsigned __int64)ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v9, v21);
            v21 = (struct _NET_BUFFER_LIST *)v27;
          }
          if ( !v21 )
            goto LABEL_95;
          if ( *(_DWORD *)ndisNblTrackerMode )
            ndisNblTrackerTransferOwnershipInternal(v21, 0LL, *(_QWORD *)&v9[2].PktMonEdgeLower.PacketType, 0x87u, v11);
          if ( (v61.DatapathCyclesMask & 0x20) != 0 )
          {
            if ( !v11 )
              NewIrql = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter(&v61, 5u);
          }
          EdgeHandle = v9[2].PktMonEdgeUpper.EdgeHandle;
          CompContext = v9[2].PktMonEdgeLower.CompContext;
          SpinLock = (void (*)(void))v9[3].Ref.SpinLock;
          v59 = CompContext;
          if ( *(_BYTE *)EdgeHandle == 17 )
            goto LABEL_91;
          if ( !ndisIterativeDataPathDisabled )
          {
            if ( (a5 & 1) != 0 || (v27 = KeGetCurrentIrql(), (_BYTE)v27 == 2) )
            {
              LODWORD(v27) = KeGetPcr()->Prcb.Number;
              v31 = (struct _NET_BUFFER_LIST **)v68;
              v68[2] = 0LL;
              v21->Scratch = 0LL;
              v21->ChildRefCount = a5 & 1;
              v32 = *(_BYTE *)EdgeHandle == 5;
              v60 = v27;
              v68[0] = v21;
              v68[1] = v21;
              if ( v32 )
              {
                while ( *v31 )
                {
                  v33 = EdgeHandle;
                  v34 = EdgeHandle[53] + 96 * v27;
                  v35 = *(_BYTE *)(v34 + 88);
                  *(_BYTE *)(v34 + 88) = 1;
                  v36 = *v31;
                  *v31 = 0LL;
                  v56 = v35;
                  if ( v36 )
                  {
                    do
                    {
                      ChildRefCount = v36->ChildRefCount;
                      Scratch = (struct _NET_BUFFER_LIST *)v36->Scratch;
                      v36->ChildRefCount = 0;
                      ndisCallReceiveCompleteHandler(EdgeHandle, SpinLock, v59, v36, 0, 0, ChildRefCount);
                      v36 = Scratch;
                    }
                    while ( Scratch );
                    v9 = a1;
                    v33 = EdgeHandle;
                    v35 = v56;
                  }
                  *(_BYTE *)(v34 + 88) = 0;
                  if ( v35 )
                  {
                    CompContext = v59;
                    *(_BYTE *)(v34 + 88) = 1;
                    v21 = *v31;
                    goto LABEL_84;
                  }
                  EdgeHandle = (_QWORD *)EdgeHandle[69];
                  v31 = (struct _NET_BUFFER_LIST **)(v34 + 72);
                  CompContext = (_PKTMON_COMPONENT_CONTEXT *)v33[67];
                  SpinLock = (void (*)(void))v33[66];
                  v27 = v60;
                  v59 = CompContext;
                  if ( *(_BYTE *)EdgeHandle != 5 )
                  {
                    v21 = *(struct _NET_BUFFER_LIST **)(v34 + 72);
                    goto LABEL_84;
                  }
                }
              }
              else
              {
LABEL_84:
                if ( v21 )
                {
                  *v31 = 0LL;
                  do
                  {
                    v52 = v21->ChildRefCount;
                    v53 = (struct _NET_BUFFER_LIST *)v21->Scratch;
                    v21->ChildRefCount = 0;
                    ndisCallReceiveCompleteHandler(EdgeHandle, SpinLock, CompContext, v21, 0, 0, v52);
                    CompContext = v59;
                    v21 = v53;
                  }
                  while ( v53 );
                }
              }
              goto LABEL_92;
            }
          }
          if ( v9->Header.Type != 5 )
          {
LABEL_91:
            ((void (__fastcall *)(_PKTMON_COMPONENT_CONTEXT *, struct _NET_BUFFER_LIST *, _QWORD))SpinLock)(
              CompContext,
              v21,
              a5 & 1);
          }
          else
          {
            Parameter[0] = 0LL;
            v66 = 0;
            v64 = 0;
            Parameter[2] = CompContext;
            v67 = a5 & 1;
            Parameter[1] = EdgeHandle;
            v65 = 3;
            Parameter[3] = SpinLock;
            Parameter[4] = v21;
            if ( KeExpandKernelStackAndCalloutEx(
                   (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                   Parameter,
                   0x4CCCuLL,
                   0,
                   0LL) < 0 )
              ndisQueueStackExpansionFallbackNbls(v9, v21, 0);
          }
LABEL_92:
          if ( (v61.DatapathCyclesMask & 0x20) != 0 )
          {
            ndisPcwEndCycleCounter(&v61, 5u, 0x12uLL);
            if ( NewIrql != 2 )
              KeLowerIrql(NewIrql);
          }
          goto LABEL_95;
        }
        v10 = a5;
        v7 = a3;
      }
      RcvLinkSpeedIndicateUp = (_QWORD *)v9->RcvLinkSpeedIndicateUp;
      v24 = v14;
      PoolWithTag[692] = 0;
      if ( !v12 )
      {
        do
        {
          v15 = v24;
          v24->Flags = v24->Flags & 0xFFFFFFF0 | 4;
          v24 = (struct _NET_BUFFER_LIST *)v24->Link.Alignment;
        }
        while ( v24 );
      }
      v25 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[41];
      if ( v25 )
      {
        if ( v25->ProtocolHandle->MajorNdisVersion >= 6u )
          break;
      }
      *((_QWORD *)PoolWithTag + 3) = v14;
      *((_QWORD *)PoolWithTag + 1) = RcvLinkSpeedIndicateUp;
      *((_DWORD *)PoolWithTag + 4) = v10;
      *(_QWORD *)PoolWithTag = v9;
      *((_QWORD *)PoolWithTag + 4) = v15;
      *((_DWORD *)PoolWithTag + 10) = v7;
      *((_DWORD *)PoolWithTag + 11) = v13;
      ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
      if ( !*((_QWORD *)PoolWithTag + 8) && !*((_DWORD *)PoolWithTag + 172) )
        goto LABEL_22;
      if ( !*RcvLinkSpeedIndicateUp || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
      if ( v25 )
        goto LABEL_22;
      v39 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
      if ( v39 )
      {
        v40 = *((_DWORD *)PoolWithTag + 172);
        v41 = *((_DWORD *)PoolWithTag + 4) | 2;
        do
        {
          FilterNextOpen = v39->FilterNextOpen;
          v43 = 0LL;
          do
          {
            v44 = (unsigned int)v43;
            v45 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v43 + 64];
            v43 = (unsigned int)(v43 + 1);
            if ( v45 )
              ndisMIndicateNetBufferListsToOpen(
                v39,
                v45,
                (char *)*((unsigned int *)PoolWithTag + 10),
                *(_DWORD *)&PoolWithTag[40 * v44 + 80],
                v41);
          }
          while ( (unsigned int)v43 <= v40 );
          v39 = FilterNextOpen;
        }
        while ( FilterNextOpen );
        v9 = a1;
      }
      v46 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
      if ( !v46 )
        goto LABEL_22;
      v22 = a5 & 2;
      if ( (a5 & 2) != 0 )
      {
        ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v46);
      }
      else
      {
        v47 = *((_DWORD *)PoolWithTag + 4);
        v48 = *((_DWORD *)PoolWithTag + 10);
        v49 = *((_DWORD *)PoolWithTag + 172);
        if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
          ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
        for ( i = 1; i <= v49; ++i )
        {
          v51 = i;
          ndisMIndicateNetBufferListsToOpen(
            *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v51 + 56],
            *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v51 + 64],
            (char *)v48,
            *(_DWORD *)&PoolWithTag[40 * v51 + 80],
            v47);
        }
      }
LABEL_23:
      if ( PoolWithTag[692] )
      {
        v21 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
        v11 = a5 & 1;
        goto LABEL_25;
      }
LABEL_95:
      if ( v55 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v57);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      v12 = a5 & 2;
      v8 = v58;
      if ( (a5 & 2) != 0 )
      {
        if ( v58->Alignment )
        {
          v8 = v62;
          v58 = v62;
          v54 = (_SLIST_HEADER *)v62->Alignment;
          if ( v62->Alignment )
          {
            do
            {
              v8 = v54;
              v58 = v54;
              v54 = (_SLIST_HEADER *)v54->Alignment;
            }
            while ( v54 );
          }
        }
        CurrentIrql = (unsigned __int64)v70;
        v8->Alignment = (unsigned __int64)v70;
      }
      else
      {
        CurrentIrql = (unsigned __int64)v70;
      }
      v11 = a5 & 1;
      v10 = a5;
      v7 = a3;
      if ( !CurrentIrql )
        return;
    }
    ndisMIndicateNetBufferListsToOpen(v25, v14, (char *)v7, v13, v10);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
LABEL_22:
    v22 = a5 & 2;
    goto LABEL_23;
  }
}
