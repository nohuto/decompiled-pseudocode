/*
 * XREFs of ZwEnableLastKnownGood @ 0x1401C2750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwEnableLastKnownGood(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
