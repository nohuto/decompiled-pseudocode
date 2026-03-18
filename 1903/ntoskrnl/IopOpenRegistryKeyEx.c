/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14071BDB0
 * Callers:
 *     PnpBootDeviceWait @ 0x14018D970 (PnpBootDeviceWait.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5770 (IopStoreSystemPartitionInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6E88 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A0FB40 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A0FED8 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A10EAC (PipGetDriverTagPriority.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 *     PiInitCacheGroupInformation @ 0x140A1719C (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x140A1BE74 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
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
