/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1C00C2440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      11,
      (struct _GUID *)&WPP_d6e145cd609030e83dc302cf723a6b51_Traceguids);
  return 393256LL;
}
