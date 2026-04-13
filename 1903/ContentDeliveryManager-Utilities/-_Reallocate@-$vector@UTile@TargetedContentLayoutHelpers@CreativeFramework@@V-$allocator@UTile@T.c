/*
 * XREFs of ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800A4D08
 * Callers:
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800A4B58 (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 * Callees:
 *     ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800A5914 (--$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V-$allocator@UT.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF38 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reallocate(
        __int64 *a1,
        unsigned __int64 a2)
{
  char *v4; // rdi
  char *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r15
  char *result; // rax
  char *v11; // [rsp+78h] [rbp+10h]

  v4 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x492492492492492LL || (v5 = (char *)operator new(56 * a2), v4 = v5, (v11 = v5) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *,std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>,CreativeFramework::TargetedContentLayoutHelpers::Tile>();
    v6 = a1[1];
    v7 = *a1;
    v8 = v6 - *a1;
    v9 = v8 / 56;
    if ( *a1 )
    {
      if ( v7 != v6 )
      {
        do
        {
          if ( *(_QWORD *)(v7 + 24) >= 8uLL )
            operator delete(*(void **)v7);
          *(_QWORD *)(v7 + 24) = 7LL;
          *(_QWORD *)(v7 + 16) = 0LL;
          *(_WORD *)v7 = 0;
          v7 += 56LL;
        }
        while ( v7 != v6 );
        v7 = *a1;
      }
      operator delete((void *)v7);
    }
    a1[2] = (__int64)&v4[56 * a2];
    result = &v4[56 * v9];
    a1[1] = (__int64)result;
    *a1 = (__int64)v4;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v8,
      v11);
    throw;
  }
  return result;
}
