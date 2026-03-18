/*
 * XREFs of ?ivDefaultSendCallbackHandler@@YAJPEAU_IVSRContext@@@Z @ 0x1C018C0F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ivDefaultSendCallbackHandler(struct _IVSRContext *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 12, 10, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  return 0LL;
}
