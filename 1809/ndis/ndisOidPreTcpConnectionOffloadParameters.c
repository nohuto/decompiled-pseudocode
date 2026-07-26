/*
 * XREFs of ndisOidPreTcpConnectionOffloadParameters @ 0x1C00E48C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00E4390 (ndisOidPreQueryTcpConnectionParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // di
  __int64 v4; // r14
  char v5; // r15
  char v7; // bl
  int v8; // ecx
  char TcpConnectionParameters; // al
  int v11; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v3 = 1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xF8u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v2, v4);
  v7 = 0;
  if ( !v2 || *(_QWORD *)(v2 + 4128) )
  {
    v8 = *(_DWORD *)(v4 + 4);
    if ( !v8 || v8 == 2 )
    {
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(v2, a2, v4, (int *)(a1 + 40));
      v8 = *(_DWORD *)(v4 + 4);
      v5 = TcpConnectionParameters;
    }
    if ( v8 != 1 )
      v7 = v5;
    v3 = v7;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v11 = v3;
    WPP_SF_qdD(0xF9u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v2, *(_DWORD *)(a1 + 40), v11);
  }
  return v3;
}
