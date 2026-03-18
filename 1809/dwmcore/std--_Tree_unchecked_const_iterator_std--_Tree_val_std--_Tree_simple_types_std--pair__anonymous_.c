/*
 * XREFs of std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x180015DE0
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&___ptr64_std::tuple__anonymous_namespace_::AnimationId_const_&___ptr64__std::tuple____ @ 0x180010D00 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800DDDFC (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Min @ 0x1800702BC (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__unsig.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(
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
      i = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Min(
            v3,
            v1,
            v2);
    }
    *v2 = i;
  }
  return v2;
}
