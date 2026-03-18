/*
 * XREFs of MiGetVadLargePageIndex @ 0x1402E5364
 * Callers:
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadLargePageIndex(__int64 a1)
{
  return (unsigned int)MiVadPageIndices[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
