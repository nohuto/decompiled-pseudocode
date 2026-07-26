/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008070 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DF78 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C006A964 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     McTemplateK0qqqqqqqq @ 0x1C006D30C (McTemplateK0qqqqqqqq.c)
 *     ndisMDummyReceiveNetBufferLists @ 0x1C006DD94 (ndisMDummyReceiveNetBufferLists.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  unsigned int v5; // ebx
  NDIS_PORT_NUMBER v6; // esi
  _DWORD *v7; // rdi
  int v9; // eax
  struct _NET_BUFFER_LIST *v10; // r15
  LARGE_INTEGER *v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  char v15; // si
  ULONG v16; // ebx
  struct NDIS_NBL_TRACKER_HANDLE__ *v17; // rdx
  char v18; // r15
  __int64 v19; // r12
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // r13
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned __int64 v23; // rbx
  struct NDIS_NBL_TRACKER_HANDLE__ *v24; // r15
  unsigned __int8 *SourceHandle; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  unsigned __int8 v32; // dl
  __int64 v33; // rax
  __int64 CurrentIrql; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v35; // rbx
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // r12
  void *NextIndicateReceiveNetBufferListsContext; // r13
  struct _NDIS_FILTER_BLOCK *v38; // rdi
  char v39; // di
  __int64 v40; // r8
  unsigned __int64 v41; // r9
  int v42; // esi
  struct _NET_BUFFER_LIST **v43; // r15
  struct _NET_BUFFER_LIST *v44; // rdx
  unsigned __int64 v45; // rcx
  struct _NDIS_FILTER_BLOCK *v46; // rdx
  __int64 v47; // r14
  char v48; // al
  struct _NET_BUFFER_LIST *v49; // rsi
  unsigned int v50; // ecx
  unsigned int v51; // edx
  unsigned int v52; // eax
  struct _NET_BUFFER_LIST *v53; // rsi
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // eax
  struct _NET_BUFFER_LIST *i; // rax
  _SLIST_HEADER *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rbx
  unsigned int v62; // r15d
  unsigned int v63; // esi
  unsigned int v64; // eax
  unsigned int *v65; // r14
  __int64 v66; // rdi
  int v67; // r12d
  _DWORD *v68; // r13
  ULONG v69; // ecx
  ULONG v70; // eax
  unsigned int v71; // ecx
  NDIS_HANDLE v72; // rdi
  __int64 v73; // rax
  unsigned int Number; // ecx
  int v75; // r9d
  struct _NET_BUFFER_LIST *v76; // r13
  int v77; // ebx
  char v78; // [rsp+58h] [rbp-B0h]
  char v79; // [rsp+68h] [rbp-A0h] BYREF
  char v80; // [rsp+69h] [rbp-9Fh] BYREF
  KIRQL v81; // [rsp+6Ah] [rbp-9Eh]
  ULONG v82; // [rsp+6Ch] [rbp-9Ch]
  __int64 v83; // [rsp+70h] [rbp-98h]
  NDIS_HANDLE v84; // [rsp+78h] [rbp-90h]
  struct _NET_BUFFER_LIST *v85; // [rsp+80h] [rbp-88h]
  NDIS_PORT_NUMBER v86; // [rsp+88h] [rbp-80h]
  __int64 v87; // [rsp+90h] [rbp-78h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v88; // [rsp+98h] [rbp-70h]
  struct NDIS_PCW_CONTEXT v89; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v90[3]; // [rsp+B8h] [rbp-50h] BYREF
  char Parameter[8]; // [rsp+D0h] [rbp-38h] BYREF
  struct _NDIS_FILTER_BLOCK *v92; // [rsp+D8h] [rbp-30h]
  void *v93; // [rsp+E0h] [rbp-28h]
  void (*v94)(void); // [rsp+E8h] [rbp-20h]
  struct _NET_BUFFER_LIST *v95; // [rsp+F0h] [rbp-18h]
  NDIS_PORT_NUMBER v96; // [rsp+F8h] [rbp-10h]
  int v97; // [rsp+FCh] [rbp-Ch]
  int v98; // [rsp+100h] [rbp-8h]
  ULONG v99; // [rsp+104h] [rbp-4h]
  LARGE_INTEGER v100; // [rsp+108h] [rbp+0h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+110h] [rbp+8h] BYREF

  v5 = *((_DWORD *)MiniportAdapterHandle + 20);
  v6 = PortNumber;
  v7 = MiniportAdapterHandle;
  v89.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v89.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
  v9 = *((_DWORD *)MiniportAdapterHandle + 928);
  v10 = NetBufferList;
  LODWORD(v83) = NumberOfNetBufferLists;
  v86 = PortNumber;
  v85 = NetBufferList;
  v84 = MiniportAdapterHandle;
  v81 = 2;
  v89.DatapathCyclesMask = v5;
  v89.CurrentCpu = -1;
  v82 = ReceiveFlags;
  if ( (v9 & 0x800) != 0 )
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle,
      *((enum _NDIS_MEDIUM *)MiniportAdapterHandle + 459));
  if ( (v5 & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
      v81 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v89, 2u);
  }
  if ( (v7[674] & 1) != 0 )
  {
    v11 = (LARGE_INTEGER *)v10;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v100 = PerformanceCounter;
    if ( v10 )
    {
      do
      {
        v11[44] = PerformanceCounter;
        v11 = (LARGE_INTEGER *)v11->QuadPart;
      }
      while ( v11 );
    }
  }
  if ( !*((_BYTE *)v7 + 2680) )
  {
    ndisMDummyReceiveNetBufferLists((_DWORD)v7, (_DWORD)v10, PortNumber, NumberOfNetBufferLists, ReceiveFlags);
    goto LABEL_124;
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v10, NumberOfNetBufferLists);
  v13 = 0LL;
  if ( ndisNblTrackerMode )
  {
    *(_QWORD *)&PortNumber = 0LL;
    v14 = *((_QWORD *)v7 + 315);
    v15 = ndisNblTrackerEpoch;
    v16 = ReceiveFlags & 1;
    v87 = 0LL;
    v17 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v84 + 514);
    v18 = 0;
    v88 = v17;
    v80 = ReceiveFlags & 1;
    v19 = 0LL;
    v79 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      LOBYTE(PortNumber) = (ReceiveFlags & 2) != 0;
      ndisNblTrackerRecordEvent(v85, v17, PortNumber + 128, (void *)v14, v16);
    }
    v20 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
    {
      v21 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v20 |= 2LL * (v15 & 1);
    }
    else
    {
      v21 = (unsigned __int8 *)v20;
    }
    Alignment = v85;
    if ( v85 )
    {
      while ( 1 )
      {
        v23 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        v24 = v88;
        while ( Alignment->NetBufferListInfo[27] == (void *)v23 )
        {
          if ( !v23 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFDuLL);
          if ( (v23 & 4) == 0 )
          {
            SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
            if ( SourceHandle )
            {
              v32 = *SourceHandle;
              if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || v32 == 5 )
              {
                if ( SourceHandle != v21 || Alignment->ParentNetBufferList )
                {
                  ++v13;
                  v26 = v20;
                }
                else
                {
                  ++v19;
                  v26 = 24LL;
                  ++v13;
                }
                goto LABEL_30;
              }
              if ( (unsigned __int8)byte_1C00A026A >= 3u )
                WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v32);
            }
            else if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
            }
          }
          v26 = v20 | 4;
