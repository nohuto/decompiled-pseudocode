/*
 * XREFs of ZwUnloadKey2 @ 0x1401BB990
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140683780 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1406837C8 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x1406E1860 (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1408098D0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCDC (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1409DE194 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
