/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x1800C42B0
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800C4BAC (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Min @ 0x1800702BC (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__unsig.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x1800C47F4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C47F4.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rax
  char v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 i; // rcx

  v4 = *(_QWORD *)(a1 + 8);
  LOBYTE(a4) = a3;
  *(_QWORD *)(v4 + 8) = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_(
                          a1,
                          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                          v4,
                          a4);
  v7 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
  {
    *v7 = v7;
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(result + 16) = result;
  }
  else
  {
    v10 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Min((_QWORD *)v8);
    *v12 = v10;
    v13 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v13 + 8);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v11; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(v13 + 16) = result;
  }
  return result;
}
