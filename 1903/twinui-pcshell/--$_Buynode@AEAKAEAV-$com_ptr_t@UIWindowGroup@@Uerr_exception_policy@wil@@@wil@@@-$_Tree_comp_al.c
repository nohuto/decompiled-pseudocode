/*
 * XREFs of ??$_Buynode@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18025C970
 * Callers:
 *     ?CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z @ 0x18025D190 (-CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z.c)
 *     _lambda_aa4892268e0364aa795347ae8a8bf43d_::operator() @ 0x1802ABB38 (_lambda_aa4892268e0364aa795347ae8a8bf43d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@XZ @ 0x180214F28 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::_Buynode<unsigned long &,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy> &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *result; // rax
  void *v9; // [rsp+40h] [rbp+8h]

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  try
  {
    v6 = v5;
    v9 = v5;
    *((_WORD *)v5 + 12) = 0;
    *((_DWORD *)v5 + 8) = *a2;
    v7 = *a3;
    v5[5] = *a3;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    result = v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x30);
    throw;
  }
  return result;
}
