/*
 * XREFs of ZwLockRegistryKey @ 0x1401C2D30
 * Callers:
 *     NtLockProductActivationKeys @ 0x140736F60 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x14078D0C0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
