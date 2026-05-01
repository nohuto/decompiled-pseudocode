/*
 * XREFs of ??0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@W4WindowingEnvironmentType@@@Z @ 0x1802ADB10
 * Callers:
 *     ??$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@12@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x1802AADEC (--$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironme.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@XZ @ 0x1802AF92C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowingEnvironmentConfig::WindowingEnvironmentConfig(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_QWORD *)(a1 + 40) = &IAppViewDataSourceAdapter::`vftable';
  *(_DWORD *)(a1 + 52) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::`vftable';
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::`vftable'{for `IWindowingEnvironmentConfig'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentConfigInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &WindowingEnvironmentConfig::`vftable';
  *(_QWORD *)(a1 + 32) = &WindowingEnvironmentConfig::`vftable'{for `IWindowingEnvironmentConfig'};
  *(_QWORD *)(a1 + 40) = &WindowingEnvironmentConfig::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentConfigInternal>'};
  *(_DWORD *)(a1 + 56) = 0;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    (_QWORD *)(a1 + 64),
    a3);
  *(_QWORD *)(a1 + 80) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 104) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Buyheadnode(v8);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 72LL))(*(_QWORD *)(a1 + 64), a1 + 72);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      16LL,
      (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v9);
  return a1;
}
