/*
 * XREFs of ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x180078390
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077E8C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@_KPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x1800784B4 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  _QWORD *v4; // rbp
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int64 **v13; // r8
  __int64 *i; // rdx
  _QWORD *result; // rax
  __int64 j; // rcx

  v4 = (_QWORD *)*a1;
  v7 = *(_QWORD *)(*a2 + 8LL);
  v8 = (_QWORD *)*a1;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    LOBYTE(v10) = a3;
    *(_QWORD *)v9 = *a1;
    *(_QWORD *)(v9 + 8) = *a1;
    *(_QWORD *)(v9 + 16) = *a1;
    *(_WORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v9 + 8) = v4;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(v7 + 24);
    if ( *((_BYTE *)v4 + 25) )
      v4 = (_QWORD *)v9;
    *(_QWORD *)v9 = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                      a1,
                      *(_QWORD *)v7,
                      v9,
                      v10);
    LOBYTE(v11) = a3;
    *(_QWORD *)(v9 + 16) = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                             a1,
                             *(_QWORD *)(v7 + 16),
                             v9,
                             v11);
    v8 = (_QWORD *)*a1;
  }
  v8[1] = v4;
  v12 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v13 = (__int64 **)v12[1];
  if ( *((_BYTE *)v13 + 25) )
  {
    *v12 = v12;
    result = (_QWORD *)*a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    for ( i = *v13; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v13 = (__int64 **)i;
    *v12 = v13;
    result = *(_QWORD **)(*a1 + 8LL);
    for ( j = result[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      result = (_QWORD *)j;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
