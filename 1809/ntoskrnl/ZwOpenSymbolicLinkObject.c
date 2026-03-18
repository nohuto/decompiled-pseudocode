/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1401BA650
 * Callers:
 *     sub_140586D3C @ 0x140586D3C (sub_140586D3C.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     SiTranslateSymbolicLink @ 0x1406AEDB8 (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     SiOpenArcNameObject @ 0x14070456C (SiOpenArcNameObject.c)
 *     IoDeleteSymbolicLink @ 0x14070EBE0 (IoDeleteSymbolicLink.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     BiTranslateSymbolicLink @ 0x140711FCC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081D750 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1408D3168 (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D62F4 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
