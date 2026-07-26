/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C000AE30
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

void __fastcall ndisMTopReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // rsi
  __int64 v8; // r14
  struct _NET_BUFFER_LIST *v9; // rbx
  unsigned int Number; // r13d
  __int64 v11; // r8
  __int64 v12; // rdx
  char *PoolWithTag; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rax
  _QWORD *v15; // r13
  struct _NDIS_OPEN_BLOCK *v16; // r14
  struct _NDIS_OPEN_BLOCK *v17; // rdx
  __int64 v18; // r8
  struct _NDIS_OPEN_BLOCK *v19; // r14
  unsigned int v20; // esi
  unsigned int v21; // r12d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  unsigned int v28; // esi
  unsigned int v29; // r12d
  unsigned int i; // ebx
  __int64 v31; // rdx
  unsigned int v32; // eax
  KIRQL v33; // r13
  struct _NET_BUFFER_LIST *v34; // rcx
  __int64 CurrentIrql; // rax
  void (*v36)(void); // r15
  void *v37; // r12
  _QWORD *v38; // r14
  struct _NET_BUFFER_LIST **v39; // r13
  bool v40; // zf
  _QWORD *v41; // rdx
  __int64 v42; // rsi
  char v43; // al
  struct _NET_BUFFER_LIST *v44; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v46; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-71h]
  unsigned int v48; // [rsp+38h] [rbp-71h]
  char v49; // [rsp+48h] [rbp-61h]
  int v50; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v51; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v52; // [rsp+50h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v53; // [rsp+58h] [rbp-51h] BYREF
  _QWORD Parameter[5]; // [rsp+78h] [rbp-31h] BYREF
  int v55; // [rsp+A0h] [rbp-9h]
  __int64 v56; // [rsp+A4h] [rbp-5h]
  BOOL v57; // [rsp+ACh] [rbp+3h]
  _QWORD v58[3]; // [rsp+B0h] [rbp+7h] BYREF
  char v60; // [rsp+108h] [rbp+5Fh]
  char v61; // [rsp+110h] [rbp+67h]

  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *))(a1 + 2144))(a1, a2);
    return;
  }
  if ( !*(_BYTE *)(a1 + 2665) )
  {
    (*(void (__fastcall **)(__int64))(a1 + 2136))(a1);
    return;
  }
  v9 = 0LL;
  v52 = 0;
  v49 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v11 = 2096LL * Number,
        v52 = Number,
        v12 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v11),
        (unsigned int)v12 < 3) )
  {
    v49 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v12 + v11 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v11) = v12 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v17,
          4,
          10,
          (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids);
      }
      v29 = 1;
      goto LABEL_30;
    }
  }
  Alignment = v7;
  v15 = *(_QWORD **)(v8 + 400);
  PoolWithTag[692] = 0;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v9 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v16 = (struct _NDIS_OPEN_BLOCK *)v15[41];
  if ( v16 && v16->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v16, v7, a3, a4, a5);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
LABEL_36:
    v29 = 1;
    goto LABEL_28;
  }
  *(_QWORD *)PoolWithTag = a1;
  *((_QWORD *)PoolWithTag + 3) = v7;
  *((_QWORD *)PoolWithTag + 1) = v15;
  *((_DWORD *)PoolWithTag + 4) = a5;
  *((_QWORD *)PoolWithTag + 4) = v9;
  *((_DWORD *)PoolWithTag + 10) = a3;
  *((_DWORD *)PoolWithTag + 11) = a4;
  ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
  if ( !*((_QWORD *)PoolWithTag + 8) && !*((_DWORD *)PoolWithTag + 172) )
    goto LABEL_36;
  if ( !*v15 || a3 )
    PoolWithTag[692] = 1;
  else
    ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
  if ( v16 )
    goto LABEL_36;
  v19 = (struct _NDIS_OPEN_BLOCK *)v15[1];
  if ( v19 )
  {
    v20 = *((_DWORD *)PoolWithTag + 172);
    v21 = *((_DWORD *)PoolWithTag + 4) | 2;
    do
    {
      FilterNextOpen = v19->FilterNextOpen;
      v23 = 0LL;
      do
      {
        v24 = (unsigned int)v23;
        v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v23 + 64];
        v23 = (unsigned int)(v23 + 1);
        if ( v25 )
          ndisMIndicateNetBufferListsToOpen(
            v19,
            v25,
            *((_DWORD *)PoolWithTag + 10),
            *(_DWORD *)&PoolWithTag[40 * v24 + 80],
            v21);
      }
      while ( (unsigned int)v23 <= v20 );
      v19 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
  v17 = (struct _NDIS_OPEN_BLOCK *)v15[2];
  if ( !v17 )
    goto LABEL_36;
  if ( (a5 & 2) != 0 )
  {
    ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v17);
    goto LABEL_36;
  }
  v26 = *((_DWORD *)PoolWithTag + 4);
  v27 = *((_DWORD *)PoolWithTag + 10);
  v28 = *((_DWORD *)PoolWithTag + 172);
  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
    ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
  v29 = 1;
  for ( i = 1; i <= v28; ++i )
  {
    v31 = i;
    ndisMIndicateNetBufferListsToOpen(
      *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v31 + 56],
      *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v31 + 64],
      v27,
      *(_DWORD *)&PoolWithTag[40 * v31 + 80],
      v26);
  }
