/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Min @ 0x1800702BC
 * Callers:
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x180015DE0 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x1800C42B0 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C42B0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Min(
        _QWORD *a1)
{
  __int64 *v1; // rdx

  v1 = (__int64 *)*a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    do
    {
      a1 = v1;
      v1 = (__int64 *)*v1;
    }
    while ( !*((_BYTE *)v1 + 25) );
  }
  return a1;
}
