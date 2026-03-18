/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14075A2C4
 * Callers:
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1406BF0C0 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0LL, 0, a4);
}
