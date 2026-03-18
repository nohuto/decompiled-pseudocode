/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800C889C
 * Callers:
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x1800C8800 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--LessThan_std-.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8904 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C8904.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0 @ 0x1800C8AB8 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_ea_1800C8AB8.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const___std::tuple__anonymous_namespace_::AnimationId_const____std::tuple____(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int128 **a5)
{
  int v7; // edi
  __int64 v8; // rax
  __int128 v9; // xmm0

  v7 = a1;
  v8 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0(a1);
  *(_WORD *)(v8 + 24) = 0;
  v9 = **a5;
  *(_DWORD *)(v8 + 48) = 0;
  *(_OWORD *)(v8 + 32) = v9;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
    v7,
    a2,
    a3,
    v8 + 32,
    v8);
  return a2;
}
