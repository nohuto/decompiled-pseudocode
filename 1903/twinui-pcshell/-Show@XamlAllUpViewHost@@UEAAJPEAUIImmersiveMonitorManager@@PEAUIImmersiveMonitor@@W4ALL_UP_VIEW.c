/*
 * XREFs of ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1802CE0A0
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1802CFB80 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180054508 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180056494 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802B2F9C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802C17B4 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_1802C17B4.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802C18B0 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_1802C18B0.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802C4324 (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C4858 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x1802C7FC4 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802C8AE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1802CE77C (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1802D0F8C (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802E0170 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::Show(__int64 a1, __int64 a2, void *a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r14
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rcx
  enum _TABLETMODESTATE *v13; // rdx
  TabletModeHelpers *v14; // rcx
  HRESULT v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  int Frames; // eax
  void *ppvOut; // [rsp+60h] [rbp-308h] BYREF
  void *v25; // [rsp+68h] [rbp-300h]
  __int64 v26; // [rsp+70h] [rbp-2F8h]
  __int64 v27; // [rsp+78h] [rbp-2F0h]
  __int64 v28; // [rsp+80h] [rbp-2E8h]
  char v29; // [rsp+88h] [rbp-2E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-2D8h]
  int v31; // [rsp+98h] [rbp-2D0h]
  __int64 v32; // [rsp+A0h] [rbp-2C8h]
  _QWORD v33[40]; // [rsp+B0h] [rbp-2B8h] BYREF
  _QWORD v34[40]; // [rsp+1F0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+0h]

  v32 = -2LL;
  ppvOut = a3;
  v27 = a1;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v31 = v8;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"ShowXamlTaskView");
  v33[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::StartActivity((XamlSwitcherTelemetry::ShowXamlTaskView *)v33);
  v28 = a1;
  v29 = 1;
  v9 = CMultitaskingViewHostBase<IAllUpViewHost>::_RegisterForMonitorEvents(a1, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v9);
    v11 = (__int64 *)(a1 + 232);
LABEL_3:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
    XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v33);
    if ( v8 >= 0 )
      LeaveCriticalSection(v7);
    return v10;
  }
  *(_DWORD *)(a1 + 288) = a4;
  v26 = a1 + 232;
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(a1 + 232), a2);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(a1 + 240), (__int64)ppvOut);
  if ( TabletModeHelpers::IsTabletMode(v14, v13) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v15 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 240),
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &ppvOut);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v29 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 232));
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
      XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v33);
      if ( v8 >= 0 )
        LeaveCriticalSection(v7);
      return v16;
    }
    v25 = Platform::Details::Heap::Allocate(0x78uLL, 0xD8uLL);
    v17 = XamlAllUpViewController::XamlAllUpViewController(
            (_DWORD)v25,
            a1,
            *(_QWORD *)(a1 + 208),
            *(_QWORD *)(a1 + 216),
            *(_QWORD *)(a1 + 248),
            *(_QWORD *)(a1 + 80),
            *(_QWORD *)(a1 + 272),
            *(_QWORD *)(a1 + 264),
            (__int64)ppvOut,
            0LL,
            0LL);
    v18 = v17;
    v25 = (void *)v17;
    if ( v17 )
      v19 = v17 + 16;
    else
      v19 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    v25 = Platform::Details::Heap::Allocate(0x78uLL, 0xD8uLL);
    v20 = XamlAllUpViewController::XamlAllUpViewController(
            (_DWORD)v25,
            a1,
            *(_QWORD *)(a1 + 208),
            *(_QWORD *)(a1 + 216),
            *(_QWORD *)(a1 + 248),
            *(_QWORD *)(a1 + 80),
            *(_QWORD *)(a1 + 272),
            *(_QWORD *)(a1 + 264),
            0LL,
            *(_QWORD *)(a1 + 184),
            *(_QWORD *)(a1 + 192));
    v21 = v20;
    v25 = (void *)v20;
    if ( v20 )
      v22 = v20 + 16;
    else
      v22 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  Frames = XamlAllUpViewHost::CreateFrames((XamlAllUpViewHost *)a1);
  v10 = Frames;
  if ( Frames < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)Frames);
    v11 = (__int64 *)(a1 + 232);
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  *(_BYTE *)(a1 + 112) = 1;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v34,
    (__int64)v33,
    0);
  v34[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::operator=((_QWORD *)(a1 + 368), (__int64)v34);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v34);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v33);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
