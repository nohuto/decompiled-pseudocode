/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1401C3150
 * Callers:
 *     sub_140626208 @ 0x140626208 (sub_140626208.c)
 *     SiTranslateSymbolicLink @ 0x1406D2C00 (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070F670 (IopQueryRegistryKeySystemPath.c)
 *     SiOpenArcNameObject @ 0x14072CB5C (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x14073CBB0 (IoDeleteSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x14073E204 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140856D60 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14091046C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5680 (IopStoreSystemPartitionInformation.c)
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
