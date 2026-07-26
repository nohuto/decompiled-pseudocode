/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C0002560
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002160 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00263D8 (ndisIndicateToPmodeOpens.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006D9F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006E210 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisTraceRcv @ 0x1C0051244 (ndisTraceRcv.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // r10d
  unsigned int CurrentCpu; // r9d
  KIRQL v9; // r11
  unsigned int v10; // r12d
  unsigned int v13; // ebx
  bool v14; // cl
  unsigned int Flags; // edx
  int v16; // edi
  char v17; // bl
  unsigned int v18; // r8d
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  _SLIST_HEADER *Alignment; // r12
  unsigned __int64 Region; // rbx
  unsigned __int8 *v24; // rcx
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // r8
  char v29; // cl
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 Clock; // rax
  __int64 v35; // rax
  KIRQL v36; // al
  __int16 v37; // ax
  __int64 v38; // rax
  KIRQL v39; // [rsp+30h] [rbp-41h]
  char v40; // [rsp+31h] [rbp-40h]
  unsigned int v41; // [rsp+34h] [rbp-3Dh]
  int v42; // [rsp+38h] [rbp-39h]
  struct NDIS_PCW_CONTEXT v43; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-19h]
  __int64 v45; // [rsp+60h] [rbp-11h]
  unsigned __int8 *v46; // [rsp+68h] [rbp-9h]
  __int64 v47; // [rsp+70h] [rbp-1h]
  __int64 v48; // [rsp+78h] [rbp+7h]
  char v49; // [rsp+D0h] [rbp+5Fh] BYREF
  char v50; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int v51; // [rsp+E0h] [rbp+6Fh]
  unsigned int v52; // [rsp+E8h] [rbp+77h]

  v52 = a4;
  v51 = (unsigned int)a3;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v7 = a4;
  CurrentCpu = -1;
  v9 = 2;
  v10 = (unsigned int)a3;
  v13 = *(_DWORD *)(v5 + 48);
  v43.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v43.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v48 = 0LL;
  v44 = v13;
  v43.DatapathEventsMask = v13;
  v41 = -1;
  v43.CurrentCpu = -1;
  v39 = 2;
  v14 = a2->SourceHandle == (void *)a1;
  Flags = a2->Flags;
  LOBYTE(a3) = (Flags & 0x200) != 0;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == (void *)a1 )
  {
    v14 = 1;
LABEL_76:
    if ( (Flags & 0x200) == 0 )
    {
LABEL_40:
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v5, a2, a5 & 1, 0LL);
      return;
    }
    goto LABEL_3;
  }
  if ( v14 )
    goto LABEL_76;
LABEL_3:
  if ( *(_BYTE *)(v5 + 2006) && !*(_DWORD *)(a1 + 432)
    || (*(_DWORD *)(a1 + 432) & 0x10000) != 0 && !v14 && (Flags & 0x80u) != 0 )
  {
    goto LABEL_40;
  }
  if ( (_BYTE)dword_1C00A2098 )
  {
    v40 = 1;
    Clock = WmiGetClock(0LL, 0LL, a3);
    CurrentCpu = -1;
    v9 = 2;
    v7 = v52;
    v48 = Clock;
  }
  else
  {
    v40 = 0;
  }
  v16 = a5;
  v42 = a5;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_31;
  v17 = ndisNblTrackerEpoch;
  v47 = 0LL;
  v18 = 133;
  v45 = 0LL;
  if ( (a5 & 2) == 0 )
    v18 = 132;
  v19 = 0LL;
  v50 = 0;
  v20 = *(_QWORD *)(a1 + 584);
  v49 = a5 & 1;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v18, (void *)v20, a5 & 1);
    v19 = 0LL;
  }
  v21 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v21 & 1) != 0 )
  {
    a3 = *(unsigned __int8 **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v21 |= 2LL * (v17 & 1);
  }
  else
  {
    a3 = (unsigned __int8 *)v21;
  }
  v46 = a3;
  Alignment = (_SLIST_HEADER *)a2;
  do
  {
    Region = Alignment[22].Region;
    while ( Alignment[22].Region == Region )
    {
      if ( !Region && !Alignment[7].Region )
        Alignment[7].Region = ndisSourceHandleFromOwner(32LL);
      if ( (Region & 4) != 0 )
        goto LABEL_84;
      v24 = (unsigned __int8 *)Alignment[7].Region;
      if ( v24 )
      {
        v25 = *v24;
        if ( (unsigned __int8)(*v24 - 17) <= 1u || v25 == 5 )
        {
          if ( v24 != a3 || Alignment[1].Region )
          {
            ++v6;
            v26 = v21;
          }
          else
          {
            ++v19;
            v26 = 24LL;
            v45 = v19;
            ++v6;
          }
          goto LABEL_24;
        }
        if ( (unsigned __int8)byte_1C00A026A >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v25);
          goto LABEL_83;
        }
      }
      else if ( (unsigned __int8)byte_1C00A026A >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
LABEL_83:
        a3 = v46;
        v19 = v45;
      }
LABEL_84:
      v26 = v21 | 4;
LABEL_24:
      Alignment[22].Region = v26;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        break;
    }
    if ( (Region & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(Region, v47 - v6, &v49, &v50);
      a3 = v46;
      v19 = v45;
    }
    v47 = v6;
  }
  while ( Alignment );
  v27 = v6 - v19;
  if ( (v21 & 1) != 0 && v27 )
  {
    v29 = v49;
    if ( !v49 && !v50 )
    {
      v29 = KeGetCurrentIrql() == 2;
      v49 = v29;
    }
    v10 = v51;
    v30 = v21;
    v7 = v52;
    v31 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
    v9 = 2;
    v32 = 2 * ((v30 >> 1) & 1);
    if ( v29 )
    {
      CurrentCpu = v43.CurrentCpu;
      LOWORD(v13) = v43.DatapathEventsMask;
      v33 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v32 + 40) + (KeGetPcr()->Prcb.Number << 12));
      v41 = v43.CurrentCpu;
      *v33 += v27;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v32 + 48), v27);
      CurrentCpu = v43.CurrentCpu;
      LOWORD(v13) = v43.DatapathEventsMask;
      v41 = v43.CurrentCpu;
    }
  }
  else
  {
    v7 = v52;
    v9 = 2;
    v10 = v51;
    CurrentCpu = -1;
    LOWORD(v13) = v44;
  }
  v16 = v42;
