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
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
