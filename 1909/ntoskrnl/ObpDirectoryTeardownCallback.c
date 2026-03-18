/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x140944420
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObMakeTemporaryObject @ 0x1406A12C0 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(PVOID *a1)
{
  ObMakeTemporaryObject(*a1);
  return ObfDereferenceObjectWithTag(*a1, 0x7254624Fu);
}
