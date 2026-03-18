/*
 * XREFs of ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x18025AAF4
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x18025A140 (--$_Emplace_reallocate@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rsi
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        if ( *(_QWORD *)v4 )
        {
          std::_Deallocate<16,0>(*(void **)v4, (*(_QWORD *)(v4 + 16) - *(_QWORD *)v4) & 0xFFFFFFFFFFFFFFFCuLL);
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)(v4 + 8) = 0LL;
          *(_QWORD *)(v4 + 16) = 0LL;
        }
        v4 += 40LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate<16,0>((void *)v4, 40 * ((a1[2] - v4) / 40));
  }
  a1[1] = a2 + 40 * a3;
  result = 5 * a4;
  *a1 = a2;
  a1[2] = a2 + 40 * a4;
  return result;
}
