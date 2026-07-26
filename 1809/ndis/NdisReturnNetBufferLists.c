/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C00036A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008160 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006A888 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisReturnPeriodicReceives @ 0x1C006EB34 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  KIRQL v3; // r11
  __int64 v4; // r9
  __int64 v5; // rsi
  PNET_BUFFER_LIST v7; // r14
  int v8; // eax
  unsigned int DatapathEventsMask; // edi
  PNET_BUFFER_LIST v10; // rax
  __int64 CurrentIrql; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // rdx
  unsigned int v13; // r9d
  unsigned __int64 v14; // rbx
  char v15; // di
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  unsigned __int8 *v19; // r8
  _SLIST_HEADER *v20; // r15
  unsigned __int64 Region; // rdi
  unsigned __int8 *v22; // rcx
  unsigned __int8 v23; // dl
  int v24; // r9d
  unsigned __int64 v25; // r8
  char v26; // r10
  unsigned __int64 v27; // r12
  int v28; // ebx
  _QWORD *v29; // rdi
  void (*v30)(void); // r15
  void *v31; // r12
  struct _NET_BUFFER_LIST **v32; // rsi
  bool v33; // zf
  _QWORD *v34; // r13
  __int64 v35; // r14
  char v36; // al
  struct _NET_BUFFER_LIST *v37; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v39; // rbx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  unsigned int Number; // r9d
  _SLIST_HEADER *Alignment; // rax
  __int64 v50; // rax
  KIRQL v51; // r11
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v53; // [rsp+38h] [rbp-D0h]
  int v54; // [rsp+48h] [rbp-C0h]
  unsigned int v55; // [rsp+48h] [rbp-C0h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v56; // [rsp+50h] [rbp-B8h]
  struct NDIS_PCW_CONTEXT v57; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v58; // [rsp+70h] [rbp-98h]
  __int64 v59; // [rsp+78h] [rbp-90h]
  struct NDIS_PCW_CONTEXT v60; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v61[3]; // [rsp+98h] [rbp-70h] BYREF
  char Parameter[8]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD *v63; // [rsp+B8h] [rbp-50h]
  void *v64; // [rsp+C0h] [rbp-48h]
  void (*v65)(void); // [rsp+C8h] [rbp-40h]
  PNET_BUFFER_LIST v66; // [rsp+D0h] [rbp-38h]
  int v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+DCh] [rbp-2Ch]
  int v69; // [rsp+E4h] [rbp-24h]
  char v70; // [rsp+140h] [rbp+38h]
  char v71; // [rsp+140h] [rbp+38h]
  ULONG v72; // [rsp+148h] [rbp+40h]
  KIRQL v73; // [rsp+150h] [rbp+48h]

  v72 = ReturnFlags;
  v3 = 2;
  v4 = ReturnFlags;
  v5 = *((_QWORD *)NdisBindingHandle + 2);
  v7 = NetBufferLists;
  v57.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v57.DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v57.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v8 = *((_DWORD *)NdisBindingHandle + 56);
  v57.CurrentCpu = -1;
  if ( (v8 & 1) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisBindingHandle);
    v4 = v72;
    v3 = 2;
  }
  DatapathEventsMask = v57.DatapathEventsMask;
  if ( (v57.DatapathEventsMask & 0x180028) != 0 || (v57.DatapathCyclesMask & 0x10) != 0 )
  {
    if ( (v4 & 1) == 0 )
      v3 = KfRaiseIrql(2u);
    if ( (v57.DatapathEventsMask & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)&ReturnFlags = ndisPcwOffsetToPerCpuData;
      DatapathEventsMask = v57.DatapathEventsMask;
      NetBufferLists = (PNET_BUFFER_LIST)(Number * ndisPcwPerCpuDataStride);
      v57.CurrentCpu = Number;
      ++*(_NET_BUFFER_LIST **)((char *)&NetBufferLists->ParentNetBufferList
                             + (unsigned __int64)v57.PcwBlock->DatapathEventReferences
                             + ndisPcwOffsetToPerCpuData);
    }
    else
    {
      Number = v57.CurrentCpu;
    }
    if ( !v3 && (DatapathEventsMask & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v57.DatapathEventsMask;
        v57.CurrentCpu = Number;
      }
      NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
      ++*(_QWORD *)((char *)&v57.PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 24);
    }
    if ( (DatapathEventsMask & 0x100020) != 0 )
    {
      *(_QWORD *)&ReturnFlags = 0LL;
      Alignment = (_SLIST_HEADER *)v7;
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
          DatapathEventsMask = v57.DatapathEventsMask;
          v57.CurrentCpu = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
        *(_QWORD *)((char *)&v57.PcwBlock->DatapathEventReferences[10]
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData) += ReturnFlags;
      }
      if ( !v3 && (DatapathEventsMask & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v57.CurrentCpu = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
        *(_QWORD *)((char *)&v57.PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 32) += ReturnFlags;
      }
    }
    if ( (v57.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v57, 4u);
    }
    else if ( v3 != 2 )
    {
      KeLowerIrql(v3);
    }
    v4 = v72;
  }
  v60.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v60.DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v60.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v10 = v7;
  v73 = 2;
  for ( v60.CurrentCpu = -1; v10; v10 = (PNET_BUFFER_LIST)v10->Link.Alignment )
    v10->Flags = v10->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C009FE30 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7, NetBufferLists, *(_QWORD *)&ReturnFlags, v4);
  if ( *(_DWORD *)(v5 + 3248) )
  {
    v50 = ndisReturnPeriodicReceives(v5, v7, *(_QWORD *)&ReturnFlags, v4);
    LODWORD(v4) = v72;
    v7 = (PNET_BUFFER_LIST)v50;
  }
  if ( !v7 )
    goto LABEL_36;
  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_32;
  v12 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
  v13 = v4 & 1;
  v14 = *(_QWORD *)(v5 + 2552);
  v15 = ndisNblTrackerEpoch;
  v16 = 0LL;
  v54 = v13;
  v17 = 0LL;
  v56 = v12;
  v59 = 0LL;
  v70 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(v7, v12, 0x87u, (void *)v14, v13);
    v12 = v56;
  }
  v18 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v18 & 1) != 0 )
  {
    v19 = *(unsigned __int8 **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    CurrentIrql = 2LL * (v15 & 1);
    v18 |= CurrentIrql;
  }
  else
  {
    v19 = (unsigned __int8 *)v18;
  }
  v58 = v19;
  v20 = (_SLIST_HEADER *)v7;
  do
  {
    Region = v20[22].Region;
    while ( v20[22].Region == Region )
    {
      if ( !Region && !v20[7].Region )
        v20[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFDuLL);
      if ( (Region & 4) != 0 )
        goto LABEL_111;
      v22 = (unsigned __int8 *)v20[7].Region;
      if ( v22 )
      {
        v23 = *v22;
        if ( (unsigned __int8)(*v22 - 17) <= 1u || v23 == 5 )
        {
          if ( v22 != v19 || v20[1].Region )
          {
            v12 = v56;
            ++v16;
            CurrentIrql = v18;
          }
          else
          {
            v12 = v56;
            ++v17;
            ++v16;
            CurrentIrql = 24LL;
          }
          goto LABEL_27;
        }
        if ( (unsigned __int8)byte_1C00A026A >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v20, v23);
LABEL_109:
          v19 = v58;
        }
        v12 = v56;
        goto LABEL_111;
      }
      if ( (unsigned __int8)byte_1C00A026A >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v20);
        goto LABEL_109;
      }
LABEL_111:
      CurrentIrql = v18 | 4;
LABEL_27:
      v20[22].Region = CurrentIrql;
      v20 = (_SLIST_HEADER *)v20->Alignment;
      if ( !v20 )
        break;
    }
    v24 = v54;
    v25 = v59 - v16;
    v26 = v70;
    if ( (Region & 1) != 0 && v25 )
    {
      if ( !(_BYTE)v54 && !v70 )
      {
        v26 = 1;
        v70 = 1;
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql == 2 )
          v24 = 1;
        else
          LOBYTE(v24) = 0;
        v54 = v24;
      }
      v40 = Region;
      v41 = Region & 0xFFFFFFFFFFFFFFF8uLL;
      v42 = 2 * ((v40 >> 1) & 1);
      if ( (_BYTE)v24 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v43 = (_QWORD *)(*(_QWORD *)(v41 + 8 * v42 + 40) + (unsigned int)CurrentIrql);
        *v43 += v25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8 * v42 + 48), v25);
      }
    }
    v19 = v58;
    v12 = v56;
    v59 = v16;
  }
  while ( v20 );
  v27 = v16 - v17;
  if ( (v18 & 1) != 0 && v27 )
  {
    if ( !(_BYTE)v24 && !v26 )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v24) = (_BYTE)CurrentIrql == 2;
    }
    v44 = v18;
    v45 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
    v46 = 2 * ((v44 >> 1) & 1);
    v33 = (_BYTE)v24 == 0;
    LODWORD(v4) = v72;
    if ( v33 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 8 * v46 + 48), v27);
    }
    else
    {
      CurrentIrql = KeGetPcr()->Prcb.Number << 12;
      v47 = (_QWORD *)(*(_QWORD *)(v45 + 8 * v46 + 40) + (unsigned int)CurrentIrql);
      *v47 += v27;
    }
  }
  else
  {
    LODWORD(v4) = v72;
  }
