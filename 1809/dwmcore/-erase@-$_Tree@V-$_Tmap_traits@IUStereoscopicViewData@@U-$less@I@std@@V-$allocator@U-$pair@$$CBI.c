/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@2@0@Z @ 0x1802107FC
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18021090C (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@_ea_18021090C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@2@@Z @ 0x180155C50 (-_Extract@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@@Z @ 0x1802105B4 (-_Erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$CB.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v9; // rax
  char *v10; // rdx
  __int64 v11; // r8
  char v12; // r9
  __int64 v13; // rcx
  _QWORD *i; // rax
  __int64 v15; // rax
  __int64 j; // rcx
  _QWORD *v17; // rax

  v6 = *a1;
  v7 = a3;
  if ( a3 == *(_QWORD **)*a1 && a4 == (_QWORD *)v6 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::_Erase(
      (__int64)a1,
      *(void **)(v6 + 8));
    *(_QWORD *)(*a1 + 8LL) = *a1;
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
    v9 = (_QWORD *)*a1;
    a1[1] = 0LL;
    *a2 = *v9;
  }
  else
  {
    while ( v7 != a4 )
    {
      v10 = (char *)v7 + 25;
      v11 = (__int64)v7;
      v12 = *((_BYTE *)v7 + 25);
      if ( !v12 )
      {
        v13 = v7[2];
        if ( *(_BYTE *)(v13 + 25) )
        {
          for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v7 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
            v7 = i;
          v12 = *v10;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v13);
        }
        v7 = i;
      }
      v15 = v11;
      if ( !v12 && *(_BYTE *)(*(_QWORD *)(v11 + 16) + 25LL) )
      {
        for ( j = *(_QWORD *)(v11 + 8); !*(_BYTE *)(j + 25) && v15 == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
          v15 = j;
      }
      v17 = std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Extract(
              a1,
              v11);
      std::_Deallocate<16,0>(v17, 0xE0uLL);
    }
    *a2 = v7;
  }
  return a2;
}
