/*
 * XREFs of ndisMSendNBLToMiniportInternal @ 0x1C000DCC0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     ndisMSendNBLToMiniport @ 0x1C000DCA0 (ndisMSendNBLToMiniport.c)
 *     ndisReplaySendNbls @ 0x1C00B8B38 (ndisReplaySendNbls.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C007AC14 (ndisMSetTimestampOnNblChainTx.c)
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0089940 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisSetBusyAsync @ 0x1C00B98E0 (ndisSetBusyAsync.c)
 *     PktMonClientNblLogNdis @ 0x1C00C97B0 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  struct _NET_BUFFER_LIST *Alignment; // r15
  unsigned int PcwDatapathEventMask; // eax
  _NDIS_M_DRIVER_BLOCK *v10; // rcx
  KIRQL v11; // di
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int TimestampFlags; // eax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  char v15; // r11
  char v16; // si
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // r9
  unsigned __int64 v22; // rsi
  _UNKNOWN **v23; // r11
  unsigned __int8 *SourceHandle; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdi
  __int64 v29; // r9
  _QWORD *v30; // rcx
  _SLIST_HEADER *v31; // rax
  int v32; // edx
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  int v34; // [rsp+40h] [rbp-88h]
  __int64 v35; // [rsp+48h] [rbp-80h]
  unsigned __int8 *v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  __int64 v38; // [rsp+60h] [rbp-68h]
  struct NDIS_PCW_CONTEXT v39; // [rsp+70h] [rbp-58h] BYREF
  char v40; // [rsp+D0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v41; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+E0h] [rbp+18h]

  v42 = a3;
  v41 = (struct _NET_BUFFER_LIST *)a2;
  DriverHandle = a1->DriverHandle;
  v39.PcwBlock = 0LL;
  *(_QWORD *)&v39.DatapathEventsMask = 0LL;
  Alignment = (struct _NET_BUFFER_LIST *)a2;
  v39.CurrentCpu = -1;
  PcwDatapathEventMask = a1->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || (v10 = DriverHandle, a1->PcwDatapathCycleMask) )
  {
    v39.DatapathEventsMask = PcwDatapathEventMask;
    v10 = DriverHandle;
    v39.DatapathCyclesMask = a1->PcwDatapathCycleMask;
    v39.PcwBlock = a1->PcwDataBlock;
    if ( !v39.PcwBlock )
    {
      v10 = a1->DriverHandle;
      Alignment = v41;
      v39.PcwBlock = a1->PcwDataBlock;
    }
  }
  v11 = 2;
  SendNetBufferListsHandler = v10->MiniportDriverCharacteristics.SendNetBufferListsHandler;
  if ( a1->MiniportMediaType == NdisMedium802_3
    && (a1->LoopbackOpens && (a1->NumOpens > 1u || a1->ReceiveFilters) || (a4 & 2) != 0 || (a1->Flags & 0x4000) != 0) )
  {
    ndisMLoopbackNetBufferLists(a1, Alignment, a3, a4, &v41);
    Alignment = v41;
    if ( !v41 )
      return;
    a3 = v42;
  }
  if ( a5 || !a1->SelectiveSuspend )
  {
LABEL_9:
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_10;
    NblTracker = a1->NblTracker;
    v15 = 0;
    v16 = ndisNblTrackerEpoch;
    LODWORD(v17) = a4 & 1;
    v34 = (int)v17;
    v18 = 0LL;
    v35 = 0LL;
    v19 = 0LL;
    v38 = 0LL;
    v37 = 0LL;
    v40 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(Alignment, 0LL, 0x92u, NblTracker, (unsigned int)v17);
      a3 = v42;
      v18 = 0LL;
      LOBYTE(v17) = v34;
      v19 = 0LL;
      v15 = 0;
    }
    v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
    {
      v21 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v20 |= 2LL * (v16 & 1);
    }
    else
    {
      v21 = (unsigned __int8 *)v20;
    }
    v36 = v21;
    if ( !Alignment )
    {
LABEL_41:
      a2 = v18 - v19;
      if ( (v20 & 1) != 0 && a2 )
      {
        if ( !(_BYTE)v17 && !v15 )
          LOBYTE(v17) = KeGetCurrentIrql() == 2;
        v27 = v20;
        v28 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
        v29 = 2 * ((v27 >> 1) & 1);
        if ( (_BYTE)v17 )
        {
          v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v30 += a2;
        }
        else
        {
          a2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), a2);
        }
        Alignment = v41;
      }
      v11 = 2;
LABEL_10:
      if ( byte_1C00E5E20 )
      {
        CompContext = a1->PktMonEdge.CompContext;
        if ( CompContext )
        {
          if ( (*((_DWORD *)CompContext + 3) & 1) != 0 )
          {
            PktMonClientNblLogNdis(&a1->PktMonEdge, Alignment, a3, 2LL);
            a3 = v42;
          }
        }
      }
      TimestampFlags = a1->TimestampFlags;
      if ( (TimestampFlags & 2) != 0 )
      {
        a2 = 0LL;
      }
      else
      {
        if ( (TimestampFlags & 4) == 0 )
        {
LABEL_13:
          if ( SLOBYTE(v39.DatapathCyclesMask) < 0 )
          {
            if ( (a4 & 1) == 0 )
              v11 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter(&v39, 7u);
            a3 = v42;
          }
          if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
            ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
              a1->MiniportAdapterContext,
              Alignment,
              a3,
              a4,
              a1,
              a1->VerifierContext,
              SendNetBufferListsHandler);
          else
            SendNetBufferListsHandler(a1->MiniportAdapterContext, Alignment, a3, a4);
          if ( SLOBYTE(v39.DatapathCyclesMask) < 0 )
          {
            ndisPcwEndCycleCounter(&v39, 7u, 0x14uLL);
            if ( v11 != 2 )
              KeLowerIrql(v11);
          }
          return;
        }
        LOBYTE(a2) = 1;
      }
      ndisMSetTimestampOnNblChainTx(Alignment, a2);
      a3 = v42;
      goto LABEL_13;
    }
LABEL_25:
    v22 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    v23 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v22 )
      {
LABEL_34:
        LODWORD(v17) = v34;
        v26 = v38 - v18;
        v15 = v40;
        if ( (v22 & 1) != 0 && v26 )
        {
          if ( !(_BYTE)v34 && !v40 )
          {
            v15 = 1;
            v40 = 1;
            LOBYTE(v17) = KeGetCurrentIrql() == 2;
            v34 = (int)v17;
          }
          a3 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( (_BYTE)v17 )
          {
            v17 = (_QWORD *)(*(_QWORD *)a3 + (KeGetPcr()->Prcb.Number << 12));
            *v17 += v26;
            LOBYTE(v17) = v34;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 8), v26);
          }
        }
        v21 = v36;
        v38 = v18;
        if ( !Alignment )
        {
          Alignment = v41;
          a3 = v42;
          goto LABEL_41;
        }
        goto LABEL_25;
      }
      if ( !v22 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, v18, a3, v21);
      if ( (v22 & 4) != 0 )
        goto LABEL_68;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        a3 = *SourceHandle;
        if ( (unsigned __int8)(a3 - 17) <= 1u || (_BYTE)a3 == 5 )
        {
          if ( SourceHandle != v21 || Alignment->ParentNetBufferList )
          {
            ++v18;
            v25 = v20;
            v35 = v18;
          }
          else
          {
            ++v19;
            v25 = 24LL;
            ++v18;
            v37 = v19;
            v35 = v18;
          }
          goto LABEL_33;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v23 )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment,
            a3);
          goto LABEL_67;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v23 )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v18,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)Alignment);
LABEL_67:
        v18 = v35;
        v23 = &WPP_RECORDER_INITIALIZED;
        v21 = v36;
        v19 = v37;
      }
LABEL_68:
      v25 = v20 | 4;
LABEL_33:
      Alignment->NetBufferListInfo[27] = (void *)v25;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_34;
    }
  }
  v31 = (_SLIST_HEADER *)Alignment;
  v32 = 0;
  if ( Alignment )
  {
    do
    {
      v31 = (_SLIST_HEADER *)v31->Alignment;
      ++v32;
    }
    while ( v31 );
  }
  if ( (unsigned __int8)ndisSetBusyAsync((_DWORD)a1, v32, 52, (_DWORD)Alignment, a3) )
  {
    a3 = v42;
    goto LABEL_9;
  }
}
