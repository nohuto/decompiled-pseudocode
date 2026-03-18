/*
 * XREFs of ZwLockProductActivationKeys @ 0x1401C2190
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A0E83C (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer, pSafeMode, v2);
}
