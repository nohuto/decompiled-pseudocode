/*
 * XREFs of ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x18005CAEC
 * Callers:
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x18005C8B4 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x18005CBD8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060CFC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
DynamicAudioEndpointManager *__fastcall DynamicAudioEndpointManager::DynamicAudioEndpointManager(
        DynamicAudioEndpointManager *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcessNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &DynamicAudioEndpointManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  `eh vector constructor iterator'(
    (char *)this + 56,
    0x30uLL,
    0x10uLL,
    ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::`default constructor closure',
    ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::~CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>);
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_DWORD *)this + 216) = 10;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 109) = std::_Tree_comp_alloc<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 111) = 1LL;
  return this;
}
