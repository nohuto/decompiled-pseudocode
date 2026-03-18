/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14075EB54
 * Callers:
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0LL, 0, a4);
}
