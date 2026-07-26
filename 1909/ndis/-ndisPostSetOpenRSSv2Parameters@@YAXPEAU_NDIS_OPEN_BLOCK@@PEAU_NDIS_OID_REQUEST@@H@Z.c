/*
 * XREFs of ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C5644
 * Callers:
 *     ndisOidPostRSSv2Parameters @ 0x1C00C7150 (ndisOidPostRSSv2Parameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C003B8A8 (ndisPostSetOpenRSSParametersHelper.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C54B0 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6AB0 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisPostSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_OID_REQUEST *v4; // rsi
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx
  char v8; // [rsp+30h] [rbp-38h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      41,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      v8,
      a3);
  }
  MiniportHandle = a1->MiniportHandle;
  if ( !a3 )
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( NdisRSSParameters )
      NdisRSSParameters->HashInformation = *((_DWORD *)v4->DATA.QUERY_INFORMATION.InformationBuffer + 2);
    ndisPostSetMiniportRSSv2Parameters(MiniportHandle, v4, 0);
    if ( ndisShouldCacheRSSv2ParametersInMiniport(v4) )
      ndisPostSetOpenRSSParametersHelper(
        MiniportHandle,
        (__int64)a1,
        (__int64)MiniportHandle->CombinedNdisRSSParameters);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x2Au,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v4,
      a3);
}
