/*
 * XREFs of ndisOidPreEnumeratePorts @ 0x1C006CBB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisEnumeratePorts @ 0x1C0061FD0 (ndisEnumeratePorts.c)
 */

char __fastcall ndisOidPreEnumeratePorts(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rax
  int v6; // eax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      188,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      v6 = -1073676265;
    else
      v6 = ndisEnumeratePorts(
             v1,
             *(_DWORD **)(v3 + 40),
             *(_DWORD *)(v3 + 48),
             (unsigned int *)(v3 + 52),
             (unsigned int *)(v3 + 56));
    *(_DWORD *)(a1 + 40) = v6;
    v4 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      189,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3,
      *(_DWORD *)(a1 + 40));
  return v4;
}
