/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803BEBDC
 * Callers:
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1803BF6EC (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@XZ @ 0x1802342C8 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::ComPtr<IApplicationView> &&>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD **a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rcx

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  *((_WORD *)v4 + 12) = 0;
  v5 = *a3;
  v4[4] = 0LL;
  if ( v4 + 4 != v5 )
  {
    v4[4] = *v5;
    *v5 = 0LL;
  }
  v4[5] = 0LL;
  return v4;
}
