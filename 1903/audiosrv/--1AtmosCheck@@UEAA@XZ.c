/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x18013DB30
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x18013DF60 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@@std@@QEAAXXZ @ 0x180053770 (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$uniqu.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180063DB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??_G?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAAPEAXI@Z @ 0x18013DE48 (--_G-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAAPEAXI.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x1801404AC (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180140E9C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD **v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  wil::details *v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &AtmosCheck::`vftable';
  *((_QWORD *)this + 1) = &AtmosCheck::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &AtmosCheck::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  AtmosCheck::Uninitialize(this);
  v2 = (void *)*((_QWORD *)this + 72);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 74) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *((_QWORD *)this + 72) = 0LL;
    *((_QWORD *)this + 73) = 0LL;
    *((_QWORD *)this + 74) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 67);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 69) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
  }
  v4 = (_QWORD **)*((_QWORD *)this + 65);
  v5 = *v4;
  *v4 = v4;
  *(_QWORD *)(*((_QWORD *)this + 65) + 8LL) = *((_QWORD *)this + 65);
  *((_QWORD *)this + 66) = 0LL;
  v6 = (_QWORD *)*((_QWORD *)this + 65);
  if ( v5 != v6 )
  {
    do
    {
      v7 = (_QWORD *)*v5;
      std::pair<std::wstring const,std::wstring>::`scalar deleting destructor'(v5 + 2);
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x50);
      v5 = v7;
      v6 = (_QWORD *)*((_QWORD *)this + 65);
    }
    while ( v7 != v6 );
  }
  std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x50);
  v8 = (void *)*((_QWORD *)this + 59);
  if ( v8 )
  {
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 61) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
  }
  std::list<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>::clear((__int64)this + 456);
  std::_Deallocate<16,0>(*((void **)this + 57), (const struct std::nothrow_t *)0x38);
  `eh vector destructor iterator'(
    (char *)this + 256,
    32LL,
    6LL,
    (void (*)(void *))AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo);
  v10 = (wil::details *)*((_QWORD *)this + 31);
  if ( v10 )
    wil::details::delete_wnf_subscription_state(v10, v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 28);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v11 = *((_QWORD *)this + 6);
  if ( v11 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>((__int64)this);
}
