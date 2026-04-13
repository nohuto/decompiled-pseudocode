/*
 * XREFs of ?_Reallocate@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x180098160
 * Callers:
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180097F48 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 * Callees:
 *     ??$_Uninit_move@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAV12@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180038DFC (--$_Uninit_move@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@PEAV12@V-$al.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF38 (-_Xbad_alloc@std@@YAXXZ.c)
 */

void __fastcall std::vector<std::wstring>::_Reallocate(void ***a1, unsigned __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  void **v6; // r12
  void **v7; // rbx
  __int64 v8; // r14
  void *v9; // [rsp+78h] [rbp+10h]

  v4 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL || (v4 = operator new(32 * a2), (v9 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<std::wstring *,std::wstring *,std::allocator<std::wstring>,std::wstring>(*a1, a1[1], v4);
    v6 = a1[1];
    v7 = *a1;
    v8 = (char *)v6 - (char *)*a1;
    if ( *a1 )
    {
      if ( v7 != v6 )
      {
        do
        {
          if ( (unsigned __int64)v7[3] >= 8 )
            operator delete(*v7);
          v7[3] = (void *)7;
          v7[2] = 0LL;
          *(_WORD *)v7 = 0;
          v7 += 4;
        }
        while ( v7 != v6 );
        v7 = *a1;
      }
      operator delete(v7);
    }
    a1[2] = (void **)&v4[4 * a2];
    a1[1] = (void **)((char *)v4 + (v8 & 0xFFFFFFFFFFFFFFE0uLL));
    *a1 = (void **)v4;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v5,
      v9);
    throw;
  }
}
