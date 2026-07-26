/*
 * XREFs of NdisSendNetBufferLists @ 0x1C0002DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0006F90 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMFakeSendNetBufferLists @ 0x1C0023E20 (ndisMFakeSendNetBufferLists.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0058230 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005BD5C (ndisFLoopbackNetBufferLists.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006AC4C (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v4; // rsi
  KIRQL v5; // r12
  ULONG v6; // edi
  NDIS_PORT_NUMBER v7; // r15d
  struct _NET_BUFFER_LIST *v8; // r13
  _QWORD *v9; // rbx
  unsigned int v10; // r14d
  char v11; // bl
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebx
  char v14; // si
  __int64 v15; // r15
  __int64 v16; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v17; // r10
  unsigned __int64 v18; // rdi
  unsigned __int8 *v19; // r13
  PNET_BUFFER_LIST Alignment; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int8 *SourceHandle; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  bool v27; // zf
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  __int64 v30; // rax
  unsigned int DatapathEventsMask; // ebx
  unsigned int Number; // r8d
  _SLIST_HEADER *v33; // rdx
  unsigned int v34; // r9d
  _QWORD *Region; // rax
  int i; // ecx
  char *v37; // rcx
  int v38; // edx
  int v39; // edx
  _DWORD *v40; // rcx
  struct _NET_BUFFER_LIST *v41; // rbx
  __int64 v42; // r13
  unsigned int v43; // eax
  int v44; // esi
  struct _NDIS_FILTER_BLOCK *v45; // rdi
  void (*NextSendNetBufferListsHandler)(void); // r15
  void *NextSendNetBufferListsContext; // r12
  unsigned int v48; // ecx
  struct _NET_BUFFER_LIST **v49; // r14
  struct _NET_BUFFER_LIST *v50; // rax
  struct _NDIS_FILTER_BLOCK *v51; // r13
  __int64 v52; // rsi
  char v53; // al
  struct _NET_BUFFER_LIST *v54; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v56; // r9
  struct _NET_BUFFER_LIST *v57; // rbx
  unsigned int NdisReserved2; // eax
  int v59; // r8d
  struct _NET_BUFFER_LIST *v60; // rax
  int Context; // [rsp+20h] [rbp-B9h]
  unsigned int Contexta; // [rsp+20h] [rbp-B9h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-A9h]
  unsigned int v64; // [rsp+30h] [rbp-A9h]
  char v65; // [rsp+40h] [rbp-99h] BYREF
  char v66; // [rsp+41h] [rbp-98h] BYREF
  KIRQL v67; // [rsp+42h] [rbp-97h]
  KIRQL v68; // [rsp+43h] [rbp-96h]
  __int64 v69; // [rsp+48h] [rbp-91h]
  struct NDIS_PCW_CONTEXT v70; // [rsp+50h] [rbp-89h] BYREF
  struct _NET_BUFFER_LIST *v71; // [rsp+68h] [rbp-71h] BYREF
  __int64 v72; // [rsp+70h] [rbp-69h]
  int v73; // [rsp+78h] [rbp-61h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v74; // [rsp+80h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v75; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v76[3]; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE Parameter[8]; // [rsp+B8h] [rbp-21h] BYREF
  struct _NDIS_FILTER_BLOCK *v78; // [rsp+C0h] [rbp-19h]
  void *v79; // [rsp+C8h] [rbp-11h]
  void (*v80)(void); // [rsp+D0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v81; // [rsp+D8h] [rbp-1h]
  NDIS_PORT_NUMBER v82; // [rsp+E0h] [rbp+7h]
  __int64 v83; // [rsp+E4h] [rbp+Bh]
  ULONG v84; // [rsp+ECh] [rbp+13h]
  NDIS_PORT_NUMBER v87; // [rsp+150h] [rbp+77h]

  v87 = PortNumber;
  v4 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = 2;
  v6 = SendFlags;
  v69 = v4;
  v7 = PortNumber;
  v68 = 2;
  v8 = NetBufferLists;
  v70.CurrentCpu = -1;
  v9 = NdisBindingHandle;
  v70.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v70.DatapathEventsMask = *(_DWORD *)(v4 + 48);
  v70.DatapathCyclesMask = *(_DWORD *)(v4 + 80);
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferLists, PortNumber, SendFlags, (ULONG_PTR)NdisBindingHandle);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(68LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, v9, v8);
  v10 = 0;
  if ( ndisNblTrackerMode )
  {
    *(_QWORD *)&PortNumber = NdisBindingHandle;
    v11 = v6;
    v12 = *(_QWORD *)(v4 + 2576);
    v13 = v11 & 1;
    v14 = ndisNblTrackerEpoch;
    v15 = 0LL;
    v72 = 0LL;
    v16 = 0LL;
    v17 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
    v74 = v17;
    v66 = v13;
    v65 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v8, v17, 0x8Fu, (void *)v12, v13);
      v17 = v74;
    }
    v18 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
      v19 = *(unsigned __int8 **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v19 = (unsigned __int8 *)v18;
    if ( (v18 & 1) != 0 )
      v18 |= 2LL * (v14 & 1);
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      while ( 1 )
      {
        v21 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v21 )
        {
          if ( !v21 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFDuLL);
          if ( (v21 & 4) == 0 )
          {
            SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
            if ( SourceHandle )
            {
              v29 = *SourceHandle;
              if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || v29 == 5 )
              {
                if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
                {
                  ++v15;
                  v23 = v18;
                }
                else
                {
                  ++v16;
                  v23 = 24LL;
                  ++v15;
                }
                goto LABEL_24;
              }
              if ( (unsigned __int8)byte_1C00A026A >= 3u )
                WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v29);
            }
            else if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
            }
          }
          v23 = v18 | 4;
LABEL_24:
          v17 = v74;
          Alignment->NetBufferListInfo[27] = (void *)v23;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        if ( (v21 & 1) != 0 )
          ndisNblTrackerUpdateOwnershipCount(v21, v72 - v15, &v66, &v65);
        v17 = v74;
        v72 = v15;
        if ( !Alignment )
        {
          LOBYTE(v13) = v66;
          LOBYTE(v10) = v65;
          break;
        }
      }
    }
    v24 = v15 - v16;
    if ( (v18 & 1) != 0 && v24 )
    {
      if ( !(_BYTE)v13 && !(_BYTE)v10 )
      {
        LOBYTE(v13) = KeGetCurrentIrql() == 2;
        v66 = v13;
      }
      v4 = v69;
      v8 = NetBufferLists;
      v25 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
      v5 = 2;
      v26 = 2 * ((v18 >> 1) & 1);
      v27 = (_BYTE)v13 == 0;
      v9 = NdisBindingHandle;
      if ( v27 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 8 * v26 + 48), v24);
      }
      else
      {
        v28 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v28 + *(_QWORD *)(v25 + 8 * v26 + 40)) += v24;
      }
    }
    else
    {
      v9 = NdisBindingHandle;
      v5 = 2;
      v8 = NetBufferLists;
      v4 = v69;
    }
    v7 = v87;
    v10 = 0;
    v6 = SendFlags;
  }
  if ( byte_1C009FE30 )
  {
    v30 = v9[125];
    if ( v30 )
    {
      if ( (*(_DWORD *)(v30 + 52) & 1) != 0 )
        PktMonClientNblLogNdis(v9 + 122, v8, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  DatapathEventsMask = v70.DatapathEventsMask;
  if ( (v70.DatapathEventsMask & 0x200140) != 0 || (v70.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v68 = v5;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      DatapathEventsMask = v70.DatapathEventsMask;
      v70.CurrentCpu = Number;
      ++*(_QWORD *)((char *)&v70.PcwBlock->DatapathEventReferences[12]
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * Number);
    }
    else
    {
      Number = v70.CurrentCpu;
    }
    if ( !v5 && (DatapathEventsMask & 0x200000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v70.DatapathEventsMask;
        v70.CurrentCpu = Number;
      }
      ++*(wchar_t **)((char *)&v70.PcwBlock->TotalInstanceName.Buffer
                    + ndisPcwOffsetToPerCpuData
                    + ndisPcwPerCpuDataStride * Number);
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v33 = (_SLIST_HEADER *)v8;
      v34 = 0;
      if ( v8 )
      {
        do
        {
          Region = (_QWORD *)v33->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          v33 = (_SLIST_HEADER *)v33->Alignment;
          v34 += i;
        }
        while ( v33 );
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v70.DatapathEventsMask;
          v70.CurrentCpu = Number;
        }
        *(_QWORD *)((char *)&v70.PcwBlock->DatapathEventReferences[16]
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * Number) += v34;
      }
      if ( !v5 && (DatapathEventsMask & 0x400000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v70.CurrentCpu = Number;
        }
        v37 = (char *)v70.PcwBlock + ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * Number;
        *((_QWORD *)v37 + 26) += v34;
      }
    }
    if ( (v70.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v70, 6u);
    }
    else if ( v5 != 2 )
    {
      KeLowerIrql(v5);
    }
  }
  v38 = *(_DWORD *)(v4 + 2684);
  if ( v38 )
  {
    v39 = v38 - 1;
    if ( v39 )
    {
      if ( v39 == 1 )
        ndisMSendNetBufferListsToPackets(v4, v8, v7, v6);
      else
        ndisMFakeSendNetBufferLists(v4, v8, v7, v6);
    }
    else
    {
      LOBYTE(Context) = 0;
      ndisMSendNBLToMiniportInternal(v4, v8, v7, v6, Context);
    }
  }
  else
  {
    v40 = *(_DWORD **)(v4 + 2584);
    v41 = v8;
    v71 = v8;
    if ( *(_BYTE *)v40 == 5
      && (v40[14] & 0x8000) != 0
      && !v40[86]
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 2007))
       || (v6 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists(v40, v8, (__int64)&v71);
      v41 = v71;
    }
    if ( v41 )
    {
      v42 = *(_QWORD *)(v4 + 2568);
      v75.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
      v75.DatapathEventsMask = *(_DWORD *)(v4 + 48);
      v43 = *(_DWORD *)(v4 + 80);
      v75.DatapathCyclesMask = v43;
      v67 = 2;
      LOBYTE(v73) = 0;
      v72 = v42;
      v75.CurrentCpu = -1;
      if ( v42 == v4 && (v43 & 0x80u) != 0 )
      {
        v44 = v6 & 1;
        if ( (v6 & 1) == 0 )
          v67 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v75, 7u);
        LOBYTE(v44) = !(v6 & 1);
        v73 = v44;
        v4 = v69;
      }
      v45 = *(struct _NDIS_FILTER_BLOCK **)(v4 + 2584);
      NextSendNetBufferListsHandler = *(void (**)(void))(v4 + 2664);
      NextSendNetBufferListsContext = *(void **)(v4 + 2568);
      if ( v45->Header.Type == 17 )
      {
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))(v4 + 2664))(
          *(_QWORD *)(v4 + 2568),
          v41,
          v87,
          SendFlags);
      }
      else if ( !ndisIterativeDataPathDisabled && ((SendFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        v48 = KeGetPcr()->Prcb.Number;
        v49 = (struct _NET_BUFFER_LIST **)v76;
        v76[2] = 0LL;
        v50 = v71;
        LODWORD(v74) = v48;
        v76[0] = v71;
        v76[1] = v71;
        v71->Scratch = 0LL;
        v50->ChildRefCount = SendFlags;
        v50->Status = v87;
        if ( v45->Header.Type == 5 )
        {
          while ( *v49 )
          {
            v51 = v45;
            v52 = (__int64)v45->IterativeDataPathTracker[v48];
            v53 = *(_BYTE *)(v52 + 16);
            *(_BYTE *)(v52 + 16) = 1;
            v54 = *v49;
            v65 = v53;
            *v49 = 0LL;
            if ( v54 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v54->Scratch;
                ChildRefCount = v54->ChildRefCount;
                Contexta = v54->NdisReserved2;
                v54->ChildRefCount = 0;
                ndisCallSendHandler(
                  v45,
                  NextSendNetBufferListsHandler,
                  NextSendNetBufferListsContext,
                  v54,
                  Contexta,
                  0,
                  ChildRefCount);
                v54 = Scratch;
              }
              while ( Scratch );
              v53 = v65;
              v51 = v45;
              v48 = (unsigned int)v74;
            }
            *(_BYTE *)(v52 + 16) = 0;
            if ( v53 )
            {
              *(_BYTE *)(v52 + 16) = 1;
LABEL_116:
              v4 = v69;
              v42 = v72;
              goto LABEL_117;
            }
            v45 = (struct _NDIS_FILTER_BLOCK *)v45->NextSendNetBufferListsObject;
            v49 = (struct _NET_BUFFER_LIST **)v52;
            NextSendNetBufferListsHandler = (void (*)(void))v51->NextSendNetBufferListsHandler;
            NextSendNetBufferListsContext = v51->NextSendNetBufferListsContext;
            if ( v45->Header.Type != 5 )
              goto LABEL_116;
          }
          v42 = v72;
          v4 = v69;
        }
        else
        {
LABEL_117:
          v56 = *v49;
          if ( *v49 )
          {
            *v49 = 0LL;
            do
            {
              v57 = (struct _NET_BUFFER_LIST *)v56->Scratch;
              v64 = v56->ChildRefCount;
              NdisReserved2 = v56->NdisReserved2;
              v56->ChildRefCount = 0;
              ndisCallSendHandler(
                v45,
                NextSendNetBufferListsHandler,
                NextSendNetBufferListsContext,
                v56,
                NdisReserved2,
                0,
                v64);
              v56 = v57;
            }
            while ( v57 );
          }
        }
      }
      else
      {
        v84 = SendFlags;
        v78 = v45;
        v79 = NextSendNetBufferListsContext;
        v83 = 0LL;
        v80 = NextSendNetBufferListsHandler;
        v81 = v41;
        v82 = v87;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        {
          if ( byte_1C009FE30 && (*((_DWORD *)&v45->PktMonComp + 13) & 2) != 0 )
            PktMonClientNblDropNdis((_DWORD)v45 + 800, (_DWORD)v41, v59, 2, -1073741670, -536866812);
          v60 = v41;
          do
          {
            v60->Status = -1073741670;
            v60 = (struct _NET_BUFFER_LIST *)v60->Link.Alignment;
          }
          while ( v60 );
          do
          {
            v41 = (struct _NET_BUFFER_LIST *)v41->Link.Alignment;
            ++v10;
          }
          while ( v41 );
          _InterlockedExchangeAdd(&v45->DroppedSendNbls, v10);
          ndisQueueStackExpansionFallbackNbls(v45, v71, 1u);
        }
      }
      if ( v42 == v4 )
      {
        if ( SLOBYTE(v75.DatapathCyclesMask) < 0 )
          ndisPcwEndCycleCounter(&v75, 7u, 0x14uLL);
        if ( (_BYTE)v73 && v67 != 2 )
          KeLowerIrql(v67);
      }
      v8 = NetBufferLists;
    }
  }
  if ( (v70.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v70, 6u, 0x13uLL);
    if ( v68 != 2 )
      KeLowerIrql(v68);
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(69LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, NdisBindingHandle, v8);
}
