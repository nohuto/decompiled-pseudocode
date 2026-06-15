/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@2@_K@Z @ 0x18002B340
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_______::_Buynode0_::_1_::catch$0 @ 0x180039A0A (_std--_List_alloc_std--_List_base_types_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_r.c)
 *     _std::_List_buy_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::_Buynode_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__const_&___ptr64__::_1_::catch$0 @ 0x180039BB1 (_std--_List_buy_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std--a.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
