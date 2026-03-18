/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14073C494
 * Callers:
 *     PnpBootDeviceWait @ 0x1401823CC (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PnpInitializePnpWatchdogs @ 0x1409C9F5C (PnpInitializePnpWatchdogs.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CA088 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x1409CA3F8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CA988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1409CAF08 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1409CC2D4 (PipInitializeEarlyLaunchDrivers.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D62F4 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  v5.Length = 48;
  v5.Attributes = 576;
  return ZwOpenKey(a1, a4, &v5);
}
