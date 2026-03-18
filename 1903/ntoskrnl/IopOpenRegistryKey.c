/*
 * XREFs of IopOpenRegistryKey @ 0x140708754
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189294 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x140193270 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x14019B644 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x14019CDBC (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x14029C038 (IopAllowRemoteDASD.c)
 *     IopLoadUnloadDriver @ 0x1407087B0 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x140709A10 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x14074257C (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1407429F0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140742B00 (pIoQueryBusDescription.c)
 *     IopRegistryOpenDeepestPath @ 0x14076418C (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     IopSymlinkQueryEnabledClasses @ 0x140784DAC (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, ULONG Disposition)
{
  OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF

  v6.ObjectName = a3;
  *(_QWORD *)&v6.Length = 48LL;
  *(_QWORD *)&v6.Attributes = 576LL;
  v6.RootDirectory = a2;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  if ( (_BYTE)Disposition )
    return ZwCreateKey(a1, a4, &v6, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &v6);
}
