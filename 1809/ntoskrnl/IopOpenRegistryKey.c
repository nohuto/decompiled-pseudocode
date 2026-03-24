/*
 * XREFs of IopOpenRegistryKey @ 0x1406C68B0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140180C80 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x140188614 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x140191580 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x140192B5C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140284E84 (IopAllowRemoteDASD.c)
 *     IopLoadUnloadDriver @ 0x1406C6750 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1406CF234 (IopBootLog.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x140719010 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140719480 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140719594 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x14074B8B0 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14075E22C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8530 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, ULONG Disposition)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  if ( (_BYTE)Disposition )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
