/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x14073BE00
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

__int64 ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
