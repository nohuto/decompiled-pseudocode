/*
 * XREFs of ZwMapUserPhysicalPages @ 0x1401BA490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VirtualAddresses);
}
