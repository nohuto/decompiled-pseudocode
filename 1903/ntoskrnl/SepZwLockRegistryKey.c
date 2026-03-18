/*
 * XREFs of SepZwLockRegistryKey @ 0x14078ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1401C21B0 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
