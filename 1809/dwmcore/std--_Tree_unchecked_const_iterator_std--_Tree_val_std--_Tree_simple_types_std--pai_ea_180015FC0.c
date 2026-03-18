/*
 * XREFs of std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__ @ 0x180015FC0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@PEAU32@@Z @ 0x180016010 (-_Min@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // r8
  __int64 v3; // rcx
  __int64 i; // rax

  v1 = *a1;
  v2 = a1;
  if ( !*(_BYTE *)(*a1 + 25) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( *(_BYTE *)(v3 + 25) )
    {
      for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25) && v1 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      {
        *v2 = i;
        v1 = i;
      }
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Min(v3, v1, v2);
    }
    *v2 = i;
  }
  return v2;
}
