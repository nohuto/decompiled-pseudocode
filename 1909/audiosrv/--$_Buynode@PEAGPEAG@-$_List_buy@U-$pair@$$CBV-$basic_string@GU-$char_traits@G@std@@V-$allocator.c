/*
 * XREFs of ??$_Buynode@PEAGPEAG@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@PEAU21@0$$QEAPEAG1@Z @ 0x18013CDD4
 * Callers:
 *     ??$emplace@PEAGPEAG@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAG0@Z @ 0x18013D1AC (--$emplace@PEAGPEAG@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180036858 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@0@Z @ 0x1800639C0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_t_ea_1800639C0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<unsigned short *,unsigned short *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _WORD **a4,
        _WORD **a5)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _WORD *v8; // rdx

  v6 = std::_List_alloc<std::_List_base_types<std::pair<std::wstring const,std::wstring>>>::_Buynode0(a1, a2, a3);
  try
  {
    std::wstring::wstring(v6 + 2, *a4);
    v7 = v6 + 6;
    v8 = *a5;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x50);
    throw;
  }
  std::wstring::wstring(v7, v8);
  return v6;
}
