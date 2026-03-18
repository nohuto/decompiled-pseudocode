/*
 * XREFs of ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18025416C
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x180253C4C (--$_Emplace_reallocate@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x18025106C (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // r14
  _QWORD *v10; // rsi
  void *v11; // rcx
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      v10 = v4 + 6;
      do
      {
        v11 = (void *)*(v10 - 2);
        if ( v11 )
        {
          std::_Deallocate<16,0>(v11, 176 * ((*v10 - (_QWORD)v11) / 176LL));
          *(v10 - 2) = 0LL;
          *(v10 - 1) = 0LL;
          *v10 = 0LL;
        }
        std::vector<CDepthSortingLayer>::_Tidy(v4);
        v4 += 7;
        v10 += 7;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(v4, 56 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 56LL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
