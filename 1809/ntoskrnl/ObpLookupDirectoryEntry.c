/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14072A3D8
 * Callers:
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x140625DE0 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0, 0, a4);
}
