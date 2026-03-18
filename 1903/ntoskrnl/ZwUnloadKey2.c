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

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
