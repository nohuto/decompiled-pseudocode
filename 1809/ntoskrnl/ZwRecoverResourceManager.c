/*
 * XREFs of ZwRecoverResourceManager @ 0x1401BAF50
 * Callers:
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
