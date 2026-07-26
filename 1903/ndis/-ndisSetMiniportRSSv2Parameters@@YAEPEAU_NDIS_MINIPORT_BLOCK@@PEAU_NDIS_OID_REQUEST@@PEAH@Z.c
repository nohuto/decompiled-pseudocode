/*
 * XREFs of ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6178
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C00C7080 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C44E8 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6374 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  struct _NDIS_OID_REQUEST *v4; // rsi
  char v6; // r15
  int v7; // eax
  int v8; // edx
  int v9; // r14d
  int v10; // r9d
  KIRQL v11; // bl
  int CombinedRSSParameters; // eax
  char v14; // [rsp+30h] [rbp-48h]
  char v15; // [rsp+38h] [rbp-40h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      31,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      v14);
  }
  v4->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  v7 = ndisSetMiniportRSSv2ParametersHelper(a1, v4);
  v9 = v7;
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = 32;
    v15 = v7;
    goto LABEL_6;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(a1, v4, 0LL, 0LL, 0LL, 0LL);
  a1->MiniportThread = 0LL;
  v9 = CombinedRSSParameters;
  KeReleaseSpinLock(&a1->Lock, v11);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 33;
      v15 = v9;
LABEL_6:
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        v10,
        (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
        (char)a1,
        (char)v4,
        v15);
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_11:
  *a3 = v9;
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      34,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      (char)v4,
      v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x23u,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)a1,
      (char)v4,
      v6,
      *a3);
  return v6;
}
