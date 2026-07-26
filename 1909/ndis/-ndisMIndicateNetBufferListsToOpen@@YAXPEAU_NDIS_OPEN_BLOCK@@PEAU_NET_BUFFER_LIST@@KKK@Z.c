/*
 * XREFs of ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC650 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00ACF40 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00ACFD8 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD4A4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE630 (ndisMDispatchReceiveNetBufferLists.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0015024 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D34 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisTraceRcv @ 0x1C007EDF0 (ndisTraceRcv.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AF188 (ndisReturnNetBufferListsInternal.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C98FC (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r13
  __int64 v6; // rsi
  unsigned int CurrentCpu; // r12d
  unsigned int v8; // r10d
  unsigned int PcwDatapathEventMask; // eax
  struct _NDIS_OPEN_BLOCK *v11; // r14
  KIRQL v12; // di
  bool v13; // cl
  __int64 Flags; // rdx
  unsigned int v15; // ebx
  char v16; // di
  unsigned int v17; // r8d
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rbx
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  _UNKNOWN **v21; // r10
  struct _NET_BUFFER_LIST *Alignment; // r13
  void *v23; // rdi
  char *SourceHandle; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  bool v27; // cl
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 Clock; // rax
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  KIRQL v34; // al
  unsigned __int16 v35; // ax
  __int64 v36; // rax
  char v37; // [rsp+40h] [rbp-41h] BYREF
  char v38; // [rsp+41h] [rbp-40h]
  unsigned int v39; // [rsp+44h] [rbp-3Dh]
  struct NDIS_PCW_CONTEXT v40; // [rsp+48h] [rbp-39h] BYREF
  __int64 v41; // [rsp+60h] [rbp-21h]
  char *v42; // [rsp+68h] [rbp-19h]
  __int64 v43; // [rsp+70h] [rbp-11h]
  __int64 v44; // [rsp+78h] [rbp-9h]
  _NDIS_MINIPORT_BLOCK *v45; // [rsp+80h] [rbp-1h]
  bool v47; // [rsp+E8h] [rbp+67h] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+6Fh]
  unsigned int v49; // [rsp+F8h] [rbp+77h]

  v49 = a4;
  v48 = (unsigned int)a3;
  MiniportHandle = a1->MiniportHandle;
  v6 = 0LL;
  CurrentCpu = -1;
  v45 = MiniportHandle;
  v8 = a4;
  v44 = 0LL;
  v40.PcwBlock = 0LL;
  PcwDatapathEventMask = MiniportHandle->PcwDatapathEventMask;
  v11 = a1;
  *(_QWORD *)&v40.DatapathEventsMask = 0LL;
  v40.CurrentCpu = -1;
  if ( PcwDatapathEventMask || MiniportHandle->PcwDatapathCycleMask )
  {
    v40.DatapathEventsMask = PcwDatapathEventMask;
    v40.DatapathCyclesMask = MiniportHandle->PcwDatapathCycleMask;
    v40.PcwBlock = MiniportHandle->PcwDataBlock;
    if ( !v40.PcwBlock )
    {
      CurrentCpu = v40.CurrentCpu;
      v40.PcwBlock = MiniportHandle->PcwDataBlock;
    }
  }
  v12 = 2;
  v13 = a2->SourceHandle == a1;
  Flags = a2->Flags;
  LOBYTE(a3) = (Flags & 0x200) != 0;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == v11 )
  {
    v13 = 1;
LABEL_68:
    if ( (Flags & 0x200) == 0 )
    {
LABEL_20:
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(MiniportHandle, a2);
      return;
    }
    goto LABEL_5;
  }
  if ( v13 )
    goto LABEL_68;
LABEL_5:
  if ( MiniportHandle->CheckPacketFilters && !v11->PacketFilters
    || (v11->PacketFilters & 0x10000) != 0 && !v13 && (Flags & 0x80u) != 0LL )
  {
    goto LABEL_20;
  }
  if ( (_BYTE)dword_1C00E8098 )
  {
    v38 = 1;
    Clock = WmiGetClock(0LL, 0LL);
    v8 = v49;
    v44 = Clock;
  }
  else
  {
    v38 = 0;
  }
  v15 = a5;
  v39 = a5;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_11;
  v16 = ndisNblTrackerEpoch;
  v43 = 0LL;
  v17 = 133;
  v41 = 0LL;
  if ( (a5 & 2) == 0 )
    v17 = 132;
  v37 = 0;
  NblTracker = v11->NblTracker;
  v19 = 0LL;
  v47 = (a5 & 1) != 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v17, NblTracker, (a5 & 1) != 0);
    v19 = 0LL;
  }
  v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v20 & 1) != 0 )
  {
    a3 = *(char **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v20 |= 2LL * (v16 & 1);
  }
  else
  {
    a3 = (char *)v20;
  }
  v42 = a3;
  v21 = &WPP_RECORDER_INITIALIZED;
  Alignment = a2;
  do
  {
    v23 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v23 )
    {
      if ( !v23 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(32LL, Flags, a3, v19);
      if ( ((unsigned __int8)v23 & 4) != 0 )
        goto LABEL_77;
      SourceHandle = (char *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        Flags = (unsigned __int8)*SourceHandle;
        if ( (unsigned __int8)(Flags - 17) <= 1u || (_BYTE)Flags == 5 )
        {
          if ( SourceHandle != a3 || Alignment->ParentNetBufferList )
          {
            ++v6;
            v25 = v20;
          }
          else
          {
            ++v19;
            v25 = 24LL;
            v41 = v19;
            ++v6;
          }
          goto LABEL_40;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v21 )
        {
          LOBYTE(Flags) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            Flags,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment,
            *SourceHandle);
          goto LABEL_76;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v21 )
      {
        LOBYTE(Flags) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          Flags,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)Alignment);
LABEL_76:
        a3 = v42;
        v21 = &WPP_RECORDER_INITIALIZED;
        v19 = v41;
      }
LABEL_77:
      v25 = v20 | 4;
LABEL_40:
      Alignment->NetBufferListInfo[27] = (void *)v25;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v23, v43 - v6, &v47, &v37);
      a3 = v42;
      v21 = &WPP_RECORDER_INITIALIZED;
      v19 = v41;
    }
    v43 = v6;
  }
  while ( Alignment );
  v11 = a1;
  v26 = v6 - v19;
  MiniportHandle = v45;
  if ( (v20 & 1) != 0 && v26 )
  {
    v27 = v47;
    if ( !v47 && !v37 )
    {
      v27 = KeGetCurrentIrql() == 2;
      v47 = v27;
    }
    v8 = v49;
    v28 = v20 >> 1;
    v29 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = 2;
    v30 = 2 * (v28 & 1);
    if ( v27 )
    {
      CurrentCpu = v40.CurrentCpu;
      v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v31 += v26;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v26);
      CurrentCpu = v40.CurrentCpu;
    }
  }
  else
  {
    v8 = v49;
    v12 = 2;
  }
  v15 = v39;
LABEL_11:
  if ( byte_1C00E5E20 )
  {
    CompContext = v11->PktMonEdge.CompContext;
    if ( CompContext )
    {
      if ( (*((_DWORD *)CompContext + 3) & 1) != 0 )
      {
        PktMonClientNblLogNdis(&v11->PktMonEdge, a2, a3, 1LL);
        v8 = v49;
      }
    }
  }
  if ( (v40.DatapathEventsMask & 0x3014) != 0 || (v40.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v15 & 1) == 0 )
    {
      v34 = KfRaiseIrql(2u);
      v8 = v49;
      v12 = v34;
    }
    if ( (v40.DatapathEventsMask & 4) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        v40.CurrentCpu = CurrentCpu;
      }
      ++*(_QWORD *)((char *)&v40.PcwBlock->DatapathEventReferences[4]
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( (v40.DatapathEventsMask & 0x10) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        v40.CurrentCpu = CurrentCpu;
      }
      *(_QWORD *)((char *)&v40.PcwBlock->DatapathEventReferences[8]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData) += v8;
    }
    if ( (v15 & 2) != 0 )
    {
      if ( (v40.DatapathEventsMask & 0x1000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v40.CurrentCpu = CurrentCpu;
        }
        ++*(_QWORD *)((char *)&v40.PcwBlock->TotalInstanceName
                    + CurrentCpu * ndisPcwPerCpuDataStride
                    + ndisPcwOffsetToPerCpuData
                    + 40);
      }
      if ( (v40.DatapathEventsMask & 0x2000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v40.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v40.PcwBlock->TotalInstanceName
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 48) += v8;
      }
    }
    if ( (v40.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v40, 3u);
    }
    else if ( v12 != 2 )
    {
      KeLowerIrql(v12);
      v8 = v49;
    }
  }
  v11->ReceiveNetBufferLists(v11->ReceiveNetBufferListsContext, a2, v48, v8, v15);
  if ( (v40.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v40, 3u, 0x10uLL);
    if ( v12 != 2 )
      KeLowerIrql(v12);
  }
  if ( (v15 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      v11->NblTracker,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20,
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v15 & 1);
  if ( (_BYTE)dword_1C00E8098 )
    WmiGetClock(0LL, 0LL);
  if ( v38 )
  {
    v35 = v11->FrameTypeArray[0];
    if ( v35 == 0xDD86 || v35 == 1544 || v35 == 8 )
    {
      v36 = WmiGetClock(0LL, 0LL);
      ndisTraceRcv(MiniportHandle, v36 - v44, v49);
    }
  }
}
