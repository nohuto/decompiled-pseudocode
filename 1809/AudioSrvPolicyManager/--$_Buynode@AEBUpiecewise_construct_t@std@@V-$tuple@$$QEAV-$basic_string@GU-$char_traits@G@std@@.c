/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180019840
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180013F4C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x180019BBC (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  v5 = *a3;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 56) = 0LL;
  *(_OWORD *)(result + 32) = *(_OWORD *)v5;
  *(_OWORD *)(result + 48) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  *(_QWORD *)(result + 64) = 0LL;
  return result;
}
