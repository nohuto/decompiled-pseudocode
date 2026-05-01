/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180021E8C
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180021CEC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??A?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAAAEAUWindowCloakInfo@CDesktopPositioner@@AEBQEAUHWND__@@@Z @ 0x1803BFE7C (--A-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND__@@@std@@V-$allocator.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x180021F2C (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800221E8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@2@V-$tuple@$$V@2@@-$_Tree_co.c)
 */

unsigned __int64 __fastcall std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
        __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  int v4; // esi
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  unsigned __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (int)a1;
  v5 = a2;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_8;
  a2 = *a3;
  do
  {
    if ( v6[4] >= a2 )
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v3 == *a1 || a2 < v3[4] )
  {
LABEL_8:
    v9 = a3;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<>>(
           a1,
           a2,
           &v9);
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_hint<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
      v4,
      (unsigned int)&v9,
      (_DWORD)v3,
      v7 + 32,
      v7);
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v3;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}
