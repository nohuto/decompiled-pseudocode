/*
 * XREFs of SepZwLockRegistryKey @ 0x140764380
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1401BA250 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
