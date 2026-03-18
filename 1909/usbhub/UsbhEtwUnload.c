/*
 * XREFs of UsbhEtwUnload @ 0x1C005F6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

int UsbhEtwUnload()
{
  _UNKNOWN **v0; // rax

  v0 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LODWORD(v0) = WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1u,
                    0xAu,
                    (__int64)&WPP_cc578fc9c2c43cfecb4ae60c749ea461_Traceguids);
  if ( RegHandle )
  {
    LODWORD(v0) = EtwUnregister(RegHandle);
    RegHandle = 0LL;
  }
  return (int)v0;
}
