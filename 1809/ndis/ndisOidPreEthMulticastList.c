/*
 * XREFs of ndisOidPreEthMulticastList @ 0x1C00CD290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqqq @ 0x1C00420DC (WPP_SF_qqqq.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00CD1C0 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00CD358 (ndisSetOpenEthMulticastList.c)
 *     ndisQueryMiniportEthMulticastList @ 0x1C00E4B94 (ndisQueryMiniportEthMulticastList.c)
 *     ndisQueryOpenEthMulticastList @ 0x1C00E4C6C (ndisQueryOpenEthMulticastList.c)
 *     ndisSetRestoreMulticastList @ 0x1C00E4DD0 (ndisSetRestoreMulticastList.c)
 */

unsigned __int8 __fastcall ndisOidPreEthMulticastList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  unsigned __int8 v4; // si
  __int64 v5; // rbp
  int v6; // eax
  int OpenEthMulticastList; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqq(0x7Eu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v5, v3, v1, a1);
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 == 2 )
  {
    if ( *(_QWORD *)a1 )
      goto LABEL_22;
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_10;
  }
  if ( !v6 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      OpenEthMulticastList = ndisQueryOpenEthMulticastList(v3);
LABEL_19:
      *(_DWORD *)(a1 + 40) = OpenEthMulticastList;
      v4 = 1;
      goto LABEL_10;
    }
    if ( !*(_QWORD *)a1 )
      goto LABEL_10;
LABEL_22:
    OpenEthMulticastList = ndisQueryMiniportEthMulticastList(v5, v1);
    goto LABEL_19;
  }
  if ( v6 == 1 )
  {
    if ( !v3 || (v4 = ndisSetOpenEthMulticastList(v3, v1, a1 + 40), v4 != 1) )
    {
      if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
      {
        v9 = *(_QWORD *)(a1 + 16);
        v10 = v5;
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 32);
        ndisSetRestoreMulticastList(v10, v1);
      }
      if ( v5 )
        v4 = ndisSetMiniportEthMulticastList(v5, v1, (int *)(a1 + 40));
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v12) = *(_DWORD *)(a1 + 40);
    LODWORD(v11) = v4;
    WPP_SF_qqDD(0x7Fu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v5, v3, v11, v12);
  }
  return v4;
}
