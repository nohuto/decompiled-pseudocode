/*
 * XREFs of NdisGetVersion @ 0x1C00320B0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 */

UINT NdisGetVersion(void)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      69,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      83);
  return 393299;
}
