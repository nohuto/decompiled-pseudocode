/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x180040FC8
 * Callers:
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180041404 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180041FDC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@U_Iterator_.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEB_K@Z @ 0x180042028 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@$0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::SequenceEncoder::AppendIndexSet(Base853Encoder *this, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  const char *v8; // rcx
  unsigned __int64 v9; // r10
  _QWORD *v10; // r9
  _QWORD *v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  Base853Encoder::AppendVarInt(this, *(_DWORD *)(a2 + 8));
  v4 = *(_QWORD **)a2;
  result = (_QWORD *)*v4;
  v11 = (_QWORD *)*v4;
  while ( result != v4 )
  {
    v6 = *((_QWORD *)this + 3);
    v12 = result[4];
    v7 = std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Lbound<unsigned __int64>(
           v6,
           &v12);
    if ( v7 == *v10 || v9 < *(_QWORD *)(v7 + 32) )
      std::_Xlength_error(v8);
    Base853Encoder::AppendVarInt(this, *(_DWORD *)(v7 + 40));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(&v11);
    result = v11;
  }
  return result;
}
