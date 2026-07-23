/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x1401C3350
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14074F160 (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
