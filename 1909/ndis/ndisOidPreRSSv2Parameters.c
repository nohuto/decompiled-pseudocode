/*
 * XREFs of ndisOidPreRSSv2Parameters @ 0x1C00C7250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C5750 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C580C (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6348 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6750 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

char __fastcall ndisOidPreRSSv2Parameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rdi
  char v4; // bl
  struct _NDIS_OPEN_BLOCK *v5; // rbp
  int v6; // eax
  int *v7; // r15

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(struct _NDIS_OPEN_BLOCK **)(a1 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      43,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)v1,
      (char)v5,
      v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_17;
    v7 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v7 = (int *)(a1 + 40);
  }
  if ( v6 )
    goto LABEL_12;
  if ( v5 )
  {
    *v7 = ndisQueryOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
    goto LABEL_17;
  }
  if ( v1 )
  {
    *v7 = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
LABEL_12:
    if ( v6 == 1 )
    {
      if ( !v5 || (v4 = ndisSetOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3, v7), v4 != 1) )
      {
        if ( v1 )
          v4 = ndisSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, v7);
      }
    }
  }
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
      (char)v1,
      (char)v5,
      v4,
      *(_DWORD *)(a1 + 40));
  return v4;
}
