/*
 * XREFs of MiNodeFreeZeroPages @ 0x1400EE374
 * Callers:
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x1400EF834 (MiSignalLargePageRebuild.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1402BFCA4 (MiFreeZeroPageSlistSufficient.c)
 *     MiPruneStandbyPages @ 0x1402C0C84 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x1402C1060 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x1400EE9A8 (MiNodeLargeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  int v9; // r15d
  _QWORD *v10; // rax

  v3 = (_QWORD *)(a1 + 1760);
  v4 = 0LL;
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0;
  v7 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v10 = (_QWORD *)(a1 + 8 * (v7 + 2 * ((unsigned int)a2 + 114LL)));
    else
      v10 = v3;
    v4 += *v10;
    if ( v9 )
      v4 += MiNodeLargeFreeZeroPages(a1, a2, v6);
    ++v6;
    ++v7;
    ++v3;
  }
  while ( v7 <= v5 );
  return v4;
}
