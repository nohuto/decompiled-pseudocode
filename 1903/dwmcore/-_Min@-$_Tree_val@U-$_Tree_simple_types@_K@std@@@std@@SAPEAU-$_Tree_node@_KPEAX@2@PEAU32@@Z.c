/*
 * XREFs of ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18001F6C8
 * Callers:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001F67C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x180078574 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180078574.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007D28C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@U_Iterator_.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D0060 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@@Z @ 0x180168114 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAPEAU.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract @ 0x180172DA4 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_180172DA4.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@@Z @ 0x1801735C4 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min(_QWORD *a1)
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
