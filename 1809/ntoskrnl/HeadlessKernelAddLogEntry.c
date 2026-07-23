/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1400F52E8
 * Callers:
 *     PnpBootDeviceWait @ 0x14018252C (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x14094D904 (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
