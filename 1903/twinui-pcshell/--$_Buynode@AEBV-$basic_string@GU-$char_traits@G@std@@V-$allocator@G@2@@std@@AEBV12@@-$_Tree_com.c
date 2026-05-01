/*
 * XREFs of ??$_Buynode@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x1800AA9A8
 * Callers:
 *     ?SaveAppIdForExePath@ExePathToAppIdMapping@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800ACFF0 (-SaveAppIdForExePath@ExePathToAppIdMapping@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005DAD0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800AE288 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std_ea_1800AE288.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Buynode<std::wstring const &,std::wstring const &>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Buynode0(a1);
  *(_WORD *)(v1 + 24) = 0;
  try
  {
    std::wstring::wstring(v1 + 32);
    v2 = v1 + 64;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Freenode0(
      v2,
      v1);
    throw;
  }
  std::wstring::wstring(v2);
  return v1;
}
