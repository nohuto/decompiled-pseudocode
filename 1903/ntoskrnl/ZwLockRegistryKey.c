/*
 * XREFs of ZwLockRegistryKey @ 0x1401C21B0
 * Callers:
 *     NtLockProductActivationKeys @ 0x140734D00 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x14078ABE0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
