/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@0@Z @ 0x1800CEBDC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x1800CEC68 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@@Z @ 0x180173034 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rbx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 i; // rax
  __int64 v13; // rax
  __int64 j; // rcx
  void *v15; // rax

  v4 = *a1;
  v6 = a3;
  if ( a3 == **a1 && a4 == v4 )
  {
    std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Erase(
      a1,
      v4[1]);
    (*a1)[1] = (__int64)v4;
    **a1 = (__int64)v4;
    (*a1)[2] = (__int64)v4;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( (__int64 *)v6 != a4 )
    {
      v10 = *(_QWORD *)(v6 + 16);
      v11 = v6;
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = *(_QWORD *)(v6 + 8); !*(_BYTE *)(i + 25) && v6 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
          v6 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
              *(_QWORD *)(v6 + 16),
              a2,
              v6);
      }
      v6 = i;
      v13 = v11;
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( j = *(_QWORD *)(v11 + 8); !*(_BYTE *)(j + 25) && v13 == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
          v13 = j;
      }
      v15 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Extract(
                      a1,
                      v11);
      std::_Deallocate<16,0>(v15, 0x30uLL);
    }
    *a2 = v6;
  }
  return a2;
}
