/*
 * XREFs of ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C52E0
 * Callers:
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C5474 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisOidPostRSSv2Parameters @ 0x1C00C6F80 (ndisOidPostRSSv2Parameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C00C4730 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C4A9C (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C00C5C8C (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C00C691C (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 */

void __fastcall ndisPostSetMiniportRSSv2Parameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  struct _NDIS_OID_REQUEST *v4; // rdi
  struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *InformationBuffer; // r14
  KIRQL v7; // r12
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v9; // rbp
  char v10; // [rsp+30h] [rbp-58h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v11; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v12; // [rsp+48h] [rbp-40h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v13; // [rsp+50h] [rbp-38h] BYREF
  struct _NDIS_VPORT_BLOCK *v14; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      39,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      v10,
      a3);
  }
  if ( !a3 )
  {
    InformationBuffer = (struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *)v4->DATA.QUERY_INFORMATION.InformationBuffer;
    v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisGetCombinedRSSParameters(a1, v4, &v14, &v12, &v11, &v13);
    v9 = v11;
    if ( !v12 )
      ndisCreateRssV1Parameters(v11, *((_DWORD *)InformationBuffer + 6), 0x14u);
    ndisUpdateRssV1ParametersFromV2(v8, v14, v9, InformationBuffer, v13);
    ndisSetCombinedRSSParameters(a1, v4, v14, v9);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      40,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      (char)v4,
      a3);
  }
}
