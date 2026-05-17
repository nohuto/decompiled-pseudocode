/*
 * XREFs of RtlpHpVsSubsegmentCleanup @ 0x1800514F0
 * Callers:
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180039740 (RtlpHpVsChunkSplit.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     RtlpHpVsChunkFree @ 0x18010C024 (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpHpVsSubsegmentCleanup(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx

  v3 = a2 ^ *(_QWORD *)a2;
  v4 = a2 ^ *(_QWORD *)(a2 + 8);
  if ( (v3 ^ *(_QWORD *)(v3 + 8)) != a2 || (v4 ^ *(_QWORD *)v4) != a2 )
    __fastfail(3u);
  *(_QWORD *)v4 = v3 ^ v4;
  *(_QWORD *)(v3 + 8) = v3 ^ v4;
  v5 = *(_QWORD *)(a2 + 16) - ((*(_QWORD *)(a2 + 16) >> 1) & 0x5555555555555555LL);
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(a1 + 48),
           -((unsigned int)((0x101010101010101LL
                           * (((v5 & 0x3333333333333333LL)
                             + ((v5 >> 2) & 0x3333333333333333LL)
                             + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
}
