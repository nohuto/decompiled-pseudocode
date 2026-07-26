/*
 * XREFs of ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C563C
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C00C7080 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C571C (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 */

__int64 __fastcall ndisQueryOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  struct _NDIS_OID_REQUEST *v3; // rsi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  unsigned int v6; // eax
  unsigned int RSSv2ParametersHelper; // eax
  int v8; // edx
  unsigned int v9; // ebx
  char v11; // [rsp+30h] [rbp-18h]

  MiniportHandle = a1->MiniportHandle;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      23,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)MiniportHandle,
      v11);
  }
  NdisRSSParameters = a1->NdisRSSParameters;
  v6 = 0;
  if ( NdisRSSParameters )
    v6 = NdisRSSParameters->HashInformation & 0xFFFF00;
  RSSv2ParametersHelper = ndisQueryRSSv2ParametersHelper(MiniportHandle, v3, v6);
  v9 = RSSv2ParametersHelper;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      24,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)MiniportHandle,
      RSSv2ParametersHelper);
  }
  return v9;
}
