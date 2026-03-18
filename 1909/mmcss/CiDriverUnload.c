/*
 * XREFs of CiDriverUnload @ 0x1C000C3A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0004360 (WPP_SF_.c)
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_0cf46c375129332dca7ac6861072a04e_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  return CsTerminate();
}
