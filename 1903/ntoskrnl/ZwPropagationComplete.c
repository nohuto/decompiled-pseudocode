/*
 * XREFs of ZwPropagationComplete @ 0x1401C2770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
