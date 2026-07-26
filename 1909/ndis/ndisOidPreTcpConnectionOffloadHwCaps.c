/*
 * XREFs of ndisOidPreTcpConnectionOffloadHwCaps @ 0x1C006EBB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadHwCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      227,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  v4 = 0;
  if ( !*a1 )
    goto LABEL_11;
  if ( !*(_QWORD *)(v1 + 4096) )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x14u )
    {
      v5 = *(_QWORD *)(v1 + 4096);
      v6 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v6 = *(_OWORD *)(v5 + 1024);
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 1040);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 20;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  v4 = 1;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xE4u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v8);
  }
  return v4;
}
