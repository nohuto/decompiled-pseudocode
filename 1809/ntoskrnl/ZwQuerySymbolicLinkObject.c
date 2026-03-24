/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1401BAC70
 * Callers:
 *     sub_140586D3C @ 0x140586D3C (sub_140586D3C.c)
 *     SiTranslateSymbolicLink @ 0x1406AED98 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140704428 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x140711FAC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081D730 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1408D3148 (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget, ReturnedLength);
}
