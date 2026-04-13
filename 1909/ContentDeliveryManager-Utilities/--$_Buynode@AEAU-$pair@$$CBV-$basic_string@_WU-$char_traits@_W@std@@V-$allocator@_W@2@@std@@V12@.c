/*
 * XREFs of ??$_Buynode@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@@Z @ 0x180093C0C
 * Callers:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x180093B6C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$ch.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180067D10 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180082098 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allo_ea_180082098.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring const,std::wstring> &>(
        _QWORD *a1,
        void **a2)
{
  _QWORD *v3; // rbx
  void **v4; // rcx
  void **v5; // rdx

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  *((_WORD *)v3 + 12) = 0;
  v3[7] = 7LL;
  v3[6] = 0LL;
  *((_WORD *)v3 + 16) = 0;
  try
  {
    std::wstring::assign((void **)v3 + 4, a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = (void **)(v3 + 8);
    v3[11] = 7LL;
    v3[10] = 0LL;
    *((_WORD *)v3 + 32) = 0;
    v5 = a2 + 4;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      (__int64)v4,
      v3);
    throw;
  }
  std::wstring::assign(v4, v5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return v3;
}
