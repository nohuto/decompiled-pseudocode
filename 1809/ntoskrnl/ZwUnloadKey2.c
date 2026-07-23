/*
 * XREFs of ZwUnloadKey2 @ 0x1401BBB10
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140684920 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140684968 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x1406E2AE0 (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14080AAB0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1409DF194 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
