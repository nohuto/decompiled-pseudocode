/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18021E690
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x18021D054 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18021E95C (-erase@-$list@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$uniq.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a3[2];
  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)&v13;
  v7 = 8LL;
  do
  {
    v8 = *v6++;
    v5 = 0x100000001B3LL * (v8 ^ v5);
    --v7;
  }
  while ( v7 );
  v9 = a1[3];
  v10 = 2 * (v5 & a1[6]);
  if ( *(_QWORD **)(v9 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v9 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v5 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v5 & a1[6])) = *a3;
  }
  std::list<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>::erase(
    a1 + 1,
    a2,
    a3);
  return a2;
}
