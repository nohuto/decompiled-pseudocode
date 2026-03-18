/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x140906380
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObMakeTemporaryObject @ 0x1406C73F0 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(PVOID *a1)
{
  ObMakeTemporaryObject(*a1);
  return ObfDereferenceObjectWithTag(*a1, 0x7254624Fu);
}
