/*
 * XREFs of ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18026E4EC
 * Callers:
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18026ECEC (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010820 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18018D7B4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18025B55C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180266E14 (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitas.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266F18 (MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877___.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18026785C (--$_Emplace_reallocate@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorF.c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877__0 @ 0x1802685F4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--_lambda_bb5ee7a853464f85d103d6a4a4db2877__0.c)
 *     ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x1802696B0 (--0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ.c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::__lambda_bb5ee7a853464f85d103d6a4a4db2877_ @ 0x18026AC84 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--__lambda_bb5ee7a853464f85d103d6a4a4db2877_.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x18026F14C (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180273EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_180273EF0.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::CreateFrameForMonitor(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  void *v4; // rcx
  __int64 v5; // rbx
  enum _TABLETMODESTATE *v6; // rdx
  TabletModeHelpers *v7; // rcx
  char IsTabletMode; // r15
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rcx
  volatile int *v19; // rdx
  __int64 v20; // r14
  int XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  char *v28; // rdx
  __int64 v29; // rcx
  char v30; // [rsp+60h] [rbp-128h]
  __int64 v31; // [rsp+68h] [rbp-120h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-118h] BYREF
  struct IImmersiveMonitor *v33; // [rsp+78h] [rbp-110h] BYREF
  __int64 v34; // [rsp+80h] [rbp-108h] BYREF
  __int64 v35; // [rsp+88h] [rbp-100h] BYREF
  __int128 v36; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v41[3]; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v42[12]; // [rsp+E0h] [rbp-A8h] BYREF
  int v43[4]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v41[1] = -2LL;
  v33 = a2;
  v32 = 0LL;
  v4 = Platform::Details::Heap::Allocate(0x78uLL, 0xA0uLL);
  v5 = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl((__int64)v4);
  *(_QWORD *)&v36 = v5;
  __abi_winrt_ptr_assign((__int64 *)&v32, v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v7, v6);
  v30 = IsTabletMode;
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 88LL))(a2, v43);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *(float *)&v37 = (float)v43[0];
    *((float *)&v37 + 1) = (float)v43[1];
    *((float *)&v37 + 2) = (float)(v43[2] - v43[0]);
    *((float *)&v37 + 3) = (float)(v43[3] - v43[1]);
    v36 = v37;
    v12 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
            *((_QWORD *)this + 20),
            &v36);
    *(_QWORD *)&v36 = v12;
    v13 = __abi_winrt_ptr_ctor(v12);
    v40 = v13;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v14 = __abi_winrt_cast_to(
            0,
            *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 25),
            (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
    *(_QWORD *)&v36 = v14;
    v34 = v14;
    wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *>(
      &v31,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)this + 200,
      &v34);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = __abi_winrt_ptr_ctor(*((_QWORD *)this + 22));
    v41[0] = v15;
    v34 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
    if ( IsTabletMode )
      v16 = 0LL;
    else
      v16 = *((_QWORD *)this + 23);
    v17 = __abi_winrt_ptr_ctor(v16);
    v39 = v17;
    if ( v30 )
      v18 = 0LL;
    else
      v18 = *((_QWORD *)this + 24);
    v20 = __abi_winrt_ptr_ctor(v18);
    v38 = v20;
    *(_QWORD *)&v36 = this;
    if ( this )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(
        (__int64)this,
        v19);
    lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877__0(
      (__int64)v42,
      (volatile int *)&v36,
      &v34,
      v41,
      v43,
      &v37,
      &v40,
      (__int64 *)&v32,
      &v31,
      &v39,
      &v38);
    v35 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877 = MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_(
                                                                                       (__int64 *)&v33,
                                                                                       (__int64)v42);
    v22 = XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877;
    if ( XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877 >= 0 )
    {
      v37 = *(_OWORD *)v43;
      v24 = *((_QWORD *)this + 28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      v25 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int128 *, __int64, GUID *, __int64 *))(*(_QWORD *)v24 + 32LL))(
              v24,
              v33,
              &v37,
              5LL,
              &GUID_a9728204_899b_46a5_9344_43e74614d24b,
              &v35);
      v26 = v25;
      if ( v25 >= 0 )
      {
        v28 = (char *)*((_QWORD *)this + 42);
        if ( *((char **)this + 43) == v28 )
        {
          std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
            (char **)this + 41,
            v28,
            &v31);
        }
        else
        {
          *(_QWORD *)v28 = v31;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v28);
          *((_QWORD *)this + 42) += 8LL;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        lambda_bb5ee7a853464f85d103d6a4a4db2877_::__lambda_bb5ee7a853464f85d103d6a4a4db2877_(v42);
        if ( this )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(this);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v29 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v32 )
          (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26C,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        lambda_bb5ee7a853464f85d103d6a4a4db2877_::__lambda_bb5ee7a853464f85d103d6a4a4db2877_(v42);
        if ( this )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(this);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v27 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v32 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v32 + 16LL))(v32, *v32);
        return v26;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26B,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      lambda_bb5ee7a853464f85d103d6a4a4db2877_::__lambda_bb5ee7a853464f85d103d6a4a4db2877_(v42);
      if ( this )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(this);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v23 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v32 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      return v22;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v9);
    if ( v32 )
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
    return v10;
  }
}
