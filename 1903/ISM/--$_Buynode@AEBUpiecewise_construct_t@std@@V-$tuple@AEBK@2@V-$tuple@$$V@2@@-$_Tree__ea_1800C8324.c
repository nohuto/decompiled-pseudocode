/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C8324
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8B50 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801456B0 (--$_Try_emplace@AEBK$$V@-$map@KV-$shared_ptr@UHOTKEY@@@std@@U-$less@K@2@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1800CAC40 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_po.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        _DWORD **a3)
{
  __int64 result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  return result;
}
