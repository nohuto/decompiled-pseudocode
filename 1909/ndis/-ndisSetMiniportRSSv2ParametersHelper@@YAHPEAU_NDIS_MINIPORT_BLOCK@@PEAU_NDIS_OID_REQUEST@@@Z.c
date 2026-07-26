/*
 * XREFs of ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6544
 * Callers:
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6348 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6750 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 */

__int64 __fastcall ndisSetMiniportRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *InformationBuffer)
{
  struct _NDIS_OID_REQUEST *v2; // rdi
  unsigned int InformationBufferLength; // ecx
  unsigned int v5; // ebx
  int v6; // r9d
  unsigned int RequestId; // eax
  UINT Timeout; // r10d
  unsigned int v9; // r8d
  unsigned int v10; // eax
  NDIS_REQUEST_TYPE RequestType; // r8d
  char v13; // [rsp+30h] [rbp-38h]
  char v14; // [rsp+38h] [rbp-30h]

  v2 = InformationBuffer;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)InformationBuffer;
    LOBYTE(InformationBuffer) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InformationBuffer,
      11,
      25,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      v13);
  }
  InformationBufferLength = v2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( InformationBufferLength < 0x1C )
  {
    v2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v5 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 26;
LABEL_6:
      v14 = 20;
LABEL_21:
      LOBYTE(InformationBuffer) = 2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)InformationBuffer,
        11,
        v6,
        (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
        (char)a1,
        (char)v2,
        v14);
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  InformationBuffer = (struct _NDIS_OID_REQUEST *)v2->DATA.QUERY_INFORMATION.InformationBuffer;
  RequestId = (unsigned int)InformationBuffer->RequestId;
  Timeout = InformationBuffer->Timeout;
  v9 = Timeout + RequestId;
  if ( Timeout + RequestId < RequestId )
  {
    v5 = -1073676267;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 27;
      v14 = 21;
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  v10 = 28;
  if ( v9 > 0x1C )
    v10 = v9;
  RequestType = InformationBuffer->RequestType;
  if ( (RequestType & 1) == 0 || (RequestType & 4) == 0 || Timeout == 40 )
  {
    v5 = 0;
    if ( InformationBufferLength >= v10 )
      goto LABEL_22;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = v10;
    v5 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 29;
      goto LABEL_6;
    }
LABEL_25:
    if ( (byte_1C00E8084 & 4) != 0 )
      McTemplateK0jqxqqq(
        a1->IfIndex,
        &SetMiniportRSSCapsFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v5,
        1,
        (char)v2);
    return v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InformationBuffer) = 2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InformationBuffer,
      11,
      28,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      (char)v2,
      0);
  }
  v5 = -1073676267;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InformationBuffer) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InformationBuffer,
      11,
      30,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      (char)v2,
      v5);
  }
  if ( v5 )
    goto LABEL_25;
  return v5;
}
