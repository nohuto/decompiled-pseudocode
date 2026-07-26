/*
 * XREFs of ndisMSendNBLToMiniportInternal @ 0x1C0005AC0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     ndisMSendNBLToMiniport @ 0x1C0005AA0 (ndisMSendNBLToMiniport.c)
 *     ndisReplaySendNbls @ 0x1C0075280 (ndisReplaySendNbls.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C004DFF0 (ndisMSetTimestampOnNblChainTx.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C00578B8 (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisSetBusyAsync @ 0x1C0075F2C (ndisSetBusyAsync.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  struct _NET_BUFFER_LIST *Alignment; // r14
  KIRQL v7; // bl
  unsigned int v9; // r12d
  __int64 v10; // r13
  void (__fastcall *v11)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r10
  int v12; // eax
  unsigned __int64 v13; // rbx
  char v14; // cl
  __int64 v15; // r11
  char v16; // di
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int8 *v19; // r9
  unsigned int v20; // r13d
  char v21; // r12
  unsigned __int64 v22; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r15
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  _QWORD *v30; // rcx
  int v31; // edx
  _SLIST_HEADER *v32; // rax
  __int64 v33; // rax
  void (__fastcall *v34)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+60h] [rbp-58h]
  struct NDIS_PCW_CONTEXT v38; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int8 *v39; // [rsp+C0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v40; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+D0h] [rbp+18h]

  v41 = a3;
  v40 = (struct _NET_BUFFER_LIST *)a2;
  Alignment = (struct _NET_BUFFER_LIST *)a2;
  v38.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v7 = 2;
  v9 = a3;
  v10 = *(_QWORD *)(a1 + 3792);
  v38.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v37 = v10;
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v10 + 184);
  v34 = v11;
  v38.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v38.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
  {
    WPP_SF_qq(42LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
    v11 = v34;
  }
  if ( !*(_DWORD *)(a1 + 1836)
    && (*(_BYTE *)(a1 + 91) && (*(_WORD *)(a1 + 1820) > 1u || *(_BYTE *)(a1 + 2007))
     || (a4 & 2) != 0
     || (*(_DWORD *)(a1 + 120) & 0x4000) != 0) )
  {
    ndisMLoopbackNetBufferLists(a1, (_DWORD)Alignment, v9, a4, (__int64)&v40);
    Alignment = v40;
    if ( !v40 )
      goto LABEL_17;
    v11 = v34;
  }
  if ( a5 || !*(_QWORD *)(a1 + 4488) )
  {
LABEL_9:
    if ( ndisNblTrackerMode == NdisTrackNblDisabled )
      goto LABEL_10;
    v13 = *(_QWORD *)(a1 + 4112);
    v14 = 0;
    v15 = 0LL;
    v16 = ndisNblTrackerEpoch;
    a3 = a4 & 1;
    v17 = 0LL;
    v36 = 0LL;
    v35 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(Alignment, 0LL, 0x92u, (void *)v13, a3);
      v11 = v34;
      v15 = 0LL;
      a3 = a4 & 1;
      v14 = 0;
    }
    v18 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
    {
      v19 = *(unsigned __int8 **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v18 |= 2LL * (v16 & 1);
    }
    else
    {
      v19 = (unsigned __int8 *)v18;
    }
    v39 = v19;
    if ( !Alignment )
    {
LABEL_37:
      v26 = v17 - v15;
      if ( (v18 & 1) != 0 && v26 )
      {
        if ( !(_BYTE)a3 && !v14 )
          LOBYTE(a3) = KeGetCurrentIrql() == 2;
        v28 = v18;
        v29 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
        a2 = 2 * ((v28 >> 1) & 1);
        if ( (_BYTE)a3 )
        {
          v30 = (_QWORD *)(*(_QWORD *)(v29 + 8 * a2 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v30 += v26;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * a2 + 48), v26);
        }
        Alignment = v40;
      }
      v7 = 2;
LABEL_10:
      if ( byte_1C009FE30 )
      {
        v33 = *(_QWORD *)(a1 + 5944);
        if ( v33 )
        {
          if ( (*(_DWORD *)(v33 + 52) & 1) != 0 )
          {
            PktMonClientNblLogNdis(a1 + 5920, Alignment, a3, 2LL);
            v11 = v34;
          }
        }
      }
      v12 = *(_DWORD *)(a1 + 2696);
      if ( (v12 & 2) != 0 )
      {
        a2 = 0LL;
      }
      else
      {
        if ( (v12 & 4) == 0 )
        {
LABEL_13:
          if ( SLOBYTE(v38.DatapathCyclesMask) < 0 )
          {
            if ( (a4 & 1) == 0 )
              v7 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter(&v38, 7u);
          }
          if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v10 + 26) & 2) != 0 )
            ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
              *(void **)(a1 + 24),
              Alignment,
              v9,
              a4,
              (void *)a1,
              *(void **)(a1 + 5000),
              v11);
          else
            v11(*(void **)(a1 + 24), Alignment, v9, a4);
          if ( SLOBYTE(v38.DatapathCyclesMask) < 0 )
          {
            ndisPcwEndCycleCounter(&v38, 7u, 0x14uLL);
            if ( v7 != 2 )
              KeLowerIrql(v7);
          }
          goto LABEL_17;
        }
        LOBYTE(a2) = 1;
      }
      ndisMSetTimestampOnNblChainTx(Alignment, a2);
      v11 = v34;
      goto LABEL_13;
    }
    v20 = a4 & 1;
    v21 = 0;
LABEL_25:
    v22 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v22 )
      {
LABEL_34:
        v25 = v36 - v17;
        if ( (v22 & 1) != 0 && v25 )
        {
          if ( !(_BYTE)v20 && !v21 )
          {
            v21 = 1;
            LOBYTE(v20) = KeGetCurrentIrql() == 2;
          }
          a2 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( (_BYTE)v20 )
          {
            v27 = (_QWORD *)(*(_QWORD *)a2 + (KeGetPcr()->Prcb.Number << 12));
            *v27 += v25;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), v25);
          }
        }
        v36 = v17;
        if ( !Alignment )
        {
          Alignment = v40;
          v11 = v34;
          v14 = v21;
          v9 = v41;
          a3 = v20;
          v10 = v37;
          goto LABEL_37;
        }
        goto LABEL_25;
      }
      if ( !v22 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
      if ( (v22 & 4) != 0 )
        goto LABEL_68;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        a2 = *SourceHandle;
        if ( (unsigned __int8)(a2 - 17) <= 1u || (_BYTE)a2 == 5 )
        {
          if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
          {
            ++v17;
            v24 = v18;
          }
          else
          {
            ++v15;
            v24 = 24LL;
            v35 = v15;
            ++v17;
          }
          goto LABEL_33;
        }
        if ( (unsigned __int8)byte_1C00A026A >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)a2);
          goto LABEL_67;
        }
      }
      else if ( (unsigned __int8)byte_1C00A026A >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
LABEL_67:
        v19 = v39;
        v15 = v35;
      }
LABEL_68:
      v24 = v18 | 4;
LABEL_33:
      Alignment->NetBufferListInfo[27] = (void *)v24;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_34;
    }
  }
  v31 = 0;
  v32 = (_SLIST_HEADER *)Alignment;
  if ( Alignment )
  {
    do
    {
      v32 = (_SLIST_HEADER *)v32->Alignment;
      ++v31;
    }
    while ( v32 );
  }
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v31, 52, (_DWORD)Alignment, v9) )
  {
    v11 = v34;
    goto LABEL_9;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(43LL, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, Alignment);
}
