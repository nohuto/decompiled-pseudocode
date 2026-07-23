/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1401C2BD0
 * Callers:
 *     sub_140622358 @ 0x140622358 (sub_140622358.c)
 *     SiTranslateSymbolicLink @ 0x1406D3750 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14072AB78 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x14073C304 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140857660 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140910A0C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
