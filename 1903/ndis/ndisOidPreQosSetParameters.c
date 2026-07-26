/*
 * XREFs of ndisOidPreQosSetParameters @ 0x1C006DEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisValidateQosParameters @ 0x1C0071734 (ndisValidateQosParameters.c)
 */

char __fastcall ndisOidPreQosSetParameters(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  char v5; // bl
  int v6; // eax
  int v7; // eax
  unsigned int v9; // [rsp+60h] [rbp+8h]

  v2 = a1[4];
  v4 = *a1;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      113,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v4,
      v2);
  }
  if ( *(_DWORD *)(v2 + 4) != 12 )
  {
    v5 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_21;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v2 + 48) < 0x34u )
  {
    v6 = -1073676268;
LABEL_9:
    *(_DWORD *)(v2 + 68) = 52;
LABEL_10:
    *((_DWORD *)a1 + 10) = v6;
LABEL_11:
    v5 = 1;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v2 + 52) < 0x34u )
  {
    v6 = -1073676266;
    goto LABEL_9;
  }
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    v7 = ndisValidateQosParameters(v4, a2, *(_QWORD *)(v2 + 40));
    *((_DWORD *)a1 + 10) = v7;
    if ( v7 )
    {
      if ( v7 == -1073676268 )
        *(_DWORD *)(v2 + 68) = v9;
      goto LABEL_11;
    }
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v2 + 48) < v9 )
    {
      *(_DWORD *)(v2 + 68) = v9;
      v6 = -1073676268;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v2 + 52) < v9 )
    {
      *(_DWORD *)(v2 + 68) = v9;
      v6 = -1073676266;
      goto LABEL_10;
    }
    *(_DWORD *)(v2 + 60) = 0;
    *(_DWORD *)(v2 + 64) = v9;
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x72u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v4,
      v5,
      *((_DWORD *)a1 + 10));
  return v5;
}
