/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate @ 0x1800D4C34
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C89C8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C89C8.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_ @ 0x1800D4AC4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_1800D4AC4.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract @ 0x180171654 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_180171654.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = *v2;
  if ( !*(_BYTE *)(*v2 + 25LL) )
    *(_QWORD *)(*v2 + 8LL) = a2;
  v2[1] = *(_QWORD *)(a2 + 8);
  result = *(_QWORD **)a1;
  if ( a2 == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    result[1] = v2;
  }
  else
  {
    result = *(_QWORD **)(a2 + 8);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
  }
  *v2 = a2;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
