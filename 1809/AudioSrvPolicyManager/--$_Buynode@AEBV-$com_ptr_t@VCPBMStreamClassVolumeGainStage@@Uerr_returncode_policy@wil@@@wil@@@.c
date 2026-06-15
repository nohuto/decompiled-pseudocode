/*
 * XREFs of ??$_Buynode@AEBV?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002E72C
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002E420 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@2@PEAU32@0@Z @ 0x18002B354 (-_Buynode0@-$_List_alloc@U-$_List_base_types@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_.c)
 */

_QWORD *__fastcall std::_List_buy<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Buynode<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax

  v5 = std::_List_alloc<std::_List_base_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>::_Buynode0(
         a1,
         a2,
         a3);
  v6 = *a4;
  v5[2] = *a4;
  if ( v6 )
  {
    do
      v7 = *(_DWORD *)(v6 + 52);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 52), v7 + 1, v7) );
  }
  return v5;
}
