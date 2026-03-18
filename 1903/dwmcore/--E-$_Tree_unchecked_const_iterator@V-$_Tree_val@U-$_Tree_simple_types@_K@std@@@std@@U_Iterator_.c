/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007D28C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@0@Z @ 0x18007276C (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x18007C278 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18007C2F8 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@@Z @ 0x1801735C4 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18001F6C8 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

_QWORD *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(
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
