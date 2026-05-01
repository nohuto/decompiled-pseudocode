/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x180349040
 * Callers:
 *     ??1?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x18033D558 (--1-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUSize@Foundation@Wi.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18033D9B4 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x1800A62FC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@2@@Z @ 0x180261B78 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@Z @ 0x180348B48 (-_Erase@-$_Tree@V-$_Tmap_traits@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 **v8; // rsi
  __int64 *v9; // r8
  __int64 v10; // r9
  __int64 *i; // rax
  __int64 *v12; // rax
  __int64 j; // rcx
  __int64 *v14; // rax

  v5 = a3;
  v8 = *a1;
  if ( a3 == **a1 && a4 == (__int64 *)v8 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Erase(
      (__int64)a1,
      v8[1]);
    (*a1)[1] = (__int64 *)v8;
    **a1 = (__int64 *)v8;
    (*a1)[2] = (__int64 *)v8;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = v5;
      v10 = v5[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v5 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)v5[2]);
      }
      v5 = i;
      v12 = v9;
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( j = v9[1]; !*(_BYTE *)(j + 25) && v12 == *(__int64 **)(j + 16); j = *(_QWORD *)(j + 8) )
          v12 = (__int64 *)j;
      }
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Extract(
              a1,
              v9);
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x28);
    }
    *a2 = v5;
  }
  return a2;
}
