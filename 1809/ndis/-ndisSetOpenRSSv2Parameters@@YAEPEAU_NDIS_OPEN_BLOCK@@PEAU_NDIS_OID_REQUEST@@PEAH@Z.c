/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0081340
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C0081AB0 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007F568 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007FBC8 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008119C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

unsigned __int8 __fastcall ndisSetOpenRSSv2Parameters(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r15
  unsigned __int8 v7; // bp
  int v8; // eax
  int v9; // edi
  unsigned __int8 *PoolWithTag; // rax
  KIRQL v11; // al
  int CombinedRSSParameters; // eax
  void *v13; // r11
  _DWORD *InformationBuffer; // r13
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r12
  int v16; // r15d
  char v17; // dl
  bool v18; // r8
  bool v19; // zf
  unsigned int v20; // edx
  bool v21; // bp
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rax
  unsigned __int8 v23; // dl
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v25; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS **v28; // [rsp+20h] [rbp-68h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS **v29; // [rsp+28h] [rbp-60h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+98h] [rbp+10h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0x23u, &WPP_3f6e3b5cccdc3bc25dcf36d3a561497f_Traceguids, MiniportHandle, a1, a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
    {
      LODWORD(v28) = v8;
      WPP_SF_qqd(0x24u, &WPP_3f6e3b5cccdc3bc25dcf36d3a561497f_Traceguids, MiniportHandle, a2, v28);
    }
    goto LABEL_33;
  }
  if ( !a1->RssParametersBuffer )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu);
    a1->RssParametersBuffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_33:
      a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_34;
    }
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  NewIrql = v11;
  MiniportHandle->LockDbg = 4131997;
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(MiniportHandle, a2, 0LL, 0LL, 0LL, 0LL);
  v13 = 0LL;
  v9 = CombinedRSSParameters;
  if ( !CombinedRSSParameters )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( MiniportHandle->CombinedNdisRSSParameters )
    {
      RssParametersBuffer = MiniportHandle->RssParametersBuffer;
      v16 = InformationBuffer[2];
      v31 = (unsigned __int8)v16;
      if ( (RssParametersBuffer->Combined[4] & 0x10) != 0
        || (v17 = 1, !(unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8]) )
      {
        v17 = 0;
      }
      v18 = 0;
      v19 = v17 == (InformationBuffer[1] & 1);
      v20 = InformationBuffer[3];
      if ( v19 )
        v18 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)v16;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != v20 )
        goto LABEL_21;
      v21 = 0;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == InformationBuffer[6] )
        v21 = v18;
      if ( memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
             (char *)InformationBuffer + (unsigned int)InformationBuffer[4],
             v20) )
      {
LABEL_21:
        v21 = 0;
      }
      VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, a2);
      v23 = (unsigned __int8)v13;
      if ( InformationBuffer[5] == VPortBlockForRequest->VPortParams.NumQueuePairs )
        v23 = v21;
      OpenQueue = MiniportHandle->OpenQueue;
      v25 = v16 & 0xFFFF00;
      while ( OpenQueue )
      {
        NdisRSSParameters = OpenQueue->NdisRSSParameters;
        if ( NdisRSSParameters && OpenQueue != a1 )
          v25 |= NdisRSSParameters->HashInformation & 0xFFFF00;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      v7 = v23;
      InformationBuffer[2] = v31 | v25;
      v19 = v25 == (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00);
      v4 = a3;
      if ( !v19 )
        v7 = (unsigned __int8)v13;
    }
    else
    {
      v7 = 0;
    }
  }
  MiniportHandle->MiniportThread = v13;
  MiniportHandle->LockDbg = (unsigned int)v13;
  KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
  if ( v7 )
    goto LABEL_33;
LABEL_34:
  *v4 = v9;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v29) = v9;
    LODWORD(v28) = v7;
    WPP_SF_qqDD(0x25u, &WPP_3f6e3b5cccdc3bc25dcf36d3a561497f_Traceguids, MiniportHandle, a1, v28, v29);
  }
  if ( v9 && (byte_1C00A2084 & 4) != 0 )
    McTemplateK0jqxqdq(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v9,
      27,
      (char)a1);
  return v7;
}
