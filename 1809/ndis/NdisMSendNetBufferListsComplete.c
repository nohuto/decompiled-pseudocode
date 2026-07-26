/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C0001C90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0002090 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0006AE0 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006AB70 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 v3; // r9
  PNET_BUFFER_LIST v4; // r13
  NDIS_HANDLE v5; // rsi
  struct _NET_BUFFER_LIST *Context; // r8
  __int64 updated; // rax
  unsigned __int64 v9; // rbx
  char v10; // r14
  char *v11; // r12
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  _SLIST_HEADER *v15; // r14
  unsigned __int64 Region; // rdi
  void (*v17)(void); // r13
  _QWORD *v18; // rdi
  void (*v19)(void); // r10
  void *v20; // rcx
  bool v21; // zf
  struct _NET_BUFFER_LIST **v22; // r14
  struct _NET_BUFFER_LIST *v23; // r9
  _QWORD *v24; // r12
  __int64 v25; // r15
  char v26; // al
  struct _NET_BUFFER_LIST *v27; // r9
  void (*v28)(void); // rsi
  void *v29; // r13
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v31; // rbx
  _SLIST_HEADER *Alignment; // rax
  __int64 v33; // rdx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-79h]
  unsigned int v35; // [rsp+38h] [rbp-79h]
  char v36; // [rsp+48h] [rbp-69h] BYREF
  KIRQL v37; // [rsp+49h] [rbp-68h]
  void *v38; // [rsp+50h] [rbp-61h]
  void (*v39)(void); // [rsp+58h] [rbp-59h]
  char *v40; // [rsp+60h] [rbp-51h] BYREF
  __int64 v41; // [rsp+68h] [rbp-49h] BYREF
  struct NDIS_PCW_CONTEXT v42; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v43[3]; // [rsp+88h] [rbp-29h] BYREF
  char Parameter[8]; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD *v45; // [rsp+A8h] [rbp-9h]
  void *v46; // [rsp+B0h] [rbp-1h]
  void (*v47)(void); // [rsp+B8h] [rbp+7h]
  PNET_BUFFER_LIST v48; // [rsp+C0h] [rbp+Fh]
  int v49; // [rsp+C8h] [rbp+17h]
  __int64 v50; // [rsp+CCh] [rbp+1Bh]
  ULONG v51; // [rsp+D4h] [rbp+23h]
  PNET_BUFFER_LIST v53; // [rsp+120h] [rbp+6Fh]
  char v54; // [rsp+130h] [rbp+7Fh] BYREF

  v53 = NetBufferList;
  v4 = NetBufferList;
  v5 = MiniportAdapterHandle;
  if ( (*((_DWORD *)MiniportAdapterHandle + 928) & 0x800) != 0 )
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)MiniportAdapterHandle);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(58LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, v5, v4);
  Context = 0LL;
  if ( *((_QWORD *)v5 + 561) )
  {
    Alignment = (_SLIST_HEADER *)v4;
    v33 = 0LL;
    if ( v4 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        v33 = (unsigned int)(v33 + 1);
      }
      while ( Alignment );
    }
    ndisClearBusy(v5, v33, 52LL);
    Context = 0LL;
  }
  v42.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v5 + 5);
  v42.DatapathEventsMask = *((_DWORD *)v5 + 12);
  v42.DatapathCyclesMask = *((_DWORD *)v5 + 20);
  updated = (unsigned int)ndisNblTrackerMode;
  v42.CurrentCpu = -1;
  v37 = 2;
  if ( ndisNblTrackerMode )
  {
    NetBufferList = (PNET_BUFFER_LIST)*((_QWORD *)v5 + 514);
    v9 = *((_QWORD *)v5 + 325);
    v10 = ndisNblTrackerEpoch;
    v11 = 0LL;
    v39 = (void (*)(void))NetBufferList;
    v12 = 0LL;
    v40 = 0LL;
    v38 = 0LL;
    v41 = 0LL;
    v36 = SendCompleteFlags & 1;
    v54 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(
        v4,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)NetBufferList,
        0x93u,
        (void *)v9,
        SendCompleteFlags & 1);
    v13 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v13 & 1) != 0 )
    {
      v14 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      updated = 2LL * (v10 & 1);
      v13 |= updated;
    }
    else
    {
      v14 = v13;
    }
    v15 = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      do
      {
        Region = v15[22].Region;
        v17 = v39;
        do
        {
          if ( v15[22].Region != Region )
            break;
          updated = ndisNblTrackerTransferOneNbl(v15, Region, v17, v13, v14, &v40, &v41);
          v15 = (_SLIST_HEADER *)v15->Alignment;
        }
        while ( v15 );
        v11 = v40;
        if ( (Region & 1) != 0 )
          updated = ndisNblTrackerUpdateOwnershipCount(Region, (_BYTE *)v38 - v40, &v36, &v54);
        v38 = v11;
      }
      while ( v15 );
      v4 = v53;
      v12 = v41;
    }
    if ( (v13 & 1) != 0 )
      updated = ndisNblTrackerUpdateOwnershipCount(v13, &v11[-v12], &v36, &v54);
    v5 = MiniportAdapterHandle;
    Context = 0LL;
  }
  if ( byte_1C009FE30 )
    updated = ndisMarkNetBufferListCorrelationIdsAsUsed(v4, NetBufferList, 0LL, v3);
  if ( (v42.DatapathCyclesMask & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v37 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v42, 8u);
    Context = 0LL;
  }
  v18 = (_QWORD *)*((_QWORD *)v5 + 326);
  v19 = (void (*)(void))*((_QWORD *)v5 + 329);
  v20 = (void *)*((_QWORD *)v5 + 324);
  v39 = v19;
  v21 = *(_BYTE *)v18 == 17;
  v38 = v20;
  if ( v21 )
    goto LABEL_45;
  if ( ndisIterativeDataPathDisabled
    || (SendCompleteFlags & 1) == 0 && (updated = KeGetCurrentIrql(), (_BYTE)updated != 2) )
  {
    if ( *(_BYTE *)v5 == 5 )
    {
      v46 = v20;
      v49 = (int)Context;
      v45 = v18;
      v50 = 1LL;
      v47 = v19;
      v48 = v4;
      v51 = SendCompleteFlags;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, Context) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v4, 1u);
      goto LABEL_41;
    }
