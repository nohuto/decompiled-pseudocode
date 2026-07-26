/*
 * XREFs of ndisMOpenAdapter @ 0x1C010D8F0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ethAllocateOpenMulticastBuffer @ 0x1C001AA0C (ethAllocateOpenMulticastBuffer.c)
 *     XNoteFilterOpenAdapter @ 0x1C001AAC0 (XNoteFilterOpenAdapter.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001B314 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001B388 (ndisSetupNdis6OpenHandlers.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     WPP_SF_qqZddZ @ 0x1C006196C (WPP_SF_qqZddZ.c)
 *     XRemoveBindingFromLists @ 0x1C0068090 (XRemoveBindingFromLists.c)
 *     ndisQueueOpenOnProtocol @ 0x1C010DD54 (ndisQueueOpenOnProtocol.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C0115AC4 (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C0117918 (ndisDeQueueOpenOnProtocol.c)
 *     ndisSetOpenToTranslationMode @ 0x1C0117B90 (ndisSetOpenToTranslationMode.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 *v4; // rbp
  _QWORD *v5; // r15
  char v6; // r12
  char v8; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // cl
  __int64 v15; // rcx
  int v16; // eax
  int OpenMulticastBuffer; // eax
  int v18; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]
  char v26; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v26 = 0;
  v6 = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qqq(0x30u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v3, a3, a2);
  if ( !ndisReferenceMiniport(a3) )
  {
    *a1 = -1073676286;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v3 + 56) < 6u )
  {
    v5 = *(_QWORD **)(a3 + 1856);
    if ( !v5 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x6D66444Eu);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *a1 = -1073741670;
        goto LABEL_77;
      }
      memset(PoolWithTag, 0, 0xC0uLL);
      *(_QWORD *)(a3 + 1856) = v5;
      v26 = 1;
    }
    *(_QWORD *)a2 = v5;
  }
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a2 + 264) = *(unsigned __int16 *)(a3 + 592);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 232));
  ndisMReferenceOpen(a2, 1u);
  if ( *(_BYTE *)(a3 + 32) < 6u )
  {
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(*(_QWORD *)(a3 + 3792) + 200LL);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 1808);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(*(_QWORD *)(a3 + 3792) + 216LL);
  }
  *(_DWORD *)(a2 + 608) = *(unsigned __int8 *)(v3 + 56);
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) < 6u )
  {
    *(_QWORD *)(a2 + 112) = ndisMSendPacketCompleteToOpen;
    *(_QWORD *)(a2 + 680) = *(_QWORD *)(v3 + 240);
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(v3 + 248);
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(v3 + 264);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(v3 + 272);
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(v3 + 256);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(v3 + 280);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(v3 + 152);
    *(_QWORD *)(a2 + 688) = ndisCompleteOidRequestToRequest;
  }
  else
  {
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_QWORD *)(a2 + 688) = ndisInvokeOidRequestComplete;
    *(_QWORD *)(a2 + 136) = ndisFakeMiniportCancelSendPackets;
  }
  *(_QWORD *)(a2 + 208) = *(_QWORD *)(v3 + 160);
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(v3 + 168);
  *(_QWORD *)(a2 + 176) = ndisMReset;
  *(_QWORD *)(a2 + 528) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 184) = ndisLegacyRequest;
  *(_QWORD *)(a2 + 192) = ndisMOidRequest;
  *(_QWORD *)(a2 + 728) = ndisMDirectOidRequest;
  *(_QWORD *)(a2 + 104) = ndisMTransferData;
  *(_QWORD *)(a2 + 8) = a2;
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 96) = ndisMWanSend;
  }
  else
  {
    *(_QWORD *)(a2 + 96) = ndisMSend;
  }
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a3 + 624);
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) != 0 )
    {
LABEL_50:
      v20 = *(_QWORD *)(a3 + 3792);
      if ( *(_BYTE *)(a3 + 32) >= 6u )
      {
        *(_QWORD *)(a2 + 1136) = *(_QWORD *)(v20 + 552);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3792) + 504LL);
        v21 = *(_QWORD *)(*(_QWORD *)(a3 + 3792) + 200LL);
      }
      else
      {
        *(_QWORD *)(a2 + 1032) = *(_QWORD *)(v20 + 288);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3792) + 248LL);
        v21 = *(_QWORD *)(*(_QWORD *)(a3 + 3792) + 296LL);
      }
      *(_QWORD *)(a2 + 296) = v21;
      *(_QWORD *)(a2 + 1096) = a2 + 1088;
      *(_QWORD *)(a2 + 1088) = a2 + 1088;
      *(_QWORD *)(a2 + 1112) = a2 + 1104;
      *(_QWORD *)(a2 + 1104) = a2 + 1104;
      if ( !*(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 168) )
      {
        *(_QWORD *)(a2 + 96) = ndisMRejectSend;
        *(_QWORD *)(a2 + 168) = ndisMRejectSendPackets;
      }
      goto LABEL_13;
    }
    *(_QWORD *)(a2 + 96) = ndisMWanSend;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x20000) != 0 )
    goto LABEL_50;
LABEL_13:
  v11 = *(_QWORD *)(a3 + 3792);
  if ( *(_BYTE *)(a3 + 32) < 6u )
    v12 = *(_QWORD *)(v11 + 296);
  else
    v12 = *(_QWORD *)(v11 + 200);
  *(_QWORD *)(a2 + 296) = v12;
  ndisSetupNdis6OpenHandlers(a2, v3, a3);
  v13 = *(_QWORD *)(a2 + 24);
  v14 = *(_BYTE *)(a3 + 32) >= 6u && *(_BYTE *)(v13 + 56) < 6u;
  if ( *(_BYTE *)(v13 + 56) < 6u && *(_BYTE *)(a3 + 2001) || v14 )
  {
    ndisSetOpenToTranslationMode(a2);
    v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    *(_QWORD *)(a2 + 704) = v22;
    if ( !v22 )
    {
      v18 = -1073676281;
      *a1 = -1073676281;
      goto LABEL_36;
    }
    *v22 = a3;
    *(_QWORD *)(*(_QWORD *)(a2 + 704) + 8LL) = ndisQueuedStatusUnbindAdapter;
  }
  *(_QWORD *)(a2 + 576) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 560) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 568) = *(_QWORD *)(a2 + 296);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x73u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a3, a2);
  v15 = *(unsigned int *)(a3 + 1520);
  if ( (((_DWORD)v15 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v15 == 3 )
  {
    if ( (unsigned __int8)byte_1C00A0255 >= 4u )
      WPP_SF_qq(0x74u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a3, a2);
    if ( (byte_1C00A2081 & 2) != 0 )
      McTemplateK0jqxq(
        v15,
        &OpenFailedMiniportNotStarted,
        (const GUID *)(a3 + 4040),
        a3 + 4040,
        *(_DWORD *)(a3 + 4088),
        *(_QWORD *)(a3 + 4056),
        a2);
  }
  else
  {
    *(_QWORD *)(a2 + 392) = *(_QWORD *)(a3 + 56);
    ++*(_WORD *)(a3 + 1820);
    *(_QWORD *)(a3 + 56) = a2;
    ndisUpdateCheckForLoopbackFlag(a3);
    LOBYTE(v4) = 1;
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
  {
    LODWORD(v23) = (unsigned __int8)v4;
    WPP_SF_qqd(0x75u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a3, a2, v23);
  }
  if ( (_BYTE)v4 )
  {
    v6 = 1;
    if ( !(unsigned __int8)ndisQueueOpenOnProtocol(a2, v3) )
    {
      *a1 = -1073676281;
LABEL_73:
      ndisDeQueueOpenOnMiniport(a2, a3);
LABEL_74:
      if ( v8 )
        ndisDeQueueOpenOnProtocol(a2, v3);
      goto LABEL_77;
    }
    v4 = *(__int64 **)(a3 + 400);
    v8 = 1;
    v16 = *(_DWORD *)(a3 + 464);
    if ( v4 )
    {
      XNoteFilterOpenAdapter(*(_QWORD *)(a3 + 400), a2);
      v16 = *(_DWORD *)(a3 + 464);
    }
    if ( !v16 )
    {
      OpenMulticastBuffer = ethAllocateOpenMulticastBuffer((__int64)v4, a2);
      *a1 = OpenMulticastBuffer;
      if ( OpenMulticastBuffer )
      {
        *a1 = -1073676281;
LABEL_70:
        if ( v4 )
          XRemoveBindingFromLists(v4, a2);
        goto LABEL_73;
      }
    }
    if ( *(_BYTE *)(v3 + 56) < 6u && v26 )
    {
      v5[10] = ndisMTransferData;
      v5[11] = ndisMReset;
      v5[12] = *(_QWORD *)(a2 + 184);
      v5[9] = *(_QWORD *)(a2 + 96);
    }
    *a1 = 0;
    v18 = 0;
    if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    {
      LODWORD(v25) = *(unsigned __int8 *)(v3 + 57);
      LODWORD(v24) = *(unsigned __int8 *)(v3 + 56);
      WPP_SF_qqZddZ(
        *(unsigned __int8 *)(v3 + 57),
        *(unsigned __int8 *)(v3 + 56),
        a3,
        a2,
        v3 + 72,
        v24,
        v25,
        *(_QWORD *)(a3 + 3888));
      v18 = *a1;
    }
LABEL_36:
    v8 = v6;
    if ( !v18 )
      goto LABEL_37;
    if ( !v6 )
      goto LABEL_74;
    goto LABEL_70;
  }
  *a1 = -1073676281;
LABEL_77:
  ndisDereferenceMiniport(a3, 0x2Eu);
LABEL_37:
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
  {
    LODWORD(v24) = *a1;
    WPP_SF_qqqL(0x32u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v3, a3, a2, v24);
  }
}
