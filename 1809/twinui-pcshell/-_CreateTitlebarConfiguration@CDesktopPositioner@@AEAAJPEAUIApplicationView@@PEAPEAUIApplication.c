/*
 * XREFs of ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180028B94
 * Callers:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180028738 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180057308 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18033D2D0 (-GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplic.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowingEnvironment@ApplicationModel@Internal@Windows@@H@Z @ 0x18033DE44 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x18033FDEC (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180340894 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_CreateTitlebarConfiguration(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewTitlebarConfiguration **a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  LPUNKNOWN v10; // rcx
  unsigned int v11; // edi
  volatile int *v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CDesktopPositioner *v16; // [rsp+60h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+20h]

  v16 = this;
  *a3 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = (__int64 *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    v6[1] = (__int64)&CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8 = v6 + 4;
    v6[4] = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v6 + 4);
    }
    v10 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v10->lpVtbl->Release)(v10);
    }
    *((_DWORD *)v6 + 11) = 1;
    *v6 = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewTitlebarConfiguration'};
    v6[1] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = (__int64)&ApplicationViewTitlebarConfiguration::`vftable'{for `IApplicationViewTitlebarConfiguration'};
    v6[1] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_WORD *)v6 + 24) = 0;
    *(__int64 *)((char *)v6 + 52) = 0LL;
    *(__int64 *)((char *)v6 + 60) = 0LL;
    *(__int64 *)((char *)v6 + 68) = 0LL;
    *(__int64 *)((char *)v6 + 76) = 0LL;
    *((_BYTE *)v6 + 84) = 0;
    *((_DWORD *)v6 + 22) = 0;
    v7 = v6;
    v5 = v6;
    v18 = v6;
  }
  if ( v7 )
  {
    if ( a2
      && ((*(int (__fastcall **)(struct IApplicationView *, const WCHAR *, CDesktopPositioner **))(*(_QWORD *)a2 + 152LL))(
            a2,
            L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
            &v16) >= 0
       && (_DWORD)v16
       || (*(int (__fastcall **)(struct IApplicationView *, const WCHAR *, CDesktopPositioner **))(*(_QWORD *)a2 + 152LL))(
            a2,
            L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
            &v16) >= 0
       && (_DWORD)v16) )
    {
      v13 = 4;
    }
    else
    {
      v13 = 23;
    }
    *((_WORD *)v5 + 24) = 257;
    *((_DWORD *)v5 + 15) = 55;
    *((_DWORD *)v5 + 16) = v13;
    *(__int64 *)((char *)v5 + 68) = 255LL;
    *(__int64 *)((char *)v5 + 52) = 1LL;
    *((_DWORD *)v5 + 19) = 1;
    *((_DWORD *)v5 + 20) = 255;
    *((_BYTE *)v5 + 84) = 1;
    *((_DWORD *)v5 + 22) = 0;
    *a3 = (struct IApplicationViewTitlebarConfiguration *)v5;
    (*(void (__fastcall **)(__int64 *))(*v5 + 8))(v5);
    v11 = 0;
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x931,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      -2);
  }
  if ( v5 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v5 + 44), v12) )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*v5 + 136))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v11;
}
