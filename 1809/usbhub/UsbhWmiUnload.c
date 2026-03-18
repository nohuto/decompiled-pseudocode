/*
 * XREFs of UsbhWmiUnload @ 0x1C0053700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

void UsbhWmiUnload()
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_a6355f778b1132e8a13bd07b7543ef0f_Traceguids);
  if ( UsbhWmiInit )
  {
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    UsbhWmiInit = 0;
  }
}
