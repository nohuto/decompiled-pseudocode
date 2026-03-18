/*
 * XREFs of MiRemoveSlabEntry @ 0x1402DCE60
 * Callers:
 *     MiFreeSlabEntries @ 0x1402DBBD0 (MiFreeSlabEntries.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3D058 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall MiRemoveSlabEntry(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  RtlRbRemoveNode(a2, a3);
  if ( a2[3] == a3 )
    a2[3] = 0LL;
  a2[4] -= *(unsigned int *)(a3 + 132);
  --a2[5];
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8592), 0xFFFFFFFFFFFFFE00uLL);
}
