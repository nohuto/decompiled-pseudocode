/*
 * XREFs of ??$_Buynode@AEAPEAXPEAVPenDevice@@@?$_List_buy@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@PEAU21@0AEAPEAX$$QEAPEAVPenDevice@@@Z @ 0x180126A34
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x180127BD4 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x180031010 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006D674 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::_Buynode<void * &,PenDevice *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        void (__fastcall ****a5)(_QWORD))
{
  _QWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>>::_Buynode0(
         a1,
         a2,
         a3);
  v7[2] = *a4;
  wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
    v7 + 3,
    *a5);
  return v7;
}