LABEL_28:
  if ( PoolWithTag[692] )
  {
    v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
    v8 = a1;
LABEL_30:
    if ( !v7 )
      goto LABEL_31;
    if ( byte_1C00E5E20 && (*(_DWORD *)(v8 + 5812) & 2) != 0 )
      PktMonClientNblDropNdis(v8 + 5800, (_DWORD)v7, v18, 1, -1073676270, -536866809);
    if ( (a5 & 2) != 0 )
      goto LABEL_31;
    v50 = a5 & 1;
    v32 = *(_DWORD *)(v8 + 48);
    v33 = 2;
    v61 = 2;
    v53.PcwBlock = 0LL;
    *(_QWORD *)&v53.DatapathEventsMask = 0LL;
    v53.CurrentCpu = -1;
    if ( v32 || *(_DWORD *)(v8 + 80) )
    {
      v53.DatapathEventsMask = v32;
      v53.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
      v53.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
      if ( !v53.PcwBlock )
        v53.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
    }
    v34 = v7;
    do
    {
      v34->Flags = v34->Flags & 0xFFFFFFF4 | 8;
      v34 = (struct _NET_BUFFER_LIST *)v34->Link.Alignment;
    }
    while ( v34 );
    CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled
      || byte_1C00E5E20 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
    {
      CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v7, v17, v18);
    }
    if ( *(_DWORD *)(v8 + 3224) )
    {
      CurrentIrql = (__int64)ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v8, v7);
      v7 = (struct _NET_BUFFER_LIST *)CurrentIrql;
    }
    if ( !v7 )
      goto LABEL_31;
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      if ( (a5 & 1) == 0 )
        v29 = 0;
      ndisNblTrackerTransferOwnershipInternal(
        v7,
        0LL,
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v8 + 2536),
        NdisNblTrackerEvent_ProtocolReturned,
        v29);
    }
    if ( (v53.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (a5 & 1) == 0 )
      {
        v33 = KfRaiseIrql(2u);
        v61 = v33;
      }
      ndisPcwStartCycleCounter(&v53, 5u);
    }
    v36 = *(void (**)(void))(v8 + 2640);
    v37 = *(void **)(v8 + 2528);
    v38 = *(_QWORD **)(v8 + 2544);
    if ( *(_BYTE *)v38 == 17 )
      goto LABEL_51;
    if ( !ndisIterativeDataPathDisabled )
    {
      if ( (a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
      {
        LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
        v39 = (struct _NET_BUFFER_LIST **)v58;
        v7->Scratch = 0LL;
        v7->ChildRefCount = v50 != 0;
        v40 = *(_BYTE *)v38 == 5;
        v51 = CurrentIrql;
        v58[2] = 0LL;
        v58[0] = v7;
        v58[1] = v7;
        if ( v40 )
        {
          while ( *v39 )
          {
            v41 = v38;
            v42 = v38[53] + 96 * CurrentIrql;
            v43 = *(_BYTE *)(v42 + 88);
            *(_BYTE *)(v42 + 88) = 1;
            v44 = *v39;
            v60 = v43;
            *v39 = 0LL;
            if ( v44 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v44->Scratch;
                ChildRefCount = v44->ChildRefCount;
                v44->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v38, v36, v37, v44, 0, 0, ChildRefCount);
                v44 = Scratch;
              }
              while ( Scratch );
              v43 = v60;
              v41 = v38;
            }
            *(_BYTE *)(v42 + 88) = 0;
            if ( v43 )
            {
              *(_BYTE *)(v42 + 88) = 1;
              v7 = *v39;
              goto LABEL_73;
            }
            v38 = (_QWORD *)v38[69];
            v39 = (struct _NET_BUFFER_LIST **)(v42 + 72);
            v36 = (void (*)(void))v41[66];
            v37 = (void *)v41[67];
            CurrentIrql = v51;
            if ( *(_BYTE *)v38 != 5 )
            {
              v7 = *(struct _NET_BUFFER_LIST **)(v42 + 72);
              goto LABEL_73;
            }
          }
        }
        else
        {
LABEL_73:
          if ( v7 )
          {
            *v39 = 0LL;
            do
            {
              v46 = (struct _NET_BUFFER_LIST *)v7->Scratch;
              v48 = v7->ChildRefCount;
              v7->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(v38, v36, v37, v7, 0, 0, v48);
              v7 = v46;
            }
            while ( v46 );
          }
        }
        v33 = v61;
        goto LABEL_52;
      }
    }
    if ( *(_BYTE *)a1 != 5 )
    {
LABEL_51:
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, bool))v36)(v37, v7, v50 != 0);
    }
    else
    {
      Parameter[0] = 0LL;
      Parameter[1] = v38;
      Parameter[2] = v37;
      v56 = 3LL;
      Parameter[3] = v36;
      Parameter[4] = v7;
      v55 = 0;
      v57 = v50 != 0;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)a1, v7, 0);
    }
LABEL_52:
    if ( (v53.DatapathCyclesMask & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter(&v53, 5u, 0x12uLL);
      if ( v33 != 2 )
        KeLowerIrql(v33);
    }
  }
LABEL_31:
  if ( v49 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v52);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
