/*
 * XREFs of SepZwLockRegistryKey @ 0x14078D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1401C2D30 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
