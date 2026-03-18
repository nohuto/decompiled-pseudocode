/*
 * XREFs of MiGetVadLargePageIndex @ 0x1402E5604
 * Callers:
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadLargePageIndex(__int64 a1)
{
  return (unsigned int)MiVadPageIndices[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
