/*
 * XREFs of FindAdjacentMonitor @ 0x1C00EBA54
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x1C00EBB48 (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C0039FC8 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x1C00EB9B4 (-ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall FindAdjacentMonitor(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v5; // esi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  tagRECT v10; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(gpDispInfo + 104);
  while ( v6 )
  {
    v10 = *ExpandedMonitorRect(&v11, (struct tagMONITOR *)v6, a2);
    v7 = ComputeAdjacencyOverlap(a1, &v10);
    v8 = v6;
    v6 = *(_QWORD *)(v6 + 56);
    if ( v7 <= v5 )
    {
      v8 = v2;
      v7 = v5;
    }
    v2 = v8;
    v5 = v7;
  }
  return v2;
}
