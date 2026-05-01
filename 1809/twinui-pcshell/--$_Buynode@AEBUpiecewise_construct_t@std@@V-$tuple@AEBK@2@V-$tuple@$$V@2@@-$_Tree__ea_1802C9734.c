/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C9734
 * Callers:
 *     _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180031A94 (_lambda_7a5168388c52e35df9f99ba32a5252ab_--operator().c)
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x180055024 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x18005BC80 (_lambda_46851bff5b4673daf3d019eee80c73b2_--operator().c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180066820 (--$_Try_emplace@AEBI$$V@-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@Q.c)
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x180331DC8 (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180333B74 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@XZ @ 0x1801EFE3C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD **a3)
{
  _QWORD *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  *((_DWORD *)result + 8) = **a3;
  result[5] = 0LL;
  return result;
}
