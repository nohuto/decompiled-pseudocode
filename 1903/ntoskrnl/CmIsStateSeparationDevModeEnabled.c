/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x140823B28
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return CmStateSeparationDevMode != 0;
}
