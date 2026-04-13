/*
 * XREFs of ?_Reallocate@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x180089868
 * Callers:
 *     ?_Init@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800897AC (-_Init@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 * Callees:
 *     ??$_Uninit_move@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@PEAV12@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@2@V12@@std@@YAPEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@0@PEAV10@00AEAU?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180044CFC (--$_Uninit_move@PEAV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$basic.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800AE0C8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>>>::_Reallocate(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  void *v6; // rcx
  __int64 v7; // r14
  _QWORD *result; // rax
  void *v9; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v5 = operator new(8 * a2), v4 = v5, (v9 = v5) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
      *a1,
      a1[1],
      v4);
    v6 = (void *)*a1;
    v7 = (__int64)(a1[1] - *a1) >> 3;
    if ( *a1 )
      operator delete(v6);
    a1[2] = (unsigned __int64)&v4[a2];
    result = &v4[v7];
    a1[1] = (unsigned __int64)result;
    *a1 = (unsigned __int64)v4;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      (__int64)v6,
      v9);
    throw;
  }
  return result;
}
