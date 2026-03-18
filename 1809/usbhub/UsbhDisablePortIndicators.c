/*
 * XREFs of UsbhDisablePortIndicators @ 0x1C0040A80
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C0042850 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0040B48 (UsbhDispatch_PindicatorEvent.c)
 */

_DWORD *__fastcall UsbhDisablePortIndicators(__int64 a1)
{
  unsigned __int16 i; // bx
  _DWORD *result; // rax
  __int64 PortData; // rsi
  _DWORD *v5; // rax

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_35133b6d46fa39b50c5464f64ebf0a08_Traceguids);
  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v5 = FdoExt(a1);
      UsbhDispatch_PindicatorEvent(a1, PortData, 2LL, v5 + 346);
    }
  }
  return result;
}
