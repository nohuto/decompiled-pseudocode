/*
 * XREFs of ndisMSendCompleteNetBufferListsInternal @ 0x1C0001720
 * Callers:
 *     ndisMFakeSendNetBufferLists @ 0x1C0023E20 (ndisMFakeSendNetBufferLists.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0055494 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  _NDIS_PCW_DATA_BLOCK *v3; // rax
  struct _NET_BUFFER_LIST *v4; // r10
  unsigned int v5; // edi
  unsigned int v7; // r14d
  __int64 v8; // rdx
  struct _NDIS_OPEN_BLOCK *v9; // rsi
  _QWORD *v10; // r15
  unsigned __int64 v11; // r9
  _QWORD *p_Alignment; // r8
  __int64 v13; // r13
  struct _NET_BUFFER_LIST *v14; // rbx
  unsigned int v15; // r13d
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v17; // rdi
  unsigned __int64 NblTracker; // rdi
  __int64 v19; // r11
  char v20; // r14
  char v21; // r15
  unsigned int v22; // ebx
  unsigned __int64 v23; // rdi
  _SLIST_HEADER *v24; // r14
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  unsigned __int8 *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r11
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int8 *v33; // r9
  struct _NDIS_OPEN_BLOCK *v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  _QWORD *v37; // rcx
  unsigned int v38; // r8d
  _SLIST_HEADER *Alignment; // rdx
  _QWORD *Region; // rcx
  int i; // eax
  char v42; // r14
  bool v43; // zf
  unsigned __int64 v44; // rbx
  unsigned int v45; // edi
  char v46; // cl
  struct _NDIS_OPEN_BLOCK *v47; // r15
  unsigned __int64 v48; // rbx
  struct _NET_BUFFER_LIST *v49; // r10
  struct _NET_BUFFER_LIST *v50; // r14
  void *v51; // rdi
  unsigned __int8 *v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // r15
  KIRQL v55; // al
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rbx
  _QWORD *v58; // rcx
  bool v59; // [rsp+30h] [rbp-39h] BYREF
  char v60; // [rsp+31h] [rbp-38h] BYREF
  KIRQL v61; // [rsp+32h] [rbp-37h]
  struct _NET_BUFFER_LIST *v62; // [rsp+38h] [rbp-31h]
  struct NDIS_PCW_CONTEXT v63; // [rsp+40h] [rbp-29h] BYREF
  struct _NET_BUFFER_LIST *v64; // [rsp+58h] [rbp-11h]
  struct _NDIS_OPEN_BLOCK *v65; // [rsp+60h] [rbp-9h]
  struct _NET_BUFFER_LIST *v66; // [rsp+68h] [rbp-1h]
  _QWORD *v67; // [rsp+70h] [rbp+7h]
  __int64 v69; // [rsp+D0h] [rbp+67h]
  __int64 v70; // [rsp+D0h] [rbp+67h]
  char v71; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v72; // [rsp+E0h] [rbp+77h]
  char v73; // [rsp+E8h] [rbp+7Fh] BYREF

  v72 = a3;
  v3 = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 80);
  v8 = 0LL;
  v9 = 0LL;
  v65 = 0LL;
  v10 = 0LL;
  v64 = 0LL;
  v11 = a3;
  v66 = 0LL;
  p_Alignment = 0LL;
  v63.PcwBlock = v3;
  v62 = 0LL;
  v13 = a1;
  v63.DatapathEventsMask = v5;
  v63.DatapathCyclesMask = v7;
  v63.CurrentCpu = -1;
  v61 = 2;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
  {
    WPP_SF_qq(66LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
    v11 = v72;
    v4 = 0LL;
    v8 = 0LL;
    p_Alignment = 0LL;
  }
  v14 = a2;
  if ( (v5 & 0x280) != 0 || (v7 & 0x200) != 0 )
  {
    if ( (v11 & 1) == 0 )
    {
      v55 = KfRaiseIrql(2u);
      v11 = v72;
      v4 = 0LL;
      v8 = 0LL;
      v61 = v55;
      p_Alignment = 0LL;
    }
    if ( (v63.DatapathEventsMask & 0x200) != 0 )
    {
      v38 = 0;
      Alignment = (_SLIST_HEADER *)a2;
      if ( a2 )
      {
        do
        {
          Region = (_QWORD *)Alignment->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          v38 += i;
        }
        while ( Alignment );
      }
      v63.CurrentCpu = KeGetPcr()->Prcb.Number;
      *(_QWORD *)((char *)&v63.PcwBlock->DatapathEventReferences[18]
                + ndisPcwPerCpuDataStride * v63.CurrentCpu
                + ndisPcwOffsetToPerCpuData) += v38;
      v8 = 0LL;
      p_Alignment = 0LL;
    }
  }
  if ( a2 )
  {
    v15 = v72;
    while ( 1 )
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v14->SourceHandle;
      v17 = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
      v14->Link.Alignment = 0LL;
      if ( SourceHandle == v9 )
        break;
      if ( SourceHandle == (struct _NDIS_OPEN_BLOCK *)v8 )
      {
        v4 = v64;
        *p_Alignment = v14;
        p_Alignment = &v14->Link.Alignment;
        v62 = v14;
        goto LABEL_11;
      }
      if ( v9 )
      {
        if ( !v8 )
        {
          v4 = v64;
          v8 = (__int64)SourceHandle;
          v65 = SourceHandle;
          p_Alignment = &v14->Link.Alignment;
          v66 = v14;
          v62 = v14;
          goto LABEL_11;
        }
        ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v14, v15, &v63);
        v8 = (__int64)v65;
        p_Alignment = &v62->Link.Alignment;
        goto LABEL_48;
      }
      v9 = SourceHandle;
      v64 = v14;
      v4 = v14;
      v10 = &v14->Link.Alignment;
LABEL_11:
      v14 = v17;
      if ( !v17 )
      {
        v13 = a1;
        v11 = v72;
        goto LABEL_13;
      }
    }
    *v10 = v14;
    v10 = &v14->Link.Alignment;
LABEL_48:
    v4 = v64;
    goto LABEL_11;
  }
LABEL_13:
  if ( ndisNblTrackerMode )
  {
    NblTracker = (unsigned __int64)v9->NblTracker;
    v19 = 0LL;
    v20 = ndisNblTrackerEpoch;
    p_Alignment = 0LL;
    v21 = 0;
    v69 = 0LL;
    v67 = 0LL;
    v22 = v11 & 1;
    v60 = 0;
    v71 = v11 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v4, 0LL, 0x95u, (void *)NblTracker, v22);
      v4 = v64;
      v19 = 0LL;
      p_Alignment = 0LL;
    }
    v23 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v23 & 1) != 0 )
    {
      v11 = *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v23 |= 2LL * (v20 & 1);
    }
    else
    {
      v11 = v23;
    }
    v62 = (struct _NET_BUFFER_LIST *)v11;
    v24 = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        v26 = v24[22].Region;
        while ( v24[22].Region == v26 )
        {
          if ( !v26 && !v24[7].Region )
            v24[7].Region = ndisSourceHandleFromOwner(0LL);
          if ( (v26 & 4) != 0 )
            goto LABEL_110;
          v27 = (unsigned __int8 *)v24[7].Region;
          if ( v27 )
          {
            v8 = *v27;
            if ( (unsigned __int8)(v8 - 17) <= 1u || (_BYTE)v8 == 5 )
            {
              if ( v27 != (unsigned __int8 *)v11 || v24[1].Region )
              {
                ++v19;
                v28 = v23;
                v69 = v19;
              }
              else
              {
                p_Alignment = (_QWORD *)((char *)p_Alignment + 1);
                v28 = 24LL;
                ++v19;
                v67 = p_Alignment;
                v69 = v19;
              }
              goto LABEL_29;
            }
            if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v24, (unsigned __int8)v8);
              goto LABEL_109;
            }
          }
          else if ( (unsigned __int8)byte_1C00A026A >= 3u )
          {
            WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v24);
LABEL_109:
            v19 = v69;
            p_Alignment = v67;
            v11 = (unsigned __int64)v62;
          }
LABEL_110:
          v28 = v23 | 4;
LABEL_29:
          v24[22].Region = v28;
          v24 = (_SLIST_HEADER *)v24->Alignment;
          if ( !v24 )
            break;
        }
        if ( (v26 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v26, v25 - v19, &v71, &v60);
          p_Alignment = v67;
        }
        v11 = (unsigned __int64)v62;
        v25 = v19;
        if ( !v24 )
        {
          LOBYTE(v22) = v71;
          v21 = v60;
          v4 = v64;
          break;
        }
      }
    }
    v29 = v19 - (_QWORD)p_Alignment;
    if ( (v23 & 1) != 0 && v29 )
    {
      if ( !(_BYTE)v22 && !v21 )
      {
        LOBYTE(v22) = KeGetCurrentIrql() == 2;
        v71 = v22;
      }
      v35 = v23;
      v36 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
      v8 = 2 * ((v35 >> 1) & 1);
      if ( (_BYTE)v22 )
      {
        v37 = (_QWORD *)(*(_QWORD *)(v36 + 8 * v8 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v37 += v29;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 8 * v8 + 48), v29);
      }
    }
  }
  if ( byte_1C009FE30 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4, v8, p_Alignment, v11);
  if ( SLOBYTE(v63.DatapathEventsMask) < 0 )
  {
    if ( v63.CurrentCpu == -1 )
      v63.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v63.PcwBlock->DatapathEventReferences[14]
                + v63.CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v63.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(&v63, 9u);
  v30 = v72;
  ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, unsigned __int64))v9->ProtSendNetBufferListsComplete)(
    v9->SendCompleteNetBufferListsContext,
    v4,
    v72,
    v11);
  if ( (v63.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(&v63, 9u, 0x16uLL);
  v34 = v65;
  if ( v65 )
  {
    if ( ndisNblTrackerMode )
    {
      v42 = ndisNblTrackerEpoch;
      v43 = (v30 & 1) == 0;
      v44 = (unsigned __int64)v65->NblTracker;
      v45 = !v43;
      v46 = 0;
      v32 = 0LL;
      v65 = 0LL;
      v47 = 0LL;
      v70 = 0LL;
      v59 = !v43;
      v73 = 0;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(v66, 0LL, 0x95u, (void *)v44, v45);
        v46 = v73;
        v32 = 0LL;
      }
      v48 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v48 & 1) != 0 )
      {
        v33 = *(unsigned __int8 **)((v48 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v48 |= 2LL * (v42 & 1);
      }
      else
      {
        v33 = (unsigned __int8 *)v48;
      }
      v49 = v66;
      v62 = (struct _NET_BUFFER_LIST *)v33;
      v50 = v66;
      if ( v66 )
      {
        while ( 1 )
        {
          v51 = v50->NetBufferListInfo[27];
          while ( v50->NetBufferListInfo[27] == v51 )
          {
            if ( !v51 && !v50->SourceHandle )
              v50->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
            if ( ((unsigned __int8)v51 & 4) != 0 )
              goto LABEL_119;
            v52 = (unsigned __int8 *)v50->SourceHandle;
            if ( v52 )
            {
              v31 = *v52;
              if ( (unsigned __int8)(v31 - 17) <= 1u || (_BYTE)v31 == 5 )
              {
                if ( v52 != v33 || v50->ParentNetBufferList )
                {
                  v47 = (struct _NDIS_OPEN_BLOCK *)((char *)v47 + 1);
                  v53 = v48;
                }
                else
                {
                  ++v32;
                  v53 = 24LL;
                  v70 = v32;
                  v47 = (struct _NDIS_OPEN_BLOCK *)((char *)v47 + 1);
                }
                goto LABEL_81;
              }
              if ( (unsigned __int8)byte_1C00A026A >= 3u )
              {
                WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v50, (unsigned __int8)v31);
                goto LABEL_118;
              }
            }
            else if ( (unsigned __int8)byte_1C00A026A >= 3u )
            {
              WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v50);
LABEL_118:
              v32 = v70;
              v33 = (unsigned __int8 *)v62;
            }
LABEL_119:
            v53 = v48 | 4;
LABEL_81:
            v50->NetBufferListInfo[27] = (void *)v53;
            v50 = (struct _NET_BUFFER_LIST *)v50->Link.Alignment;
            if ( !v50 )
              break;
          }
          if ( ((unsigned __int8)v51 & 1) != 0 )
          {
            ndisNblTrackerUpdateOwnershipCount(v51, (char *)v65 - (char *)v47, &v59, &v73);
            v32 = v70;
            v33 = (unsigned __int8 *)v62;
          }
          v65 = v47;
          if ( !v50 )
          {
            LOBYTE(v45) = v59;
            v46 = v73;
            v49 = v66;
            break;
          }
        }
      }
      v54 = (unsigned __int64)v47 - v32;
      if ( (v48 & 1) != 0 && v54 )
      {
        if ( !(_BYTE)v45 && !v46 )
        {
          LOBYTE(v45) = KeGetCurrentIrql() == 2;
          v59 = v45;
        }
        v56 = v48;
        v57 = v48 & 0xFFFFFFFFFFFFFFF8uLL;
        v31 = 2 * ((v56 >> 1) & 1);
        if ( !(_BYTE)v45 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 8 * v31 + 48), v54);
          v30 = v72;
          goto LABEL_89;
        }
        v58 = (_QWORD *)(*(_QWORD *)(v57 + 8 * v31 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v58 += v54;
      }
      v30 = v72;
    }
    else
    {
      v49 = v66;
    }
LABEL_89:
    if ( byte_1C009FE30 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v49, v31, v32, v33);
    if ( SLOBYTE(v63.DatapathEventsMask) < 0 )
    {
      if ( v63.CurrentCpu == -1 )
        v63.CurrentCpu = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)((char *)&v63.PcwBlock->DatapathEventReferences[14]
                  + v63.CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( (v63.DatapathCyclesMask & 0x200) != 0 )
      ndisPcwStartCycleCounter(&v63, 9u);
    v34->ProtSendNetBufferListsComplete(v34->SendCompleteNetBufferListsContext, v49, v30);
    if ( (v63.DatapathCyclesMask & 0x200) != 0 )
      ndisPcwEndCycleCounter(&v63, 9u, 0x16uLL);
  }
  if ( v61 != 2 )
    KeLowerIrql(v61);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(67LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, v13, a2);
}