LABEL_45:
    ((void (__fastcall *)(void *, PNET_BUFFER_LIST, _QWORD))v19)(v20, v4, SendCompleteFlags);
    goto LABEL_41;
  }
  LODWORD(updated) = KeGetPcr()->Prcb.Number;
  v22 = (struct _NET_BUFFER_LIST **)v43;
  v4->Scratch = Context;
  v4->ChildRefCount = SendCompleteFlags;
  v23 = v4;
  v21 = *(_BYTE *)v18 == 5;
  LODWORD(v40) = updated;
  v43[2] = 0LL;
  v43[0] = v4;
  v43[1] = v4;
  if ( v21 )
  {
    while ( *v22 )
    {
      v24 = v18;
      v25 = v18[54] + 96 * updated;
      v26 = *(_BYTE *)(v25 + 40);
      *(_BYTE *)(v25 + 40) = 1;
      v27 = *v22;
      v54 = v26;
      *v22 = Context;
      if ( v27 )
      {
        v28 = v39;
        v29 = v38;
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v27->Scratch;
          ChildRefCount = v27->ChildRefCount;
          v27->ChildRefCount = (int)Context;
          ndisCallSendCompleteHandler(v18, v28, v29, v27, (unsigned int)Context, (unsigned int)Context, ChildRefCount);
          v27 = Scratch;
          Context = 0LL;
        }
        while ( Scratch );
        v5 = MiniportAdapterHandle;
        v4 = v53;
        v19 = v39;
        v26 = v54;
      }
      *(_BYTE *)(v25 + 40) = 0;
      if ( v26 )
      {
        v20 = v38;
        *(_BYTE *)(v25 + 40) = 1;
        v23 = *v22;
        goto LABEL_38;
      }
      v18 = (_QWORD *)v18[62];
      v22 = (struct _NET_BUFFER_LIST **)(v25 + 24);
      v19 = (void (*)(void))v24[59];
      v20 = (void *)v24[60];
      updated = (unsigned int)v40;
      v21 = *(_BYTE *)v18 == 5;
      v39 = v19;
      v38 = v20;
      if ( !v21 )
      {
        v23 = *(struct _NET_BUFFER_LIST **)(v25 + 24);
        goto LABEL_38;
      }
    }
  }
  else
  {
LABEL_38:
    if ( v23 )
    {
      *v22 = Context;
      do
      {
        v31 = (struct _NET_BUFFER_LIST *)v23->Scratch;
        v35 = v23->ChildRefCount;
        v23->ChildRefCount = (int)Context;
        ndisCallSendCompleteHandler(v18, v19, v20, v23, (unsigned int)Context, (unsigned int)Context, v35);
        v19 = v39;
        v23 = v31;
        v20 = v38;
        LODWORD(Context) = 0;
      }
      while ( v31 );
    }
  }
LABEL_41:
  if ( (v42.DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v42, 8u, 0x15uLL);
    if ( v37 != 2 )
      KeLowerIrql(v37);
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(59LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, v5, v4);
}
