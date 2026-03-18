/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@0@Z @ 0x18007276C
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180072624 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800726C4 (std--_Destroy_range1_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x180072818 (-_Erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU-$_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007D28C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@U_Iterator_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@@Z @ 0x1801735C4 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // r10
  _BYTE *v9; // rbp
  _QWORD *v10; // rax
  _BYTE *v11; // rbx
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  v4 = *a1;
  v6 = a3;
  if ( a3 == (_QWORD *)**a1 && a4 == v4 )
  {
    v9 = (_BYTE *)v4[1];
    v10 = *a1;
    v11 = v9;
    if ( !v9[25] )
    {
      do
      {
        std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Erase(
          a1,
          *((_QWORD *)v11 + 2));
        v11 = *(_BYTE **)v11;
        operator delete(v9, 0x28uLL);
        v9 = v11;
      }
      while ( !v11[25] );
      v10 = *a1;
    }
    v10[1] = v4;
    **a1 = v4;
    (*a1)[2] = v4;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v6 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(&v17);
      v16 = v13;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(&v16);
      v15 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract(a1, v14);
      std::_Deallocate<16,0>(v15, 40LL);
      v6 = v17;
    }
    *a2 = v6;
  }
  return a2;
}
