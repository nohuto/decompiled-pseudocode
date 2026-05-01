/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180022574
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800223D4 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x180022618 (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800228C0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@2@V-$tuple@$$V@2@@-$_Tree_co.c)
 */

__int64 __fastcall std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  int v4; // esi
  __int64 *v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (int)a1;
  v5 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_8;
  v8 = *a3;
  do
  {
    if ( v7[4] < v8 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v5 || v8 < v6[4] )
  {
LABEL_8:
    v11 = a3;
    v9 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<>>(
           a1,
           v5,
           &v11);
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_hint<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
      v4,
      (unsigned int)&v11,
      (_DWORD)v6,
      v9 + 32,
      v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
