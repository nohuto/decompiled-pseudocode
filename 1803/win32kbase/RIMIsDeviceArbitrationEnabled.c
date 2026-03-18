/*
 * XREFs of RIMIsDeviceArbitrationEnabled @ 0x1C00E7DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RIMIsDeviceArbitrationEnabled()
{
  return gDeviceArbitrationType != 0;
}
