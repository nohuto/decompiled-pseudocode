/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801456B0
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z @ 0x180146BC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C8324 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree__ea_1800C8324.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAX@1@@Z @ 0x1801451E0 (--$_Insert_hint@AEAU-$pair@$$CBKV-$shared_ptr@UHOTKEY@@@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 */

__int64 __fastcall std::map<unsigned long,std::shared_ptr<HOTKEY>>::_Try_emplace<unsigned long const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = a2;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  a2 = (unsigned int)*a3;
  do
  {
    if ( *(_DWORD *)(v6 + 32) >= (unsigned int)a2 )
    {
      v3 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || (unsigned int)a2 < *(_DWORD *)(v3 + 32) )
  {
LABEL_10:
    v9 = a3;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
           (__int64)a1,
           a2,
           &v9);
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::_Insert_hint<std::pair<unsigned long const,std::shared_ptr<HOTKEY>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>,void *> *>(
      a1,
      (__int64 *)&v9,
      v3,
      (unsigned int *)(v7 + 32),
      (std::_Ref_count_base **)v7);
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
