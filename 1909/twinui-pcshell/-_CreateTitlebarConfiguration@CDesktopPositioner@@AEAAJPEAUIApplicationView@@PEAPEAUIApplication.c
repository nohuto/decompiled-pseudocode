/*
 * XREFs of ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022BF4
 * Callers:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002526C (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18004ADF0 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x18004CE48 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007DA58 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803C17F0 (-GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplic.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803C2440 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1803C45EC (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_CreateTitlebarConfiguration(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewTitlebarConfiguration **a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD **v8; // rbx
  LPUNKNOWN v9; // rsi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r15
  _QWORD *v11; // rcx
  LPUNKNOWN v12; // rcx
  unsigned int v13; // edi
  volatile int *v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  CDesktopPositioner *v18; // [rsp+70h] [rbp+40h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+80h] [rbp+50h] BYREF
  _QWORD *v20; // [rsp+88h] [rbp+58h]

  v18 = this;
  *a3 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    v6[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8 = (_QWORD **)(v6 + 4);
    v6[4] = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v9 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      v11 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v9,
        &GUID_00000003_0000_0000_c000_000000000046,
        v6 + 4);
    }
    v12 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v12->lpVtbl->Release)(v12);
    }
    *((_DWORD *)v6 + 11) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewTitlebarConfiguration'};
    v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &ApplicationViewTitlebarConfiguration::`vftable'{for `IApplicationViewTitlebarConfiguration'};
    v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_WORD *)v6 + 24) = 0;
    *(_QWORD *)((char *)v6 + 52) = 0LL;
    *(_QWORD *)((char *)v6 + 60) = 0LL;
    *(_QWORD *)((char *)v6 + 68) = 0LL;
    *(_QWORD *)((char *)v6 + 76) = 0LL;
    *((_BYTE *)v6 + 84) = 0;
    *((_DWORD *)v6 + 22) = 0;
    v7 = v6;
    v5 = v6;
    v20 = v6;
  }
  if ( v7 )
  {
    if ( a2
      && ((*(int (__fastcall **)(struct IApplicationView *, const WCHAR *, CDesktopPositioner **))(*(_QWORD *)a2 + 152LL))(
            a2,
            L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
            &v18) >= 0
       && (_DWORD)v18
       || (*(int (__fastcall **)(struct IApplicationView *, const WCHAR *, CDesktopPositioner **))(*(_QWORD *)a2 + 152LL))(
            a2,
            L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
            &v18) >= 0
       && (_DWORD)v18) )
    {
      v15 = 4;
    }
    else
    {
      v15 = 23;
    }
    *((_WORD *)v5 + 24) = 257;
    *((_DWORD *)v5 + 15) = 55;
    *((_DWORD *)v5 + 16) = v15;
    *(_QWORD *)((char *)v5 + 68) = 255LL;
    *(_QWORD *)((char *)v5 + 52) = 1LL;
    *((_DWORD *)v5 + 19) = 1;
    *((_DWORD *)v5 + 20) = 255;
    *((_BYTE *)v5 + 84) = 1;
    *((_DWORD *)v5 + 22) = 0;
    *a3 = (struct IApplicationViewTitlebarConfiguration *)v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    v13 = 0;
  }
  else
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x926,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      -2);
  }
  if ( v5 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v5 + 44), v14) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 136LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v13;
}
