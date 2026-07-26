/*
 * XREFs of ndisOidPreEthMulticastList @ 0x1C0025740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C0025474 (ndisSetMiniportEthMulticastList.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025890 (WPP_RECORDER_SF_qqqq.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0025988 (ndisSetOpenEthMulticastList.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0068558 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisQueryMiniportEthMulticastList @ 0x1C006F270 (ndisQueryMiniportEthMulticastList.c)
 *     ndisQueryOpenEthMulticastList @ 0x1C006F5BC (ndisQueryOpenEthMulticastList.c)
 */

char __fastcall ndisOidPreEthMulticastList(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  char v5; // si
  __int64 v6; // rbp
  int v7; // eax
  int OpenEthMulticastList; // eax
  __int64 v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      107,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v6,
      v4,
      v2,
      a1);
  v7 = *(_DWORD *)(v2 + 4);
  if ( v7 == 2 )
  {
    if ( *(_QWORD *)a1 )
      goto LABEL_22;
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_10;
  }
  if ( !v7 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      OpenEthMulticastList = ndisQueryOpenEthMulticastList(v4);
LABEL_19:
      *(_DWORD *)(a1 + 40) = OpenEthMulticastList;
      v5 = 1;
      goto LABEL_10;
    }
    if ( !*(_QWORD *)a1 )
      goto LABEL_10;
LABEL_22:
    OpenEthMulticastList = ndisQueryMiniportEthMulticastList(v6, v2);
    goto LABEL_19;
  }
  if ( v7 == 1 )
  {
    if ( !v4 || (v5 = ndisSetOpenEthMulticastList(v4, v2), v5 != 1) )
    {
      if ( *(_UNKNOWN **)(v2 + 104) == &ndisIntReqRestore )
      {
        v10 = *(_QWORD *)(a1 + 16);
        v11 = (struct _NDIS_MINIPORT_BLOCK *)v6;
        if ( v10 )
          v11 = *(struct _NDIS_MINIPORT_BLOCK **)(v10 + 32);
        ndisSetRestoreMulticastList(v11, (struct _NDIS_OID_REQUEST *)v2);
      }
      if ( v6 )
        v5 = ndisSetMiniportEthMulticastList(v6, v2, (_DWORD *)(a1 + 40));
    }
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *(_DWORD *)(a1 + 40);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x6Cu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v6,
      v4,
      v5,
      v12);
  }
  return v5;
}
