/*
 * XREFs of IopOpenRegistryKey @ 0x14070A534
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189844 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x140193A50 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x14019BCA4 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x14019D53C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x14029BD98 (IopAllowRemoteDASD.c)
 *     IopLoadUnloadDriver @ 0x14070A590 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x14070B7F0 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x14074447C (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1407448F0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x140768C8C (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14078710C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x140853E20 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
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
