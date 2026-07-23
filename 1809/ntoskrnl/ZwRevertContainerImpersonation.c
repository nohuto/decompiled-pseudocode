/*
 * XREFs of ZwRevertContainerImpersonation @ 0x1401BB190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwRevertContainerImpersonation(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
