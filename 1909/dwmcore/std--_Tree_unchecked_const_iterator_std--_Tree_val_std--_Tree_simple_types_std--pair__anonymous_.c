/*
 * XREFs of std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D0340
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase @ 0x1800383C8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180041404 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8904 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C8904.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract @ 0x180171654 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_180171654.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18001D878 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

_QWORD *__fastcall std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(
        _QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rcx
  _QWORD *i; // rax

  v1 = a1;
  v2 = (_QWORD *)*a1;
  if ( *(_BYTE *)(v2[2] + 25LL) )
  {
    for ( i = (_QWORD *)v2[1]; !*((_BYTE *)i + 25) && v2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min((_QWORD *)v2[2]);
  }
  *v1 = i;
  return v1;
}
