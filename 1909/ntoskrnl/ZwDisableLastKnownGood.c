/*
 * XREFs of ZwDisableLastKnownGood @ 0x1401C26F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwDisableLastKnownGood(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
