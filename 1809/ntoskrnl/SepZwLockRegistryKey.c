/*
 * XREFs of SepZwLockRegistryKey @ 0x140765570
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1401BA3B0 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
