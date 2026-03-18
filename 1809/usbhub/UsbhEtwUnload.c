/*
 * XREFs of UsbhEtwUnload @ 0x1C005D030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

int UsbhEtwUnload()
{
  int result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0xAu,
               (__int64)&WPP_cc578fc9c2c43cfecb4ae60c749ea461_Traceguids);
  if ( RegHandle )
  {
    result = EtwUnregister(RegHandle);
    RegHandle = 0LL;
  }
  return result;
}
