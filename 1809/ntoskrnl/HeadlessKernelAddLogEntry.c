/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1400F5268
 * Callers:
 *     PnpBootDeviceWait @ 0x1401823EC (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x14094C904 (HdlspKernelAddLogEntry.c)
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
