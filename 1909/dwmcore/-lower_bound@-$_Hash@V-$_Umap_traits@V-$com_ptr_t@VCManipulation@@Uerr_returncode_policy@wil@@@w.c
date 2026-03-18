/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18021EA00
 * Callers:
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021D9B4 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18021DC5C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18021DDA8 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x180196FC8 (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::lower_bound(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  unsigned __int8 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // r11
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)&v14;
  v7 = 8LL;
  do
  {
    v8 = *v6++;
    v5 = 0x100000001B3LL * (v8 ^ v5);
    --v7;
  }
  while ( v7 );
  v9 = v5 & *(_QWORD *)(a1 + 48);
  while ( 1 )
  {
    v10 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
            a1,
            &v14,
            v9);
    if ( v11 == *v10 )
      break;
    if ( *(_QWORD *)(v11 + 16) == v3 )
    {
      *v12 = v11;
      return v12;
    }
  }
  *v12 = *(_QWORD *)(a1 + 8);
  return v12;
}
