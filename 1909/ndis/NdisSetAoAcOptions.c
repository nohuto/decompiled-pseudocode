/*
 * XREFs of NdisSetAoAcOptions @ 0x1C011D400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v7; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 4456);
  v5 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      48,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      a1,
      a2);
    v5 = *(_QWORD *)(v2 + 4456);
  }
  if ( v5 )
  {
    v7 = ndisNicQuietDerefDefaultTimeout;
    if ( (a2 & 1) != 0 )
      v7 = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
    *(_DWORD *)(v4 + 284) = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        50,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        v7);
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3,
        14,
        49,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids);
    return 3221225659LL;
  }
}
