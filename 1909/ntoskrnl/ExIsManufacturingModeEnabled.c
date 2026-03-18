/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x1407690D0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A109A8 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

__int64 ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
