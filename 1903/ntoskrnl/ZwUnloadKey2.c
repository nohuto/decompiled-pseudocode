/*
 * XREFs of ZwUnloadKey2 @ 0x1401C3910
 * Callers:
 *     PiDrvDbUnloadHive @ 0x1406F07C8 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1406F0814 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140728CBC (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A0F594 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
