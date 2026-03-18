/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1401BAC50
 * Callers:
 *     sub_140586D3C @ 0x140586D3C (sub_140586D3C.c)
 *     SiTranslateSymbolicLink @ 0x1406AEDB8 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140704448 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x140711FCC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081D750 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1408D3168 (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget, ReturnedLength);
}
