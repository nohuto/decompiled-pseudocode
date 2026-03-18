/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max @ 0x1800D1D2C
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x18003E254 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_18003E254.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8904 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C8904.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x180170D30 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180170D30.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract @ 0x180171654 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_180171654.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max(
        __int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
    a1 = i;
  return a1;
}
