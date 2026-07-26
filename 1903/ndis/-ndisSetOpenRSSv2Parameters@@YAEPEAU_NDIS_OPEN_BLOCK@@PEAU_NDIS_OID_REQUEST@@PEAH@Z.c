/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6580
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C00C7080 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C44E8 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C4B50 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6374 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r15
  struct _NDIS_OID_REQUEST *v5; // rbp
  char v7; // si
  int v8; // eax
  int v9; // edx
  int v10; // edi
  unsigned __int8 *PoolWithTag; // rax
  KIRQL v12; // al
  int CombinedRSSParameters; // eax
  void *v14; // r11
  _DWORD *InformationBuffer; // r13
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r12
  int v17; // r15d
  char v18; // dl
  bool v19; // r8
  bool v20; // zf
  unsigned int v21; // edx
  bool v22; // si
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rax
  char v24; // dl
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v26; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  char v29; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+98h] [rbp+10h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      36,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v29);
  }
  v5->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, v5);
  v10 = v8;
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        11,
        37,
        (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
        (char)MiniportHandle,
        (char)v5,
        v8);
    }
    goto LABEL_33;
  }
  if ( !a1->RssParametersBuffer )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu);
    a1->RssParametersBuffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
LABEL_33:
      v5->DATA.QUERY_INFORMATION.BytesWritten = v5->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_34;
    }
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  NewIrql = v12;
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(MiniportHandle, v5, 0LL, 0LL, 0LL, 0LL);
  v14 = 0LL;
  v10 = CombinedRSSParameters;
  if ( !CombinedRSSParameters )
  {
    InformationBuffer = v5->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( MiniportHandle->CombinedNdisRSSParameters )
    {
      RssParametersBuffer = MiniportHandle->RssParametersBuffer;
      v17 = InformationBuffer[2];
      v31 = (unsigned __int8)v17;
      if ( (RssParametersBuffer->Combined[4] & 0x10) != 0
        || (v18 = 1, !(unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8]) )
      {
        v18 = 0;
      }
      v19 = 0;
      v20 = v18 == (InformationBuffer[1] & 1);
      v21 = InformationBuffer[3];
      if ( v20 )
        v19 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)v17;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != v21 )
        goto LABEL_21;
      v22 = 0;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == InformationBuffer[6] )
        v22 = v19;
      if ( memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
             (char *)InformationBuffer + (unsigned int)InformationBuffer[4],
             v21) )
      {
LABEL_21:
        v22 = 0;
      }
      VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, v5);
      v24 = (char)v14;
      if ( InformationBuffer[5] == VPortBlockForRequest->VPortParams.NumQueuePairs )
        v24 = v22;
      OpenQueue = MiniportHandle->OpenQueue;
      v26 = v17 & 0xFFFF00;
      while ( OpenQueue )
      {
        NdisRSSParameters = OpenQueue->NdisRSSParameters;
        if ( NdisRSSParameters && OpenQueue != a1 )
          v26 |= NdisRSSParameters->HashInformation & 0xFFFF00;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      v7 = v24;
      InformationBuffer[2] = v31 | v26;
      v20 = v26 == (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00);
      v4 = a3;
      if ( !v20 )
        v7 = (char)v14;
    }
    else
    {
      v7 = 0;
    }
  }
  MiniportHandle->MiniportThread = v14;
  KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
  if ( v7 )
    goto LABEL_33;
LABEL_34:
  *v4 = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x26u,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v7,
      v10);
  if ( v10 && (byte_1C00E8044 & 4) != 0 )
    McTemplateK0jqxqqq(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v10,
      2,
      (char)a1);
  return v7;
}
