/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1401C25D0
 * Callers:
 *     sub_140622358 @ 0x140622358 (sub_140622358.c)
 *     SiTranslateSymbolicLink @ 0x1406D3750 (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     SiOpenArcNameObject @ 0x14072ACBC (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x14073AC50 (IoDeleteSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x14073C304 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140857660 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140910A0C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5770 (IopStoreSystemPartitionInformation.c)
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
