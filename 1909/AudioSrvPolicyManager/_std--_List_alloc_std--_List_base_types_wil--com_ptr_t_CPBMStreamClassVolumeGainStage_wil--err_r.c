/*
 * XREFs of _std::_List_alloc_std::_List_base_types_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_______::_Buynode0_::_1_::catch$0 @ 0x18003735E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@2@_K@Z @ 0x180027DE8 (-deallocate@-$allocator@U-$_List_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returnc.c)
 *     _CxxThrowException_0 @ 0x180035987 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_______::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
