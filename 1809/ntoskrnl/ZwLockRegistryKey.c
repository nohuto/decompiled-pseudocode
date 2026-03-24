/*
 * XREFs of ZwLockRegistryKey @ 0x1401BA250
 * Callers:
 *     NtLockProductActivationKeys @ 0x1406BC030 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140764380 (SepZwLockRegistryKey.c)
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
