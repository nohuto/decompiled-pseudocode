/*
 * XREFs of MiFreeUnusedSlabPages @ 0x1402C2534
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF594 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreeSlabEntries @ 0x1402C20D8 (MiFreeSlabEntries.c)
 */

unsigned __int64 __fastcall MiFreeUnusedSlabPages(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 result; // rax

  v2 = a1 + 6136;
  v3 = 3LL;
  do
  {
    result = MiFreeSlabEntries(a1, v2, 0);
    v2 += 72LL;
    --v3;
  }
  while ( v3 );
  return result;
}
