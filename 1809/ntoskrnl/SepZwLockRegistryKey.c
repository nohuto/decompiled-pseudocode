/*
 * XREFs of SepZwLockRegistryKey @ 0x1407643A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1401BA230 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
