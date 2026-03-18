/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@std@@V12@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18021E5AC
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x18021D054 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x180196FC8 (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  unsigned __int8 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 i; // r10
  __int64 v12; // r14
  __int64 **v13; // rax
  __int64 *v14; // r10
  _QWORD *v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v20 = *a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = (unsigned __int8 *)&v20;
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    v6 = 0x100000001B3LL * (v9 ^ v6);
    --v8;
  }
  while ( v8 );
  v10 = v6 & a1[6];
  for ( i = *(_QWORD *)(a1[3] + 16 * v10); ; i = *v14 )
  {
    v12 = i;
    v13 = (__int64 **)std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                        (__int64)a1,
                        &v20,
                        v10);
    if ( v14 == *v13 )
      break;
    if ( v14[2] == v3 )
    {
      do
        v15 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                (__int64)a1,
                &v20,
                v10);
      while ( v16 != *v15 && v3 == *(_QWORD *)(v16 + 16) );
      if ( v12 != v16 )
      {
        *a2 = v17;
        a2[1] = v16;
        return a2;
      }
      break;
    }
  }
  v18 = a1[1];
  *a2 = v18;
  a2[1] = v18;
  return a2;
}
