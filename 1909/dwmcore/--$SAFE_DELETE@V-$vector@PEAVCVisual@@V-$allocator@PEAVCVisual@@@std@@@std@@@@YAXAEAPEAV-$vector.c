/*
 * XREFs of ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801C0AC8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180077D38 (--1CVisual@@MEAA@XZ.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x1801C16BC (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<std::vector<CVisual *>>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      std::_Deallocate<16,0>(*(void **)v1, (*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)v1 = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
  }
}
