/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x18003836C
 * Callers:
 *     ?clear@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAAXXZ @ 0x180038134 (-clear@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@0@Z @ 0x1800382C0 (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x18003836C (-_Erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU-$_.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x18003836C (-_Erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU-$_.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rbx
  _QWORD *v4; // rdi

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      operator delete(v2);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
