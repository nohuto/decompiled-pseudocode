/*
 * XREFs of ??$emplace_front@AEAIAEAI@?$list@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAAAEAU?$pair@$$CBII@1@AEAI0@Z @ 0x180197A34
 * Callers:
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x1801979DC (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@0@Z @ 0x1801987C8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBII@std@@V-$allocator@U-$pair@$$CBII@std.c)
 */

__int64 __fastcall std::list<std::pair<unsigned int const,unsigned int>>::emplace_front<unsigned int &,unsigned int &>(
        __int64 **a1,
        _DWORD *a2,
        _DWORD *a3)
{
  __int64 v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // r8
  __int64 *v9; // rax

  v6 = **a1;
  v7 = *(__int64 **)(v6 + 8);
  v8 = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,unsigned int>>>::_Buynode0(a1, v6, v7);
  *(_DWORD *)(v8 + 16) = *a2;
  *(_DWORD *)(v8 + 20) = *a3;
  v9 = a1[1];
  if ( v9 == (__int64 *)0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error(0LL);
  a1[1] = (__int64 *)((char *)v9 + 1);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  return **a1 + 16;
}