LABEL_30:
          Alignment->NetBufferListInfo[27] = (void *)v26;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        if ( (v23 & 1) != 0 )
          ndisNblTrackerUpdateOwnershipCount(v23, v87 - v13, &v80, &v79);
        v87 = v13;
        if ( !Alignment )
        {
          LOBYTE(v16) = v80;
          v18 = v79;
          break;
        }
      }
    }
    v27 = v13 - v19;
    if ( (v20 & 1) != 0 && v27 )
    {
      if ( !(_BYTE)v16 && !v18 )
      {
        LOBYTE(v16) = KeGetCurrentIrql() == 2;
        v80 = v16;
      }
      v10 = v85;
      v28 = v20;
      v6 = v86;
      v29 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
      v30 = 2 * ((v28 >> 1) & 1);
      if ( (_BYTE)v16 )
      {
        v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v31 += v27;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v27);
      }
    }
    else
    {
      v6 = v86;
      v10 = v85;
    }
    v7 = v84;
    LODWORD(v13) = 0;
  }
  if ( byte_1C009FE30 )
  {
    v33 = *((_QWORD *)v7 + 743);
    if ( v33 )
    {
      if ( (*(_DWORD *)(v33 + 52) & 1) != 0 )
        PktMonClientNblLogNdis(v7 + 1480, v10, *(_QWORD *)&PortNumber, 1LL);
    }
  }
  HIDWORD(CurrentIrql) = -2176;
  v35 = (struct NDIS_NBL_TRACKER_HANDLE__ *)MEMORY[0xFFFFF78000000320];
  NextIndicateReceiveNetBufferListsHandler = (void (*)(void))*((_QWORD *)v7 + 330);
  NextIndicateReceiveNetBufferListsContext = (void *)*((_QWORD *)v7 + 314);
  v38 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v7 + 316);
  v88 = (struct NDIS_NBL_TRACKER_HANDLE__ *)MEMORY[0xFFFFF78000000320];
  if ( v38->Header.Type == 17 )
  {
    v39 = v82;
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, ULONG))NextIndicateReceiveNetBufferListsHandler)(
      NextIndicateReceiveNetBufferListsContext,
      v10,
      v6,
      (unsigned int)v83,
      v82);
  }
  else
  {
    v40 = v82;
    v42 = v82 & 2;
    if ( (v82 & 2) == 0
      && ndisIterativeDataPathDisabled == v42
      && ((v82 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v43 = (struct _NET_BUFFER_LIST **)v90;
      v44 = v85;
      v90[2] = 0LL;
      LODWORD(v87) = CurrentIrql;
      v85->Status = v86;
      v45 = v44->Link.Alignment;
      v90[0] = v44;
      v90[1] = v44;
      v44->Scratch = 0LL;
      v44->ChildRefCount = v40;
      if ( v45 )
      {
        *(_QWORD *)(v45 + 112) = (unsigned int)v83;
        CurrentIrql = (unsigned int)v87;
      }
      v41 = (unsigned __int64)v44;
      if ( v38->Header.Type == 5 )
      {
        v40 = 0LL;
        while ( *v43 )
        {
          v46 = v38;
          v47 = (__int64)v38->IterativeDataPathTracker[CurrentIrql];
          v48 = *(_BYTE *)(v47 + 64);
          *(_BYTE *)(v47 + 64) = 1;
          v41 = (unsigned __int64)*v43;
          v79 = v48;
          *v43 = 0LL;
          if ( v41 )
          {
            do
            {
              v49 = *(struct _NET_BUFFER_LIST **)(v41 + 112);
              v50 = *(_DWORD *)(v41 + 132);
              v51 = *(_DWORD *)(v41 + 140);
              if ( *(_QWORD *)v41 )
                v52 = *(_DWORD *)(*(_QWORD *)v41 + 112LL);
              else
                v52 = 1;
              *(_DWORD *)(v41 + 132) = 0;
              ndisCallReceiveHandler(
                v38,
                NextIndicateReceiveNetBufferListsHandler,
                NextIndicateReceiveNetBufferListsContext,
                (struct _NET_BUFFER_LIST *)v41,
                v51,
                v52,
                v50);
              v41 = (unsigned __int64)v49;
            }
            while ( v49 );
            v35 = v88;
            v46 = v38;
            v48 = v79;
            v40 = 0LL;
          }
          *(_BYTE *)(v47 + 64) = 0;
          if ( v48 )
          {
            *(_BYTE *)(v47 + 64) = 1;
            v41 = (unsigned __int64)*v43;
            goto LABEL_78;
          }
          v38 = (struct _NDIS_FILTER_BLOCK *)v38->NextIndicateReceiveNetBufferListsObject;
          v43 = (struct _NET_BUFFER_LIST **)(v47 + 48);
          NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v46->NextIndicateReceiveNetBufferListsHandler;
          NextIndicateReceiveNetBufferListsContext = v46->NextIndicateReceiveNetBufferListsContext;
          CurrentIrql = (unsigned int)v87;
          if ( v38->Header.Type != 5 )
          {
            v41 = *(_QWORD *)(v47 + 48);
            goto LABEL_78;
          }
        }
      }
      else
      {
LABEL_78:
        if ( v41 )
        {
          *v43 = 0LL;
          do
          {
            v53 = *(struct _NET_BUFFER_LIST **)(v41 + 112);
            v54 = *(_DWORD *)(v41 + 132);
            v55 = *(_DWORD *)(v41 + 140);
            if ( *(_QWORD *)v41 )
              v56 = *(_DWORD *)(*(_QWORD *)v41 + 112LL);
            else
              v56 = 1;
            *(_DWORD *)(v41 + 132) = 0;
            ndisCallReceiveHandler(
              v38,
              NextIndicateReceiveNetBufferListsHandler,
              NextIndicateReceiveNetBufferListsContext,
              (struct _NET_BUFFER_LIST *)v41,
              v55,
              v56,
              v54);
            v41 = (unsigned __int64)v53;
          }
          while ( v53 );
        }
      }
    }
    else
    {
      v96 = v86;
      v99 = v82;
      v92 = v38;
      v93 = NextIndicateReceiveNetBufferListsContext;
      v97 = 2;
      v94 = NextIndicateReceiveNetBufferListsHandler;
      v95 = v10;
      v98 = v83;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        if ( byte_1C009FE30 && (*((_DWORD *)&v38->PktMonComp + 13) & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)v38 + 800, (_DWORD)v10, v40, 1, -1073741670, -536866813);
        for ( i = v10; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
          i->Status = -1073741670;
        v58 = (_SLIST_HEADER *)v10;
        if ( v10 )
        {
          do
          {
            v58 = (_SLIST_HEADER *)v58->Alignment;
            LODWORD(v13) = v13 + 1;
          }
          while ( v58 );
        }
        _InterlockedExchangeAdd(&v38->DroppedReceiveNbls, v13);
        if ( !v42 )
          ndisQueueStackExpansionFallbackNbls(v38, v10, 0);
      }
    }
    v39 = v82;
  }
  v59 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - (_QWORD)v35);
  v60 = (unsigned __int128)(v59 * (__int128)0x346DC5D63886594BLL) >> 64;
  v61 = v59 / 10000;
  v62 = v39 & 1;
  if ( (v39 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    v63 = 512;
    v64 = KeGetPcr()->Prcb.Number << 12;
    LODWORD(v87) = 512;
    v65 = (unsigned int *)(*((_QWORD *)v84 + 415) + v64);
    v66 = *v65;
    v67 = ndisPeriodicReceivesNblCounts[v66];
    v68 = &ndisPeriodicReceivesNblCounts[v66];
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
    {
      v41 = 512LL;
    }
    else
    {
      v40 = 1024LL;
      if ( WatchdogInformation.DpcTimeLimit )
      {
        HIDWORD(v60) = 0;
        v69 = v67 * (1024 - (WatchdogInformation.DpcTimeCount << 10) / WatchdogInformation.DpcTimeLimit);
        LODWORD(v60) = v69 % (unsigned int)v83;
        v63 = v69 / (unsigned int)v83;
      }
      if ( WatchdogInformation.DpcWatchdogLimit )
      {
        v70 = (WatchdogInformation.DpcWatchdogCount << 10) / WatchdogInformation.DpcWatchdogLimit;
        if ( v70 > 0x200 )
          v70 = 1024;
        HIDWORD(v60) = 0;
        v40 = v67 * (1024 - v70);
        LODWORD(v60) = (unsigned int)v40 % (unsigned int)v83;
        v41 = (unsigned int)v40 / (unsigned int)v83;
      }
      else
      {
        v41 = (unsigned int)v87;
      }
    }
    v71 = v66 + 1;
    if ( (unsigned int)(v66 + 1) < 0xB && v63 < 0x200 )
      goto LABEL_112;
    if ( (_DWORD)v66 && v63 > 0x300 )
    {
      v71 = v66 - 1;
LABEL_112:
      v72 = v84;
      if ( v71 != 11 )
      {
        *v65 = v71;
        if ( (byte_1C00A2085 & 2) != 0 )
        {
          v78 = v41;
          v73 = v71;
          Number = KeGetPcr()->Prcb.Number;
          v75 = (*((_QWORD *)v72 + 507) >> 24) & 0xFFFFFF;
          McTemplateK0qqqqqqqq(
            Number,
            v75,
            (_DWORD)v72 + 4040,
            v75,
            Number,
            v83,
            v61,
            *v68,
            ndisPeriodicReceivesNblCounts[v73],
            v63,
            v78);
        }
      }
      goto LABEL_116;
    }
  }
  v72 = v84;
LABEL_116:
  v76 = v85;
  v77 = v82 & 2;
  if ( (v82 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      v85,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v72 + 315),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v72 + 514),
      NdisNblTrackerEvent_ReturnedToMiniportResources,
      v62);
  if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C009FE30) && v77 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v76, v60, v40, v41);
LABEL_124:
  if ( (v89.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v89, 2u, 0xFuLL);
    if ( v81 != 2 )
      KeLowerIrql(v81);
  }
}
