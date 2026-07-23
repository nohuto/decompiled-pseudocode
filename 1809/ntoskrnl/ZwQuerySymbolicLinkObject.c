/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1401BADD0
 * Callers:
 *     sub_140587D3C @ 0x140587D3C (sub_140587D3C.c)
 *     SiTranslateSymbolicLink @ 0x1406B0038 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x1407056C8 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x14071324C (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081E930 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1408D4408 (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
