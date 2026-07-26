/*
 * XREFs of ndisQueryOpenPacketFilter @ 0x1C00E4CF0
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00C38B0 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueryOpenPacketFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v5; // esi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x5Cu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v7 = *(_DWORD *)(v2 + 464);
    if ( !v7 || v7 == 16 )
      v5 = *(_DWORD *)(a1 + 432);
    **(_DWORD **)(a2 + 40) = v5;
    *(_DWORD *)(a2 + 52) = 4;
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
    {
      v9 = 0;
      WPP_SF_qqd(0x5Eu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v9);
    }
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 4;
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
    {
      v8 = -1073676268;
      WPP_SF_qqd(0x5Du, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v8);
    }
    return 3221291028LL;
  }
}
