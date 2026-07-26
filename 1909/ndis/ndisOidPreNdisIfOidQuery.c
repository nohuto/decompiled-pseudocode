/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C006D7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      177,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
