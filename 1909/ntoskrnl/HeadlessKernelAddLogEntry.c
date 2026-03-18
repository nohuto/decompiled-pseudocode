/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1401541F4
 * Callers:
 *     PnpBootDeviceWait @ 0x14018E280 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x14098C914 (HdlspKernelAddLogEntry.c)
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
