/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1401BA7D0
 * Callers:
 *     sub_140587D3C @ 0x140587D3C (sub_140587D3C.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 *     SiTranslateSymbolicLink @ 0x1406B0038 (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     SiOpenArcNameObject @ 0x1407057EC (SiOpenArcNameObject.c)
 *     IoDeleteSymbolicLink @ 0x14070FE60 (IoDeleteSymbolicLink.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     BiTranslateSymbolicLink @ 0x14071324C (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081E930 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1408D4408 (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D72F4 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
