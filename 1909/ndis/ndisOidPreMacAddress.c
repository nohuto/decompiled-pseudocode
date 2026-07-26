/*
 * XREFs of ndisOidPreMacAddress @ 0x1C006D1D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

char __fastcall ndisOidPreMacAddress(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // eax

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      169,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    if ( a1[2] )
      goto LABEL_10;
    *((_DWORD *)a1 + 10) = 0;
    v5 = *(_QWORD *)(v1 + 4040);
    v6 = *(unsigned __int16 *)(v5 + 1124);
    if ( *(_DWORD *)(v3 + 48) < v6 )
    {
      *(_DWORD *)(v3 + 56) = v6;
      *((_DWORD *)a1 + 10) = -1073676268;
      goto LABEL_10;
    }
    memmove(*(void **)(v3 + 40), (const void *)(v5 + 1126), *(unsigned __int16 *)(v5 + 1124));
    *((_DWORD *)a1 + 10) = 0;
    *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4040) + 1124LL);
  }
  v4 = 1;
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      170,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *((_DWORD *)a1 + 10));
  return v4;
}
