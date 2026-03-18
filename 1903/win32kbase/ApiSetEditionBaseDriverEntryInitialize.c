/*
 * XREFs of ApiSetEditionBaseDriverEntryInitialize @ 0x1C007611C
 * Callers:
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionBaseDriverEntryInitialize()
{
  unsigned int v0; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      450,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  v0 = 0;
  if ( (int)IsEditionBaseDriverEntryInitializeSupported() >= 0 )
    v0 = EditionBaseDriverEntryInitialize();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      451,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v0;
}
