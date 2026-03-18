/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14071DBA0
 * Callers:
 *     PnpBootDeviceWait @ 0x14018E280 (PnpBootDeviceWait.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5680 (IopStoreSystemPartitionInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6D98 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A102D8 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A10670 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A109A8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A11644 (PipGetDriverTagPriority.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 *     PiInitCacheGroupInformation @ 0x140A1765C (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x140A1C050 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a1 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, a4, &v5);
}
