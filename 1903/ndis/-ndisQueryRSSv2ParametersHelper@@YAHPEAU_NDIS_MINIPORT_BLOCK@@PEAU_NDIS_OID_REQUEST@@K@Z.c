/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C571C
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C5580 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C563C (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C4A9C (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  struct _NDIS_OID_REQUEST *v4; // rsi
  KIRQL v6; // r12
  unsigned int v7; // ebx
  bool v8; // cl
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v9; // r9
  unsigned int HashSecretKeyOffset; // ecx
  unsigned int v11; // ebp
  UINT v12; // ebp
  _DWORD *InformationBuffer; // r10
  int v14; // edx
  unsigned __int16 Flags; // r8
  struct _NDIS_VPORT_BLOCK *v16; // rax
  int HashInformation; // eax
  unsigned int HashSecretKeySize; // eax
  int v19; // edx
  char v21; // [rsp+30h] [rbp-58h]
  struct _NDIS_VPORT_BLOCK *v22; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v23; // [rsp+90h] [rbp+8h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v24; // [rsp+98h] [rbp+10h] BYREF
  struct _NDIS_VPORT_BLOCK *v25; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      19,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      v21);
  }
  v4->DATA.QUERY_INFORMATION.BytesWritten = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( !a1->RecvScaleCapabilities.Header.Size )
  {
    v7 = -1073741637;
    goto LABEL_27;
  }
  ndisGetCombinedRSSParameters(a1, v4, &v25, &v24, 0LL, 0LL);
  ndisGetCombinedRSSParameters(a1, v4, &v22, &v23, 0LL, 0LL);
  v8 = v23 != 0LL;
  if ( (a1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) == 0 )
  {
LABEL_10:
    if ( !v8 )
      goto LABEL_11;
    goto LABEL_12;
  }
  if ( !v23 )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_27;
  }
  if ( (v23->Flags & 0x10) != 0 || !LOBYTE(v23->HashInformation) )
  {
    v8 = 0;
    goto LABEL_10;
  }
LABEL_12:
  v9 = v24;
  HashSecretKeyOffset = v24->HashSecretKeyOffset;
  v11 = HashSecretKeyOffset + v24->HashSecretKeySize;
  if ( v11 < HashSecretKeyOffset )
  {
    v7 = -1073676267;
  }
  else
  {
    v12 = v11 + 28;
    v7 = 0;
    if ( v4->DATA.QUERY_INFORMATION.InformationBufferLength >= v12 )
    {
      InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
      v14 = 0;
      *InformationBuffer = 1835464;
      Flags = v9->Flags;
      if ( (Flags & 0x10) == 0 && LOBYTE(v9->HashInformation) )
      {
        v14 = ~(_BYTE)Flags & 2 | 5;
        if ( (Flags & 8) != 0 )
          v14 = ~(_BYTE)Flags & 2 | 1;
        if ( (Flags & 4) == 0 )
          v14 |= 0x10u;
      }
      v16 = v25;
      InformationBuffer[1] = v14;
      InformationBuffer[5] = v16->VPortParams.NumQueuePairs;
      InformationBuffer[6] = v9->IndirectionTableSize >> 2;
      HashInformation = v9->HashInformation;
      if ( a3 )
        HashInformation = a3 | (unsigned __int8)HashInformation;
      InformationBuffer[2] = HashInformation;
      HashSecretKeySize = v9->HashSecretKeySize;
      InformationBuffer[3] = HashSecretKeySize;
      InformationBuffer[4] = 28;
      if ( HashSecretKeySize )
        memmove(InformationBuffer + 7, &v9->Header.Type + v9->HashSecretKeyOffset, HashSecretKeySize);
      v4->DATA.QUERY_INFORMATION.BytesWritten = v12;
    }
    else
    {
      v4->DATA.QUERY_INFORMATION.BytesNeeded = v12;
      v7 = -1073676268;
    }
  }
LABEL_27:
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      11,
      20,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      v7);
  }
  return v7;
}
