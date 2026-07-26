/*
 * XREFs of ndisOidPreSetHDSplitParameters @ 0x1C006E440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C0070AC4 (ndisUpdateHDSplitKeyword.c)
 */

unsigned __int8 __fastcall ndisOidPreSetHDSplitParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = *a1;
  v3 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      194,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_4;
  if ( !*a1 )
    goto LABEL_6;
  v5 = *(_BYTE *)(v1 + 32);
  if ( v5 <= 6u && (v5 != 6 || !*(_BYTE *)(v1 + 33)) )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_20;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 8u )
  {
    v6 = *(_QWORD *)(v3 + 40);
    if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) && *(_WORD *)(v6 + 2) >= 8u )
    {
      v7 = *(_QWORD *)(v1 + 4264);
      if ( v7 && (*(_DWORD *)(v7 + 12) & 1) != 0 )
      {
        ndisUpdateHDSplitKeyword(v1, (*(_DWORD *)(v6 + 4) & 1) == 0);
LABEL_6:
        v4 = 0;
        goto LABEL_20;
      }
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073676267;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 8;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC3u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      v4);
  return v4;
}
