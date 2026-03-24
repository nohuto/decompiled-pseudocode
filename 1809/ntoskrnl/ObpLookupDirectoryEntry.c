/*
 * XREFs of ObpLookupDirectoryEntry @ 0x1407291E8
 * Callers:
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x140624DC0 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0, 0, a4);
}
