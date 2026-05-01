/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803494B0
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180349E8C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@2@XZ @ 0x18026D40C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD **a3)
{
  _QWORD *result; // rax

  result = std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  *((_DWORD *)result + 7) = **a3;
  result[4] = 0LL;
  return result;
}
