/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0080684
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0080578 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00805EC (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007FB14 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  KIRQL v6; // r12
  unsigned int v7; // edi
  bool v8; // cl
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v9; // r10
  int v10; // eax
  UINT v11; // ebp
  unsigned int HashSecretKeyOffset; // edx
  unsigned int v13; // ecx
  UINT v14; // eax
  _DWORD *InformationBuffer; // r9
  int v16; // edx
  unsigned __int16 Flags; // r8
  struct _NDIS_VPORT_BLOCK *v18; // rax
  int HashInformation; // eax
  unsigned int HashSecretKeySize; // eax
  struct _NDIS_VPORT_BLOCK *v22; // [rsp+30h] [rbp-48h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v23; // [rsp+80h] [rbp+8h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v24; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_VPORT_BLOCK *v25; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x12u, &WPP_3f6e3b5cccdc3bc25dcf36d3a561497f_Traceguids, a1, a2);
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 4131581;
  if ( !a1->RecvScaleCapabilities.Header.Size )
  {
    v7 = -1073741637;
    goto LABEL_30;
  }
  ndisGetCombinedRSSParameters(a1, a2, &v25, &v24, 0LL, 0LL);
  ndisGetCombinedRSSParameters(a1, a2, &v22, &v23, 0LL, 0LL);
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
    goto LABEL_30;
  }
  if ( (v23->Flags & 0x10) != 0 || !LOBYTE(v23->HashInformation) )
  {
    v8 = 0;
    goto LABEL_10;
  }
LABEL_12:
  v9 = v24;
  v10 = -1;
  v11 = 0;
  HashSecretKeyOffset = v24->HashSecretKeyOffset;
  v13 = HashSecretKeyOffset + v24->HashSecretKeySize;
  if ( v13 >= HashSecretKeyOffset )
    v10 = HashSecretKeyOffset + v24->HashSecretKeySize;
  v14 = v10 + 28;
  if ( v13 >= HashSecretKeyOffset )
    v11 = v14;
  v7 = v13 < HashSecretKeyOffset ? 0xC0010015 : 0;
  if ( v13 >= HashSecretKeyOffset )
  {
    v7 = 0;
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v11 )
    {
      InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      v16 = 0;
      *InformationBuffer = 1835464;
      Flags = v9->Flags;
      if ( (Flags & 0x10) == 0 && LOBYTE(v9->HashInformation) )
      {
        v16 = ~(_BYTE)Flags & 2 | 5;
        if ( (Flags & 8) != 0 )
          v16 = ~(_BYTE)Flags & 2 | 1;
        if ( (Flags & 4) == 0 )
          v16 |= 0x10u;
      }
      v18 = v25;
      InformationBuffer[1] = v16;
      InformationBuffer[5] = v18->VPortParams.NumQueuePairs;
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
      a2->DATA.QUERY_INFORMATION.BytesWritten = v11;
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = v11;
      v7 = -1073676268;
    }
  }
LABEL_30:
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x13u, &WPP_3f6e3b5cccdc3bc25dcf36d3a561497f_Traceguids, (__int64)a1, v7);
  return v7;
}
