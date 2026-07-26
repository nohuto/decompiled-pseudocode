/*
 * XREFs of ndisOidPreEthMulticastOid @ 0x1C003FD50
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetMiniportEthMulticastList @ 0x1C0025464 (ndisSetMiniportEthMulticastList.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025880 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqqD @ 0x1C003FE58 (WPP_RECORDER_SF_qqqqD.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF2C (ndisSetOpenEthAddDeleteMulticast.c)
 */

char __fastcall ndisOidPreEthMulticastOid(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  char v7; // di
  __int64 v8; // rbp
  int v10; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  v8 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x5Du,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v8,
      v6,
      v4);
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      v7 = ndisSetOpenEthAddDeleteMulticast(v6, v4);
      if ( v7 != 1 && v8 && *(_DWORD *)(v4 + 32) == 16843011 )
        v7 = ndisSetMiniportEthMulticastList(v8, v4, (_DWORD *)(a1 + 40));
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqD(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v10, v8, v6, *(_QWORD *)(a1 + 32), a1, v7);
  return v7;
}
