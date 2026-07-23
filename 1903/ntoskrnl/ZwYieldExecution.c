/*
 * XREFs of ZwYieldExecution @ 0x1401C0990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwYieldExecution(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
