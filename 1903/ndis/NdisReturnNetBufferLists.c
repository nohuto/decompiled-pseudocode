/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C000D590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010F00 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CB7C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00A9C4C (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00ADF1C (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v4; // r12
  KIRQL v5; // r11
  ULONG v6; // r13d
  PNET_BUFFER_LIST v7; // r14
  unsigned int PcwDatapathEventMask; // eax
  unsigned int *v9; // rbx
  unsigned int DatapathEventsMask; // edi
  unsigned int v12; // eax
  PNET_BUFFER_LIST i; // rax
  __int64 CurrentIrql; // rax
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // rdi
  void (*ReturnNetBufferListsHandler)(void); // r15
  void *ReturnNetBufferListsContext; // r12
  struct _NET_BUFFER_LIST **v18; // rsi
  bool v19; // zf
  _NDIS_OBJECT_HEADER *v20; // r13
  __int64 v21; // r14
  char v22; // al
  struct _NET_BUFFER_LIST *v23; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v25; // rbx
  unsigned int Number; // r9d
  _SLIST_HEADER *Alignment; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v28; // rdx
  NDIS_NBL_TRACKER_HANDLE__ *ReturnNetBufferListsTracker; // rbx
  __int64 v30; // r11
  char v31; // di
  unsigned __int64 v32; // rbx
  char *v33; // r8
  _UNKNOWN **v34; // r9
  _SLIST_HEADER *v35; // r15
  unsigned __int64 Region; // rdi
  char *v37; // rcx
  int v38; // edx
  int v39; // r8d
  unsigned __int64 v40; // r9
  char v41; // r10
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  KIRQL v51; // r11
  unsigned int ChildRefCount; // [rsp+30h] [rbp-99h]
  unsigned int v53; // [rsp+30h] [rbp-99h]
  unsigned int v54; // [rsp+40h] [rbp-89h]
  int v55; // [rsp+40h] [rbp-89h]
  struct NDIS_PCW_CONTEXT v56; // [rsp+48h] [rbp-81h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v57; // [rsp+60h] [rbp-69h]
  char *v58; // [rsp+68h] [rbp-61h]
  __int64 v59; // [rsp+70h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v60; // [rsp+78h] [rbp-51h] BYREF
  __int64 v61; // [rsp+90h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v62; // [rsp+98h] [rbp-31h]
  _QWORD Parameter[5]; // [rsp+A0h] [rbp-29h] BYREF
  int v64; // [rsp+C8h] [rbp-1h]
  __int64 v65; // [rsp+CCh] [rbp+3h]
  ULONG v66; // [rsp+D4h] [rbp+Bh]
  _QWORD v67[9]; // [rsp+D8h] [rbp+Fh] BYREF
  char v68; // [rsp+138h] [rbp+6Fh]
  char v69; // [rsp+138h] [rbp+6Fh]
  KIRQL v70; // [rsp+148h] [rbp+7Fh]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v4 = 0LL;
  v5 = 2;
  v62 = v3;
  v6 = ReturnFlags;
  v7 = NetBufferLists;
  v56.PcwBlock = 0LL;
  PcwDatapathEventMask = v3->PcwDatapathEventMask;
  v9 = (unsigned int *)&v3->80;
  *(_QWORD *)&v56.DatapathEventsMask = 0LL;
  v56.CurrentCpu = -1;
  if ( PcwDatapathEventMask || *v9 )
  {
    v56.DatapathEventsMask = PcwDatapathEventMask;
    v56.DatapathCyclesMask = *v9;
    v56.PcwBlock = v3->PcwDataBlock;
    if ( !v56.PcwBlock )
      v56.PcwBlock = v3->PcwDataBlock;
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisBindingHandle);
    v5 = 2;
  }
  DatapathEventsMask = v56.DatapathEventsMask;
  if ( (v56.DatapathEventsMask & 0x180028) != 0 || (v56.DatapathCyclesMask & 0x10) != 0 )
  {
    if ( (v6 & 1) == 0 )
      v5 = KfRaiseIrql(2u);
    if ( (v56.DatapathEventsMask & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)&ReturnFlags = ndisPcwOffsetToPerCpuData;
      DatapathEventsMask = v56.DatapathEventsMask;
      NetBufferLists = (PNET_BUFFER_LIST)(Number * ndisPcwPerCpuDataStride);
      v56.CurrentCpu = Number;
      ++*(_NET_BUFFER_LIST **)((char *)&NetBufferLists->ParentNetBufferList
                             + (unsigned __int64)v56.PcwBlock->DatapathEventReferences
                             + ndisPcwOffsetToPerCpuData);
    }
    else
    {
      Number = v56.CurrentCpu;
    }
    if ( !v5 && (DatapathEventsMask & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v56.DatapathEventsMask;
        v56.CurrentCpu = Number;
      }
      NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
      ++*(_QWORD *)((char *)&v56.PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 24);
    }
    if ( (DatapathEventsMask & 0x100020) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v7;
      *(_QWORD *)&ReturnFlags = 0LL;
      if ( v7 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          *(_QWORD *)&ReturnFlags = ReturnFlags + 1;
        }
        while ( Alignment );
      }
      if ( (DatapathEventsMask & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v56.DatapathEventsMask;
          v56.CurrentCpu = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
        *(_QWORD *)((char *)&v56.PcwBlock->DatapathEventReferences[10]
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData) += ReturnFlags;
      }
      if ( !v5 && (DatapathEventsMask & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v56.CurrentCpu = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
        *(_QWORD *)((char *)&v56.PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 32) += ReturnFlags;
      }
    }
    if ( (v56.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v56, 4u);
    }
    else if ( v5 != 2 )
    {
      KeLowerIrql(v5);
    }
  }
  v12 = v3->PcwDatapathEventMask;
  v70 = 2;
  v60.PcwBlock = 0LL;
  *(_QWORD *)&v60.DatapathEventsMask = 0LL;
  v60.CurrentCpu = -1;
  if ( v12 || *v9 )
  {
    v60.DatapathEventsMask = v12;
    v60.DatapathCyclesMask = *v9;
    v60.PcwBlock = v3->PcwDataBlock;
    if ( !v60.PcwBlock )
      v60.PcwBlock = v3->PcwDataBlock;
  }
  for ( i = v7; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7, NetBufferLists, *(_QWORD *)&ReturnFlags);
  if ( v3->PeriodicReceiveQueue.NblsAllocated )
    v7 = ndisReturnPeriodicReceives(v3, v7);
  if ( !v7 )
    goto LABEL_21;
  CurrentIrql = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_17;
  v28 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
  ReturnNetBufferListsTracker = v3->Next.ReturnNetBufferListsTracker;
  v30 = 0LL;
  v31 = ndisNblTrackerEpoch;
  v57 = v28;
  v61 = 0LL;
  v55 = v6 & 1;
  v59 = 0LL;
  v69 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v7, v28, 0x87u, ReturnNetBufferListsTracker, v6 & 1);
    v28 = v57;
    v30 = 0LL;
  }
  v32 = (unsigned __int64)ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v32 & 1) != 0 )
  {
    v33 = *(char **)((v32 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    CurrentIrql = 2LL * (v31 & 1);
    v32 |= CurrentIrql;
  }
  else
  {
    v33 = (char *)v32;
  }
  v58 = v33;
  v34 = &WPP_RECORDER_INITIALIZED;
  v35 = (_SLIST_HEADER *)v7;
  while ( 2 )
  {
    Region = v35[22].Region;
    while ( v35[22].Region == Region )
    {
      if ( !Region && !v35[7].Region )
        v35[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFDuLL, v28, v33, v34);
      if ( (Region & 4) != 0 )
        goto LABEL_109;
      v37 = (char *)v35[7].Region;
      if ( v37 )
      {
        v38 = (unsigned __int8)*v37;
        if ( (unsigned __int8)(v38 - 17) <= 1u || (_BYTE)v38 == 5 )
        {
          if ( v37 != v33 || v35[1].Region )
          {
            v28 = v57;
            ++v4;
            CurrentIrql = v32;
          }
          else
          {
            v28 = v57;
            v59 = ++v30;
            ++v4;
            CurrentIrql = 24LL;
          }
          goto LABEL_71;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v34 )
        {
          LOBYTE(v38) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v38,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)v35,
            *v37);
LABEL_107:
          v33 = v58;
          v34 = &WPP_RECORDER_INITIALIZED;
          v30 = v59;
        }
        v28 = v57;
        goto LABEL_109;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v34 )
      {
        LOBYTE(v28) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v28,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)v35);
        goto LABEL_107;
      }
