/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@0@Z @ 0x180071CAC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x180071D2C (-_Erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@@Z @ 0x180148C58 (-_Extract@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 *v9; // rax
  char *v11; // rdx
  __int64 v12; // r8
  char v13; // r9
  __int64 v14; // rcx
  __int64 i; // rax
  __int64 v16; // rax
  __int64 j; // rcx
  void *v18; // rax

  v6 = *a1;
  v7 = a3;
  if ( a3 == **a1 && a4 == v6 )
  {
    std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Erase(
      a1,
      v6[1]);
    (*a1)[1] = (__int64)*a1;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    v9 = *a1;
    a1[1] = 0LL;
    *a2 = *v9;
  }
  else
  {
    while ( (__int64 *)v7 != a4 )
    {
      v11 = (char *)(v7 + 25);
      v12 = v7;
      v13 = *(_BYTE *)(v7 + 25);
      if ( !v13 )
      {
        v14 = *(_QWORD *)(v7 + 16);
        if ( *(_BYTE *)(v14 + 25) )
        {
          for ( i = *(_QWORD *)(v7 + 8); !*(_BYTE *)(i + 25) && v7 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v7 = i;
          v13 = *v11;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                v14,
                v11,
                v7);
        }
        v7 = i;
      }
      v16 = v12;
      if ( !v13 && *(_BYTE *)(*(_QWORD *)(v12 + 16) + 25LL) )
      {
        for ( j = *(_QWORD *)(v12 + 8); !*(_BYTE *)(j + 25) && v16 == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
          v16 = j;
      }
      v18 = (void *)std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Extract(
                      a1,
                      v12);
      std::_Deallocate<16,0>(v18, 0x30uLL);
    }
    *a2 = v7;
  }
  return a2;
}
