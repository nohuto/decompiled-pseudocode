/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801272B0
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x180127BD4 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ?_Incsize@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAAX_K@Z @ 0x180056614 (-_Incsize@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$allocator@U-$pai.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180097310 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_List_ea_180097310.c)
 *     ??$_Insert@AEAU?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@@Z @ 0x180126DB4 (--$_Insert@AEAU-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$_Li.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 ***v4; // r14
  _QWORD **v5; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx

  v4 = (__int64 ***)(a1 + 8);
  v5 = *(_QWORD ***)(a1 + 8);
  v8 = (__int64)*v5;
  v9 = (_QWORD *)(*v5)[1];
  v10 = std::_List_buy<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
          a1,
          *v5,
          v9,
          (__int64)a4,
          a4);
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Incsize((__int64)v4);
  *(_QWORD *)(v8 + 8) = v10;
  *v9 = v10;
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Insert<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>>>(
    a1,
    a2,
    (unsigned __int8 *)**v4 + 16,
    **v4);
  return a2;
}