LABEL_109:
      CurrentIrql = v32 | 4;
LABEL_71:
      v35[22].Region = CurrentIrql;
      v35 = (_SLIST_HEADER *)v35->Alignment;
      if ( !v35 )
        break;
    }
    v39 = v55;
    v40 = v61 - v4;
    v41 = v69;
    if ( (Region & 1) != 0 && v40 )
    {
      if ( !(_BYTE)v55 && !v69 )
      {
        v41 = 1;
        v69 = 1;
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql == 2 )
          v39 = 1;
        else
          LOBYTE(v39) = 0;
        v55 = v39;
      }
      v42 = Region;
      v43 = Region & 0xFFFFFFFFFFFFFFF8uLL;
      v44 = 2 * ((v42 >> 1) & 1);
      if ( (_BYTE)v39 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v45 = (_QWORD *)(*(_QWORD *)(v43 + 8 * v44 + 40) + (unsigned int)CurrentIrql);
        *v45 += v40;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 8 * v44 + 48), v40);
      }
    }
    v28 = v57;
    v34 = &WPP_RECORDER_INITIALIZED;
    v61 = v4;
    if ( v35 )
    {
      v33 = v58;
      continue;
    }
    break;
  }
  v3 = v62;
  v46 = v4 - v30;
  if ( (v32 & 1) != 0 && v46 )
  {
    if ( !(_BYTE)v39 && !v41 )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v39) = (_BYTE)CurrentIrql == 2;
    }
    v47 = v32;
    v48 = v32 & 0xFFFFFFFFFFFFFFF8uLL;
    v49 = 2 * ((v47 >> 1) & 1);
    if ( (_BYTE)v39 )
    {
      CurrentIrql = KeGetPcr()->Prcb.Number << 12;
      v50 = (_QWORD *)(*(_QWORD *)(v48 + 8 * v49 + 40) + (unsigned int)CurrentIrql);
      *v50 += v46;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 8 * v49 + 48), v46);
    }
  }
