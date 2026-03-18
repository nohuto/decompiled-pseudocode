/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406F0080
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14068136C (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1, ACCESS_MASK a2, int a3, void *a4, int a5)
{
  return ObpCreateDirectoryObject(a1, a2, a3, a4, a5);
}
