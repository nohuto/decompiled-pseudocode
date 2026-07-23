/*
 * XREFs of IopOpenRegistryKey @ 0x1406C7B50
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140180DC0 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x140188754 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x1401916C0 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x140192C9C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140285074 (IopAllowRemoteDASD.c)
 *     IopLoadUnloadDriver @ 0x1406C79F0 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x14071A2B0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14071A720 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x14074CAA0 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14075F41C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
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
