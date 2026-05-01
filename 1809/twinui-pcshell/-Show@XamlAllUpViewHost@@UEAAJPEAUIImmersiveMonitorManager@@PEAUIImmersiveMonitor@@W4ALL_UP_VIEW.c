/*
 * XREFs of ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180274CE0
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180276240 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010820 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18025B55C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18026877C (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para_ea_18026877C.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180268878 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para_ea_180268878.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18026B27C (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026B764 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18026ECEC (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18026F810 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180275388 (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x18027752C (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180286A34 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::Show(__int64 a1, __int64 a2, void *a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r15d
  int Frames; // ebx
  __int64 v9; // rdx
  enum _TABLETMODESTATE *v11; // rdx
  TabletModeHelpers *v12; // rcx
  HRESULT v13; // eax
  unsigned int v14; // ebx
  void *v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  void *v18; // rax
  void *v19; // rbx
  __int64 v20; // rdx
  void *ppvOut; // [rsp+60h] [rbp-308h] BYREF
  void *v22; // [rsp+68h] [rbp-300h]
  __int64 v23; // [rsp+70h] [rbp-2F8h]
  __int64 v24; // [rsp+78h] [rbp-2F0h]
  __int64 v25; // [rsp+80h] [rbp-2E8h]
  char v26; // [rsp+88h] [rbp-2E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-2D8h]
  int v28; // [rsp+98h] [rbp-2D0h]
  __int64 v29; // [rsp+A0h] [rbp-2C8h]
  _QWORD v30[40]; // [rsp+B0h] [rbp-2B8h] BYREF
  _QWORD v31[40]; // [rsp+1F0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+0h]

  v29 = -2LL;
  LODWORD(ppvOut) = a4;
  v22 = a3;
  v24 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v28 = v7;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"ShowXamlTaskView");
  v30[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::StartActivity((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
  v25 = a1;
  v26 = 1;
  Frames = CMultitaskingViewHostBase<IAllUpViewHost>::_RegisterForMonitorEvents(a1, a2);
  v23 = a1 + 232;
  if ( Frames < 0 )
  {
    v9 = 236LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)Frames);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 232));
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
    XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
    return (unsigned int)Frames;
  }
  *(_DWORD *)(a1 + 288) = (_DWORD)ppvOut;
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 232), a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 240), (__int64)v22);
  if ( TabletModeHelpers::IsTabletMode(v12, v11) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 240),
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &ppvOut);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v26 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 232));
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
      XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
      if ( v7 >= 0 )
        LeaveCriticalSection(v6);
      return v14;
    }
    v22 = Platform::Details::Heap::Allocate(0x78uLL, 0xD8uLL);
    v15 = (void *)XamlAllUpViewController::XamlAllUpViewController(
                    (_DWORD)v22,
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
    v16 = v15;
    v22 = v15;
    if ( v15 )
      v17 = (__int64)v15 + 16;
    else
      v17 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v17);
    if ( v16 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    v22 = Platform::Details::Heap::Allocate(0x78uLL, 0xD8uLL);
    v18 = (void *)XamlAllUpViewController::XamlAllUpViewController(
                    (_DWORD)v22,
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
    v19 = v18;
    v22 = v18;
    if ( v18 )
      v20 = (__int64)v18 + 16;
    else
      v20 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v20);
    if ( v19 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  Frames = XamlAllUpViewHost::CreateFrames((XamlAllUpViewHost *)a1);
  if ( Frames < 0 )
  {
    v9 = 276LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  *(_BYTE *)(a1 + 112) = 1;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)v30,
    0);
  v31[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::operator=((_QWORD *)(a1 + 368), (__int64)v31);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v31);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
