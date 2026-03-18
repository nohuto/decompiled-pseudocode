/*
 * XREFs of RIMIsRunningOnMobile @ 0x1C00F2610
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01049B8 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x1C0104DE4 (rimObsCheckForObservationPermissions.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0107200 (RIMUpdateMonitorQuirk.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C00F2584 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnMobile()
{
  return (unsigned int)RIMGetOneCoreEdition() == 4;
}
