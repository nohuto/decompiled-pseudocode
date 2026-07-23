/*
 * XREFs of ZwRecoverResourceManager @ 0x1401C2D50
 * Callers:
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
