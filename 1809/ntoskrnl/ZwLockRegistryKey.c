/*
 * XREFs of ZwLockRegistryKey @ 0x1401BA3B0
 * Callers:
 *     NtLockProductActivationKeys @ 0x1406BD2D0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140765570 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
