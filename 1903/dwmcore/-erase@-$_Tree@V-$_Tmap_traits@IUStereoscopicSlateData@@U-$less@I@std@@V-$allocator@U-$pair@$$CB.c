/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@2@0@Z @ 0x180243C8C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180243D8C (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator_ea_180243D8C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@@Z @ 0x18018B9E0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@QEAAPEAU-$_Tree_node@IPEAX@2@V-$_Tree_c.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@Z @ 0x180243BD4 (-_Erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 **v4; // rsi
  __int64 *v6; // rbx
  __int64 v9; // r9
  __int64 *v10; // r8
  __int64 *i; // rax
  __int64 *v12; // rax
  __int64 j; // rcx
  __int64 *v14; // rax

  v4 = *a1;
  v6 = a3;
  if ( a3 == **a1 && a4 == (__int64 *)v4 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Erase(
      (__int64)a1,
      v4[1]);
    (*a1)[1] = (__int64 *)v4;
    **a1 = (__int64 *)v4;
    (*a1)[2] = (__int64 *)v4;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v6 != a4 )
    {
      v9 = v6[2];
      v10 = v6;
      if ( *(_BYTE *)(v9 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v6[2]);
      }
      v6 = i;
      v12 = v10;
      if ( *(_BYTE *)(v9 + 25) )
      {
        for ( j = v10[1]; !*(_BYTE *)(j + 25) && v12 == *(__int64 **)(j + 16); j = *(_QWORD *)(j + 8) )
          v12 = (__int64 *)j;
      }
      v14 = std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Extract(a1, v10);
      std::_Deallocate<16,0>(v14, 0x68uLL);
    }
    *a2 = v6;
  }
  return a2;
}
