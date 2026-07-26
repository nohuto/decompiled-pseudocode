/*
 * XREFs of ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960
 * Callers:
 *     ndisMFakeSendNetBufferLists @ 0x1C0017340 (ndisMFakeSendNetBufferLists.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C000AD70 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0015024 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D34 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AE58 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  struct _NDIS_OPEN_BLOCK *v6; // r14
  struct _NDIS_OPEN_BLOCK *v7; // r15
  struct _NET_BUFFER_LIST *v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  KIRQL v11; // r13
  unsigned int v12; // r13d
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v14; // rsi
  _SLIST_HEADER *Alignment; // rdx
  unsigned int v16; // r9d
  _QWORD *Region; // rax
  int i; // ecx
  unsigned __int64 NblTracker; // rdi
  unsigned int v20; // ecx
  __int64 v21; // r11
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  char *v24; // r10
  _SLIST_HEADER *v25; // r13
  unsigned __int64 v26; // rsi
  char *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  _QWORD *v32; // rcx
  struct _NET_BUFFER_LIST *v33; // [rsp+40h] [rbp-39h]
  __int64 v34; // [rsp+40h] [rbp-39h]
  struct _NET_BUFFER_LIST *v35; // [rsp+48h] [rbp-31h]
  __int64 v36; // [rsp+48h] [rbp-31h]
  struct NDIS_PCW_CONTEXT v37; // [rsp+50h] [rbp-29h] BYREF
  char *v38; // [rsp+68h] [rbp-11h]
  unsigned int v39; // [rsp+70h] [rbp-9h]
  __int64 v40; // [rsp+78h] [rbp-1h]
  struct _NDIS_OPEN_BLOCK *v41; // [rsp+80h] [rbp+7h]
  struct _NET_BUFFER_LIST *v42; // [rsp+88h] [rbp+Fh]
  KIRQL v43; // [rsp+E0h] [rbp+67h]
  unsigned __int8 v44; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+77h]
  char v46; // [rsp+F8h] [rbp+7Fh] BYREF

  v45 = a3;
  v3 = *(_DWORD *)(a1 + 48);
  v41 = 0LL;
  v4 = a3;
  v35 = 0LL;
  v42 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v37.PcwBlock = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v37.DatapathEventsMask = 0LL;
  v9 = 0LL;
  v37.CurrentCpu = -1;
  v10 = 0LL;
  if ( v3 || *(_DWORD *)(a1 + 80) )
  {
    v37.DatapathEventsMask = v3;
    v37.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
    v37.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
    if ( !v37.PcwBlock )
      v37.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  }
  v11 = 2;
  v43 = 2;
  if ( (v37.DatapathEventsMask & 0x280) != 0 || (v37.DatapathCyclesMask & 0x200) != 0 )
  {
    if ( (v4 & 1) == 0 )
    {
      v43 = KfRaiseIrql(2u);
      v9 = 0LL;
      v11 = v43;
      v10 = 0LL;
    }
    if ( (v37.DatapathEventsMask & 0x200) != 0 )
    {
      Alignment = (_SLIST_HEADER *)a2;
      v16 = 0;
      if ( a2 )
      {
        do
        {
          Region = (_QWORD *)Alignment->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          v16 += i;
        }
        while ( Alignment );
      }
      v37.CurrentCpu = KeGetPcr()->Prcb.Number;
      *(_QWORD *)((char *)&v37.PcwBlock->DatapathEventReferences[18]
                + ndisPcwPerCpuDataStride * v37.CurrentCpu
                + ndisPcwOffsetToPerCpuData) += v16;
      v9 = 0LL;
    }
  }
  if ( a2 )
  {
    v12 = v45;
    do
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)a2->SourceHandle;
      v14 = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      a2->Link.Alignment = 0LL;
      if ( SourceHandle == v6 )
      {
        *(_QWORD *)v9 = a2;
        v9 = (__int64)a2;
        v35 = a2;
      }
      else if ( SourceHandle == v7 )
      {
        *(_QWORD *)v10 = a2;
        v10 = (unsigned __int64)a2;
        v33 = a2;
      }
      else if ( v6 )
      {
        if ( v7 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, a2, v12, &v37);
          v9 = (__int64)v35;
          v10 = (unsigned __int64)v33;
        }
        else
        {
          v7 = SourceHandle;
          v42 = a2;
          v10 = (unsigned __int64)a2;
          v33 = a2;
        }
      }
      else
      {
        v9 = (__int64)a2;
        v6 = SourceHandle;
        v35 = a2;
        v8 = a2;
      }
      a2 = v14;
    }
    while ( v14 );
    v11 = v43;
    v4 = v45;
    v41 = v7;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v10 = ndisNblTrackerEpoch;
    NblTracker = (unsigned __int64)v6->NblTracker;
    v20 = v4 & 1;
    v39 = v20;
    v9 = 0LL;
    LODWORD(v38) = ndisNblTrackerEpoch;
    v21 = 0LL;
    v34 = 0LL;
    v22 = 0LL;
    v40 = 0LL;
    v36 = 0LL;
    v46 = v4 & 1;
    v44 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v8, 0LL, 0x95u, (void *)NblTracker, v20);
      LOBYTE(v20) = v39;
      v21 = 0LL;
      v9 = v44;
      v22 = 0LL;
      v10 = (unsigned int)v38;
    }
    v23 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v23 & 1) != 0 )
    {
      v24 = *(char **)((v23 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v23 |= 2 * (v10 & 1);
    }
    else
    {
      v24 = (char *)v23;
    }
    v38 = v24;
    if ( !v8 )
    {
LABEL_59:
      v29 = v21 - v22;
      if ( (v23 & 1) != 0 && v29 )
      {
        if ( !(_BYTE)v20 && !(_BYTE)v9 )
        {
          LOBYTE(v20) = KeGetCurrentIrql() == 2;
          v46 = v20;
        }
        v30 = v23;
        v31 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
        v9 = 2 * ((v30 >> 1) & 1);
        if ( (_BYTE)v20 )
        {
          v32 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v9 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v32 += v29;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v9 + 48), v29);
        }
      }
      goto LABEL_14;
    }
    v10 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    v25 = (_SLIST_HEADER *)v8;
LABEL_45:
    v26 = v25[22].Region;
    while ( 1 )
    {
      if ( v25[22].Region != v26 )
      {
LABEL_55:
        if ( (v26 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v26, v40 - v21, &v46, &v44);
          v24 = v38;
          v10 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
          v22 = v36;
        }
        v40 = v21;
        if ( !v25 )
        {
          LOBYTE(v20) = v46;
          v7 = v41;
          v11 = v43;
          v4 = v45;
          v9 = v44;
          goto LABEL_59;
        }
        goto LABEL_45;
      }
      if ( !v26 && !v25[7].Region )
        v25[7].Region = ndisSourceHandleFromOwner(0LL, v9, v10, v22);
      if ( (v26 & 4) != 0 )
        goto LABEL_78;
      v27 = (char *)v25[7].Region;
      if ( v27 )
      {
        v9 = (unsigned __int8)*v27;
        if ( (unsigned __int8)(v9 - 17) <= 1u || (_BYTE)v9 == 5 )
        {
          if ( v27 != v24 || v25[1].Region )
          {
            ++v21;
            v28 = v23;
            v34 = v21;
          }
          else
          {
            ++v22;
            v28 = 24LL;
            ++v21;
            v36 = v22;
            v34 = v21;
          }
          goto LABEL_54;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v10 )
        {
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)v25,
            *v27);
          goto LABEL_75;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v10 )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)v25);
LABEL_75:
        v21 = v34;
        v10 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
        v22 = v36;
        v24 = v38;
      }
LABEL_78:
      v28 = v23 | 4;
LABEL_54:
      v25[22].Region = v28;
      v25 = (_SLIST_HEADER *)v25->Alignment;
      if ( !v25 )
        goto LABEL_55;
    }
  }
LABEL_14:
  if ( byte_1C00E5E20 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v8, v9, v10);
  if ( SLOBYTE(v37.DatapathEventsMask) < 0 )
  {
    if ( v37.CurrentCpu == -1 )
      v37.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v37.PcwBlock->DatapathEventReferences[14]
                + v37.CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v37.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(&v37, 9u);
  v6->ProtSendNetBufferListsComplete(v6->SendCompleteNetBufferListsContext, v8, v4);
  if ( (v37.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(&v37, 9u, 0x16uLL);
  if ( v7 )
    ndisMSendCompleteNetBufferListsToOpen(v7, v42, v4, &v37);
  if ( v11 != 2 )
    KeLowerIrql(v11);
}
