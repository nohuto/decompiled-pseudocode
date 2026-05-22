/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@2@@Z @ 0x1800D94C8
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@2@@Z @ 0x1800D94C8 (-_Erase@-$_Tree@V-$_Tset_traits@U-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@@std@@@2@V32@0@Z @ 0x1800D9EC0 (-erase@-$_Tree@V-$_Tset_traits@U-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@2@@Z @ 0x1800D94C8 (-_Erase@-$_Tree@V-$_Tset_traits@U-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,std::less<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,std::allocator<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rbx
  _QWORD *v4; // rdi

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tset_traits<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,std::less<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,std::allocator<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      std::wstring::_Tidy_deallocate((__int64)v2 + 32);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x48);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
