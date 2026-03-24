/*
 * XREFs of ZwRecoverResourceManager @ 0x1401BADF0
 * Callers:
 *     CmpInitCmRM @ 0x14067F2E8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, v1, v2);
}
