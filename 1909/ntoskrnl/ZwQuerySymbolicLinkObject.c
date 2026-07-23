/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1401C3750
 * Callers:
 *     sub_140626208 @ 0x140626208 (sub_140626208.c)
 *     SiTranslateSymbolicLink @ 0x1406D2C00 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14072CA18 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x14073E204 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140856D60 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14091046C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
