/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x1800AA918
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x1800AB998 (--$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800ABBCC (--0ExeData@@QEAA@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0@Z.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@XZ @ 0x1800AE1C0 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<unsigned int &,std::wstring const &,std::wstring const &>>(
        __int64 a1,
        __int64 a2,
        _QWORD **a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+10h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Buynode0(a1);
  v5 = v4;
  v8 = v4;
  *(_WORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = **a3;
  try
  {
    ExeData::ExeData(v4 + 40);
    result = v5;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>::deallocate(v6, v8);
    throw;
  }
  return result;
}
