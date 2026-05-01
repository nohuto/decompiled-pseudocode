/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x1800AB998
 * Callers:
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1800AD074 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x1800AA918 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@2@V-$tuple@AEAIAEBV-$basic_s.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1800AAFEC (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExe.c)
 *     ?lower_bound@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1800AEAE0 (-lower_bound@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$allocato.c)
 */

__int64 __fastcall std::map<HWND__ *,ExeData>::_Try_emplace<HWND__ * const &,unsigned int &,std::wstring const &,std::wstring const &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 *v5; // r8
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 *v9; // [rsp+60h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::lower_bound(
    a1,
    &v9);
  v6 = v9;
  if ( v9 == (__int64 *)*a1 || *v5 < (unsigned __int64)v9[4] )
  {
    v9 = v5;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<unsigned int &,std::wstring const &,std::wstring const &>>(
           (__int64)a1,
           v4,
           &v9);
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_hint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
      a1,
      (__int64 *)&v9,
      v6,
      (unsigned __int64 *)(v7 + 32),
      v7);
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
