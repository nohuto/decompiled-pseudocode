/*
 * XREFs of MiRemoveSlabEntry @ 0x1402C2C54
 * Callers:
 *     MiFreeSlabEntries @ 0x1402C21D8 (MiFreeSlabEntries.c)
 *     MmUpdateSlabRangeProtection @ 0x1409F75B8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400BDDF0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall MiRemoveSlabEntry(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  RtlRbRemoveNode((__int64)a2, a3);
  if ( a2[3] == a3 )
    a2[3] = 0LL;
  a2[4] -= *(unsigned int *)(a3 + 120);
  --a2[5];
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7824), 0xFFFFFFFFFFFFFE00uLL);
}
