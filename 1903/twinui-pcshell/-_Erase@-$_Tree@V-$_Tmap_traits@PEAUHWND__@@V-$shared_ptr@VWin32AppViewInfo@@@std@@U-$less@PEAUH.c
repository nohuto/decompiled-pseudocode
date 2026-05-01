/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@Z @ 0x1800AE444
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@Z @ 0x1800AE444 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@U-$less@PEAUH.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AE678 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I@2@V-$allocator@.c)
 *     ??1?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1803FFE38 (--1-$map@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U-$less@PEAUHSTRIN.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFE94 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@Z @ 0x1800AE444 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@U-$less@PEAUH.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  std::_Ref_count_base *v5; // rcx

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Erase(
      a1,
      i[2]);
    v5 = (std::_Ref_count_base *)v2[6];
    i = (_QWORD *)*i;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x38);
  }
}
