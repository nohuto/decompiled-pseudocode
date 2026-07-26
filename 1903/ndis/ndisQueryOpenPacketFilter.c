/*
 * XREFs of ndisQueryOpenPacketFilter @ 0x1C006F640
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C0026540 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisQueryOpenPacketFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int v5; // esi
  int v7; // eax
  char v8; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      73,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v8);
  }
  if ( *(_DWORD *)(v3 + 48) >= 4u )
  {
    v7 = *(_DWORD *)(v2 + 464);
    if ( !v7 || v7 == 16 )
      v5 = *(_DWORD *)(a1 + 432);
    **(_DWORD **)(v3 + 40) = v5;
    *(_DWORD *)(v3 + 52) = 4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        75,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        a1,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        74,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        a1,
        v3,
        20);
    }
    return 3221291028LL;
  }
}
