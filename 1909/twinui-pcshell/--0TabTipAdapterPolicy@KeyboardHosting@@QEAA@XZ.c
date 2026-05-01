/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x18033D030
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x18033B5E0 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@PEAX@2@XZ @ 0x180234264 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Ue_ea_180234264.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@XZ @ 0x18026D3A8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IUSize@Foundation@Windows@@U-$less@I@std@@V-$al.c)
 *     ??0?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBI_N@std@@@1@@Z @ 0x18033CD8C (--0-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allocat.c)
 *     ??0?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBIPEBG@std@@@1@@Z @ 0x18033CEA8 (--0-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V-$initializer_li.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@2@PEAU32@0@Z @ 0x1803489AC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$a.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180348BA4 (-_Init@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$all.c)
 */

// Hidden C++ exception states: #wind=10
KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 v2; // rcx
  __m128i v4; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-39h] BYREF
  int v6; // [rsp+50h] [rbp-21h] BYREF
  const wchar_t *v7; // [rsp+58h] [rbp-19h]
  int v8; // [rsp+60h] [rbp-11h]
  const wchar_t *v9; // [rsp+68h] [rbp-9h]
  int v10; // [rsp+70h] [rbp-1h]
  const wchar_t *v11; // [rsp+78h] [rbp+7h]
  int v12; // [rsp+80h] [rbp+Fh] BYREF
  const wchar_t *v13; // [rsp+88h] [rbp+17h]
  int v14; // [rsp+90h] [rbp+1Fh]
  const wchar_t *v15; // [rsp+98h] [rbp+27h]
  int v16; // [rsp+A0h] [rbp+2Fh]
  const wchar_t *v17; // [rsp+A8h] [rbp+37h]
  __int64 v18; // [rsp+B0h] [rbp+3Fh] BYREF

  v5[1] = -2LL;
  v5[2] = this;
  Microsoft::WRL::FtmBase::FtmBase((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6 = 0;
  v7 = L"OptimizedKeyboardRelativeXPositionOnScreen";
  v8 = 4;
  v9 = L"OptimizedDictationPanelRelativeXPositionOnScreen";
  v10 = 5;
  v11 = L"OptimizedLanguageBarRelativeXPositionOnScreen";
  v4.m128i_i64[0] = (__int64)&v6;
  v4.m128i_i64[1] = (__int64)&v12;
  std::map<unsigned int,unsigned short const *>::map<unsigned int,unsigned short const *>((__int64 **)this + 9, &v4);
  v12 = 0;
  v13 = L"OptimizedKeyboardRelativeYPositionOnScreen";
  v14 = 4;
  v15 = L"OptimizedDictationPanelRelativeYPositionOnScreen";
  v16 = 5;
  v17 = L"OptimizedLanguageBarRelativeYPositionOnScreen";
  v4.m128i_i64[0] = (__int64)&v12;
  v4.m128i_i64[1] = (__int64)&v18;
  std::map<unsigned int,unsigned short const *>::map<unsigned int,unsigned short const *>((__int64 **)this + 11, &v4);
  *((_DWORD *)this + 26) = 1000;
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 14) = L"LastTipXPositionOnScreen";
  *((_QWORD *)this + 15) = L"LastTipYPositionOnScreen";
  *((_QWORD *)this + 16) = L"LastTipXPositionIsPositive";
  *((_QWORD *)this + 17) = L"LastTipYPositionIsPositive";
  memset_0((char *)this + 144, 0, 0x30uLL);
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  memset_0((char *)this + 224, 0, 0x20uLL);
  *((_DWORD *)this + 64) = 100;
  *((_QWORD *)this + 33) = 0LL;
  memset_0((char *)this + 272, 0, 0x20uLL);
  *((_DWORD *)this + 76) = 100;
  *((_QWORD *)this + 39) = 0LL;
  memset_0((char *)this + 320, 0, 0x20uLL);
  *((_DWORD *)this + 88) = 100;
  v5[0] = (char *)this + 360;
  *((_DWORD *)this + 90) = 0;
  v4.m128i_i64[0] = (__int64)this + 368;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 46) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>::_Buynode0(
                             v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 90) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Init(
    (char *)this + 360,
    8LL);
  *((_QWORD *)this + 53) = 0LL;
  *((_BYTE *)this + 432) = 0;
  *(_QWORD *)((char *)this + 436) = 0LL;
  *((_BYTE *)this + 444) = 0;
  v4.m128i_i64[0] = (__int64)this + 448;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 56) = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  v4.m128i_i64[0] = (__int64)this + 464;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 58) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Buyheadnode();
  *((_DWORD *)this + 120) = -1;
  *(_QWORD *)((char *)this + 484) = 0LL;
  *((_DWORD *)this + 123) = 0;
  *((_WORD *)this + 248) = 0;
  *((_BYTE *)this + 498) = 0;
  *(_QWORD *)((char *)this + 500) = 0LL;
  v4.m128i_i64[0] = (__int64)this + 512;
  LODWORD(v5[0]) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>(
    (__int64)this + 512,
    v5);
  *((_BYTE *)this + 576) = 0;
  *(_QWORD *)((char *)this + 580) = 0LL;
  *(_QWORD *)((char *)this + 588) = 0LL;
  return this;
}
