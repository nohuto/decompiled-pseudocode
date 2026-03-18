/*
 * XREFs of MiNodeFreeZeroPages @ 0x1400DBD74
 * Callers:
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x1400DA540 (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x140169760 (MiRebuildLargePages.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1402D9114 (MiFreeZeroPageSlistSufficient.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x1402DA520 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1402E8A58 (MiRebuildLargePage.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x1400BAE48 (MiNodeLargeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // rbx
  int v9; // r15d
  _QWORD *v10; // rax

  v3 = a1 + 220;
  v4 = 0LL;
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0;
  v7 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v10 = &a1[2 * a2 + 231 + v7];
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
