/*
 * XREFs of ZwUnloadKey2 @ 0x1401C4490
 * Callers:
 *     PiDrvDbUnloadHive @ 0x1406F2268 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1406F22B4 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x14072A02C (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14084280C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x140846C2C (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A0FD2C (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
