/*
 * XREFs of ZwTerminateEnclave @ 0x1401C4350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BaseAddress);
}
