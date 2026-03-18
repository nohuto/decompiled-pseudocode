/*
 * XREFs of std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0 @ 0x1800C8BF8
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x1800785F8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800785F8.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x18007C6B4 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800C89DC (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C89DC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0(
        __int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *result = *(_QWORD *)(a1 + 8);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = *(_QWORD *)(a1 + 8);
  return result;
}
