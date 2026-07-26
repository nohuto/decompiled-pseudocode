/*
 * XREFs of ndisOidPreMaxLinkSpeed @ 0x1C006D360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

char __fastcall ndisOidPreMaxLinkSpeed(__int64 *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 v3; // rbp
  __int64 v5; // rax
  char v7[4]; // [rsp+38h] [rbp-30h]

  v1 = a1[4];
  v2 = 0;
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      173,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      0,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v5 = a1[2];
    if ( v5 )
    {
      v3 = *(_QWORD *)(v5 + 32);
    }
    else if ( *a1 )
    {
      v3 = *a1;
    }
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x10u )
    {
      *(_DWORD *)(v1 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
      goto LABEL_13;
    }
    *(_OWORD *)*(_QWORD *)(v1 + 40) = *(_OWORD *)(v3 + 3024);
    *((_DWORD *)a1 + 10) = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
  }
  v2 = 1;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAEu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      v2,
      *(_DWORD *)v7);
  }
  return v2;
}
