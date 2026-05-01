/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUHWND__@@@Z @ 0x1803C5BDC
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021A50 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x1800A62FC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@0@Z @ 0x1803C5AD4 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::erase(
        __int64 ***a1,
        unsigned __int64 *a2)
{
  __int64 *v2; // r10
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*a1;
  v4 = (__int64)*a1;
  v5 = (__int64)(*a1)[1];
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v4 = v6;
        v2 = (__int64 *)v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(_QWORD *)v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v5 + 32) )
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  v8 = v2;
  v9 = 0LL;
  while ( v8 != (__int64 *)v4 )
  {
    v10 = v8[2];
    ++v9;
    if ( *(_BYTE *)(v10 + 25) )
    {
      for ( i = v8[1]; !*(_BYTE *)(i + 25) && v8 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v8 = (__int64 *)i;
      v8 = (__int64 *)i;
    }
    else
    {
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)v10);
    }
  }
  std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::erase(
    a1,
    &v13,
    v2,
    (__int64 *)v4);
  return v9;
}
