/*
 * XREFs of ZwLockProductActivationKeys @ 0x1401BA390
 * Callers:
 *     ExInitializeTimeRefresh @ 0x1409C5288 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
