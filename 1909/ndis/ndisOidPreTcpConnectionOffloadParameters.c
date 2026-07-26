/*
 * XREFs of ndisOidPreTcpConnectionOffloadParameters @ 0x1C006ECE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C006E388 (ndisOidPreQueryTcpConnectionParameters.c)
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
  char v11[4]; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v3 = 1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      229,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      v4);
  }
  v7 = 0;
  if ( !v2 || *(_QWORD *)(v2 + 4096) )
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v3;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xE6u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)v11);
  }
  return v3;
}