LABEL_17:
  if ( (v60.DatapathCyclesMask & 0x20) != 0 )
  {
    if ( (v6 & 1) == 0 )
      v70 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v60, 5u);
  }
  ReturnNetBufferListsObject = v3->Next.ReturnNetBufferListsObject;
  ReturnNetBufferListsHandler = (void (*)(void))v3->Next.ReturnNetBufferListsHandler;
  ReturnNetBufferListsContext = v3->Next.ReturnNetBufferListsContext;
  if ( ReturnNetBufferListsObject->Type == 17 )
  {
LABEL_19:
    v3->Next.ReturnNetBufferListsHandler(v3->Next.ReturnNetBufferListsContext, v7, v6);
  }
  else if ( !ndisIterativeDataPathDisabled
         && ((v6 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v18 = (struct _NET_BUFFER_LIST **)v67;
    v7->Scratch = 0LL;
    v7->ChildRefCount = v6;
    v19 = ReturnNetBufferListsObject->Type == 5;
    v54 = CurrentIrql;
    v67[2] = 0LL;
    v67[0] = v7;
    v67[1] = v7;
    if ( v19 )
    {
      while ( *v18 )
      {
        v20 = ReturnNetBufferListsObject;
        v21 = *(_QWORD *)&ReturnNetBufferListsObject[106].Type + 96 * CurrentIrql;
        v22 = *(_BYTE *)(v21 + 88);
        *(_BYTE *)(v21 + 88) = 1;
        v23 = *v18;
        v68 = v22;
        *v18 = 0LL;
        if ( v23 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v23->Scratch;
            ChildRefCount = v23->ChildRefCount;
            v23->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              ReturnNetBufferListsObject,
              ReturnNetBufferListsHandler,
              ReturnNetBufferListsContext,
              v23,
              0,
              0,
              ChildRefCount);
            v23 = Scratch;
          }
          while ( Scratch );
          v22 = v68;
        }
        *(_BYTE *)(v21 + 88) = 0;
        if ( v22 )
        {
          *(_BYTE *)(v21 + 88) = 1;
          v7 = *v18;
          goto LABEL_34;
        }
        ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[138].Type;
        v18 = (struct _NET_BUFFER_LIST **)(v21 + 72);
        ReturnNetBufferListsHandler = *(void (**)(void))&v20[132].Type;
        ReturnNetBufferListsContext = *(void **)&v20[134].Type;
        CurrentIrql = v54;
        if ( ReturnNetBufferListsObject->Type != 5 )
        {
          v7 = *(PNET_BUFFER_LIST *)(v21 + 72);
          goto LABEL_34;
        }
      }
    }
    else
    {
LABEL_34:
      if ( v7 )
      {
        *v18 = 0LL;
        do
        {
          v25 = (struct _NET_BUFFER_LIST *)v7->Scratch;
          v53 = v7->ChildRefCount;
          v7->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(
            ReturnNetBufferListsObject,
            ReturnNetBufferListsHandler,
            ReturnNetBufferListsContext,
            v7,
            0,
            0,
            v53);
          v7 = v25;
        }
        while ( v25 );
      }
    }
  }
  else
  {
    if ( v3->Header.Type != 5 )
      goto LABEL_19;
    Parameter[0] = 0LL;
    Parameter[1] = ReturnNetBufferListsObject;
    Parameter[2] = ReturnNetBufferListsContext;
    v65 = 3LL;
    Parameter[3] = ReturnNetBufferListsHandler;
    Parameter[4] = v7;
    v64 = 0;
    v66 = v6;
    if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v3, v7, 0);
  }
  if ( (v60.DatapathCyclesMask & 0x20) != 0 )
  {
    ndisPcwEndCycleCounter(&v60, 5u, 0x12uLL);
    if ( v70 != 2 )
      KeLowerIrql(v70);
  }
LABEL_21:
  if ( (v56.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v56, 4u, 0x11uLL);
    if ( v51 != 2 )
      KeLowerIrql(v51);
  }
}
