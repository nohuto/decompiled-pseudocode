/*
 * XREFs of ndisOidPreOffloadHwCaps @ 0x1C003C460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisCopyNdisOffload @ 0x1C003C584 (ndisCopyNdisOffload.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadHwCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned int v6; // r8d
  char v7[4]; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      223,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_12;
  if ( !*a1 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v1 + 4096) )
  {
LABEL_12:
    *((_DWORD *)a1 + 10) = -1073741637;
    v4 = 1;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 48);
    if ( v6 < 0x70 )
    {
      *(_DWORD *)(v3 + 56) = 112;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      ndisCopyNdisOffload(*(_QWORD *)(v3 + 40), *(_QWORD *)(v1 + 4096) + 656, v6, v3 + 52, 1);
      *((_DWORD *)a1 + 10) = 0;
    }
  }
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xE0u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v7);
  }
  return v4;
}
