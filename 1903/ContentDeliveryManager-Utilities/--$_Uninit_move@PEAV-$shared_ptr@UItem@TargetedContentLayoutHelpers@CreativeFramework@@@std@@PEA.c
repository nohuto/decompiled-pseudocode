/*
 * XREFs of ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800A59A8
 * Callers:
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A4E24 (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // r9
  __int64 v4; // rcx

  for ( i = a1; i != a2; i += 2 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
    if ( a3 != i )
    {
      a3[1] = i[1];
      i[1] = 0LL;
      v4 = *a3;
      *a3 = *i;
      *i = v4;
    }
    a3 += 2;
  }
  return a3;
}