LABEL_32:
  v28 = v4 & 1;
  if ( (v60.DatapathCyclesMask & 0x20) != 0 )
  {
    if ( (v4 & 1) == 0 )
      v73 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v60, 5u);
    LODWORD(v4) = v72;
  }
  v29 = *(_QWORD **)(v5 + 2560);
  v30 = *(void (**)(void))(v5 + 2656);
  v31 = *(void **)(v5 + 2544);
  if ( *(_BYTE *)v29 == 17 )
  {
LABEL_34:
    (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))(v5 + 2656))(*(_QWORD *)(v5 + 2544), v7, (unsigned int)v4);
  }
  else if ( !ndisIterativeDataPathDisabled && (v28 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v32 = (struct _NET_BUFFER_LIST **)v61;
    v7->ChildRefCount = v4;
    v7->Scratch = 0LL;
    v33 = *(_BYTE *)v29 == 5;
    v55 = CurrentIrql;
    v61[2] = 0LL;
    v61[0] = v7;
    v61[1] = v7;
    if ( v33 )
    {
      while ( *v32 )
      {
        v34 = v29;
        v35 = v29[54] + 96 * CurrentIrql;
        v36 = *(_BYTE *)(v35 + 88);
        *(_BYTE *)(v35 + 88) = 1;
        v37 = *v32;
        v71 = v36;
        *v32 = 0LL;
        if ( v37 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v37->Scratch;
            ChildRefCount = v37->ChildRefCount;
            v37->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(v29, v30, v31, v37, 0, 0, ChildRefCount);
            v37 = Scratch;
          }
          while ( Scratch );
          v36 = v71;
        }
        *(_BYTE *)(v35 + 88) = 0;
        if ( v36 )
        {
          *(_BYTE *)(v35 + 88) = 1;
          v7 = *v32;
          goto LABEL_50;
        }
        v29 = (_QWORD *)v29[70];
        v32 = (struct _NET_BUFFER_LIST **)(v35 + 72);
        v30 = (void (*)(void))v34[67];
        v31 = (void *)v34[68];
        CurrentIrql = v55;
        if ( *(_BYTE *)v29 != 5 )
        {
          v7 = *(PNET_BUFFER_LIST *)(v35 + 72);
          goto LABEL_50;
        }
      }
    }
    else
    {
LABEL_50:
      if ( v7 )
      {
        *v32 = 0LL;
        do
        {
          v39 = (struct _NET_BUFFER_LIST *)v7->Scratch;
          v53 = v7->ChildRefCount;
          v7->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(v29, v30, v31, v7, 0, 0, v53);
          v7 = v39;
        }
        while ( v39 );
      }
    }
  }
  else
  {
    if ( *(_BYTE *)v5 != 5 )
      goto LABEL_34;
    v69 = v4;
    v63 = v29;
    v64 = v31;
    v68 = 3LL;
    v65 = v30;
    v66 = v7;
    v67 = 0;
    if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v7, 0);
  }
  if ( (v60.DatapathCyclesMask & 0x20) != 0 )
  {
    ndisPcwEndCycleCounter(&v60, 5u, 0x12uLL);
    if ( v73 != 2 )
      KeLowerIrql(v73);
  }
LABEL_36:
  if ( (v57.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v57, 4u, 0x11uLL);
    if ( v51 != 2 )
      KeLowerIrql(v51);
  }
}
