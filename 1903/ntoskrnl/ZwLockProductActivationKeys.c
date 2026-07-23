/*
 * XREFs of ZwLockProductActivationKeys @ 0x1401C2190
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A0E83C (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
