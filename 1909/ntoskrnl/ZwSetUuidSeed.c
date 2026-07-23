/*
 * XREFs of ZwSetUuidSeed @ 0x1401C41B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetUuidSeed(PUCHAR UuidSeed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UuidSeed);
}
