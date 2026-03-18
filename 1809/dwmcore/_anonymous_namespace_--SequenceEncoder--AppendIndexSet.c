/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800DDD78
 * Callers:
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800DDDFC (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800164B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800DE674 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ??$_Lbound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEBI@Z @ 0x1800DECB8 (--$_Lbound@I@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@s.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::SequenceEncoder::AppendIndexSet(Base853Encoder *this, __int64 a2)
{
  __int64 v4; // r8
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // r10d
  _QWORD *v10; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  Base853Encoder::AppendVarInt(this, *(_DWORD *)(a2 + 8));
  v5 = *(__int64 **)a2;
  result = *v5;
  v13 = *v5;
  while ( (__int64 *)result != v5 )
  {
    v7 = *((_QWORD *)this + 3);
    v12 = *(_DWORD *)(result + 28);
    v8 = std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lbound<unsigned int>(
           v7,
           &v12,
           v4,
           v7);
    if ( v8 == *v10 || v9 < *(_DWORD *)(v8 + 28) )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    Base853Encoder::AppendVarInt(this, *(_DWORD *)(v8 + 32));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v13);
    result = v13;
  }
  return result;
}
