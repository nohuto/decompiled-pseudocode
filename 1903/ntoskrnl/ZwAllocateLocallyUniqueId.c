/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x1401C0ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Luid, v1, v2);
}