LABEL_31:
  if ( byte_1C009FE30 )
  {
    v35 = *(_QWORD *)(a1 + 1000);
    if ( v35 )
    {
      if ( (*(_DWORD *)(v35 + 52) & 1) != 0 )
      {
        PktMonClientNblLogNdis(a1 + 976, a2, a3, 1LL);
        CurrentCpu = v41;
        v9 = 2;
        v7 = v52;
      }
    }
  }
  if ( (v13 & 0x3014) != 0 || (v43.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v16 & 1) == 0 )
    {
      v36 = KfRaiseIrql(2u);
      CurrentCpu = v41;
      v9 = v36;
      v7 = v52;
      v39 = v36;
    }
    if ( (v13 & 4) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        LOWORD(v13) = v43.DatapathEventsMask;
        v43.CurrentCpu = CurrentCpu;
      }
      ++*(_QWORD *)((char *)&v43.PcwBlock->DatapathEventReferences[4]
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( (v13 & 0x10) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        LOWORD(v13) = v43.DatapathEventsMask;
        v43.CurrentCpu = CurrentCpu;
      }
      *(_QWORD *)((char *)&v43.PcwBlock->DatapathEventReferences[8]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData) += v7;
    }
    if ( (v16 & 2) != 0 )
    {
      if ( (v13 & 0x1000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          LOWORD(v13) = v43.DatapathEventsMask;
          v43.CurrentCpu = CurrentCpu;
        }
        ++*(_QWORD *)((char *)&v43.PcwBlock->TotalInstanceName
                    + CurrentCpu * ndisPcwPerCpuDataStride
                    + ndisPcwOffsetToPerCpuData
                    + 40);
      }
      if ( (v13 & 0x2000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v43.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v43.PcwBlock->TotalInstanceName
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 48) += v7;
      }
    }
    if ( (v43.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v43, 3u);
    }
    else if ( v9 != 2 )
    {
      KeLowerIrql(v9);
      v7 = v52;
    }
  }
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))(a1 + 544))(
    *(_QWORD *)(a1 + 552),
    a2,
    v10,
    v7,
    v16);
  if ( (v43.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v43, 3u, 0x10uLL);
    if ( v39 != 2 )
      KeLowerIrql(v39);
  }
  if ( (v16 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 584),
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20,
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v16 & 1);
  if ( (_BYTE)dword_1C00A2098 )
    WmiGetClock(0LL, 0LL, v28);
  if ( v40 )
  {
    v37 = *(_WORD *)(a1 + 252);
    if ( v37 == -8826 || v37 == 1544 || v37 == 8 )
    {
      v38 = WmiGetClock(0LL, 0LL, v28);
      ndisTraceRcv(v5, v38 - v48, v52);
    }
  }
}
