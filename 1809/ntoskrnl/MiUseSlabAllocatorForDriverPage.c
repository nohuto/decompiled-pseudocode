/*
 * XREFs of MiUseSlabAllocatorForDriverPage @ 0x1400DBEB0
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseSlabAllocatorForDriverPage(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (MiFlags & 0x10000) == 0 || (*(_BYTE *)(a1 + 4) & 8) == 0 || (a2 & 2) == 0 )
    return 0LL;
  return result;
}
