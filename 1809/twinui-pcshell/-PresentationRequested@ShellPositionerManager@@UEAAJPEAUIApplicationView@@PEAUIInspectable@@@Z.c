/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180334F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18002EE54 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F540 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18002FBD4 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009564C (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009569C (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180306034 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x180333FDC (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x180334E64 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x180335D68 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1803370F4 (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1803ACE10 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  int PositionerPriorityForView; // eax
  unsigned int v7; // esi
  int v8; // eax
  _QWORD *v9; // rax
  char v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  struct IShellPositionerPriority *v19; // rdi
  int v20; // r15d
  int PositionerForMonitor; // eax
  __int64 v22; // rdx
  struct IApplicationView *v23; // rdx
  BOOL v24; // r15d
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v26; // eax
  __int64 v27; // rbx
  int v28; // eax
  int updated; // eax
  ShellPositionerManager *v30; // rcx
  __int64 v31; // rdx
  int v32; // ebx
  int v33; // eax
  __int64 v34; // rdx
  struct IImmersiveApplication *v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  struct IShellPositionerPriority *v38; // [rsp+48h] [rbp-C0h] BYREF
  struct IImmersiveMonitor *v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  void *v41; // [rsp+60h] [rbp-A8h] BYREF
  IUnknown *v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  struct IShellPositionerPriority *v46; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v47; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int16 v50; // [rsp+A8h] [rbp-60h] BYREF
  BOOL v51; // [rsp+B0h] [rbp-58h]
  _QWORD v52[40]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v49 = -2LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v52,
    (__int64)"PresentationRequested");
  v52[0] = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  ShellPositionerTelemetry::PresentationRequested::StartActivity((ShellPositionerTelemetry::PresentationRequested *)v52);
  v46 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
  v48 = (__int64)this - 128;
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                &v46);
  v7 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL))(a2, &v42);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21C,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_61:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
      goto LABEL_62;
    }
    v9 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v36,
           (__int64)a3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(v9, (__int64)&v45);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v36);
    v39 = (struct IImmersiveMonitor *)v42;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v39);
    v10 = 0;
    v44 = 0LL;
    v11 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v44) >= 0 )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v37,
        v44);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v37,
        (__int64)&v36);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v37);
      v12 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, unsigned int *))(*(_QWORD *)v36 + 56LL))(
              v36,
              &v47);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 553LL;
LABEL_13:
        v14 = (unsigned int)v12;
        goto LABEL_14;
      }
      if ( v47 )
      {
        if ( v47 > 1 )
        {
          v7 = -2147024809;
          v14 = 2147942487LL;
          v13 = 557LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)v14);
LABEL_21:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v36);
LABEL_60:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v45);
          goto LABEL_61;
        }
        v12 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v36 + 48LL))(
                v36,
                0LL,
                &v38);
        v7 = v12;
        if ( v12 < 0 )
        {
          v13 = 560LL;
          goto LABEL_13;
        }
        v37 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 40LL))(v45, &v43) >= 0 )
        {
          v15 = *((_QWORD *)this + 6);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 40LL))(
                  v15,
                  (unsigned int)v43,
                  &v37);
          v7 = v16;
          if ( v16 < 0 )
          {
            v17 = 566LL;
LABEL_20:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v16);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
            goto LABEL_21;
          }
          v18 = v37;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v18 + 88LL))(
                  v18,
                  (unsigned int)v38,
                  &v39);
          v7 = v16;
          if ( v16 < 0 )
          {
            v17 = 567LL;
            goto LABEL_20;
          }
          v10 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v36);
    }
    v19 = v46;
    v20 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v46 + 24LL))(v46);
    LODWORD(v38) = v20;
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v20,
                             v42,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v41);
    v7 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v22 = 575LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
      goto LABEL_59;
    }
    LODWORD(v40) = 0;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 104LL))(v45, &v40) >= 0 )
    {
      v24 = v40 != 0;
      ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, v23);
      v36 = ApplicationFromView;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
      if ( !ApplicationFromView )
      {
        v7 = -2147467263;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x248,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)0x80004001LL);
LABEL_37:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
LABEL_59:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
        goto LABEL_60;
      }
      v37 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      v26 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ApplicationFromView
                                                                                                 + 48LL))(
              ApplicationFromView,
              0LL,
              &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
              &v37);
      v7 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24B,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v26);
LABEL_36:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
        goto LABEL_37;
      }
      v27 = v37;
      v43 = v37;
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
      v50 = 3;
      v51 = v24;
      v28 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v27 + 48LL))(
              v27,
              &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
              &v50);
      v7 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24E,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v28);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        v43 = 0LL;
        goto LABEL_36;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v43 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      v20 = (int)v38;
    }
    if ( !v10
      && (*(unsigned int (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v41 + 72LL))(
           v41,
           a2,
           a3) )
    {
      PositionerForMonitor = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v41 + 80LL))(
                               v41,
                               a2,
                               a3);
      v7 = PositionerForMonitor;
      if ( PositionerForMonitor < 0 )
      {
        v22 = 598LL;
        goto LABEL_43;
      }
LABEL_58:
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v52);
      v7 = 0;
      goto LABEL_59;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
    updated = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v19 + 64LL))(
                v19,
                &v38);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(v30, v38, a2, v39, a3);
      v7 = updated;
      if ( updated >= 0 )
      {
        v32 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v38 + 24LL))(v38);
        v36 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
        v33 = ShellPositionerManager::GetPositionerForMonitor(
                v32,
                (IUnknown *)v39,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                (void **)&v36);
        v7 = v33;
        if ( v33 >= 0 )
        {
          v33 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a2 + 272LL))(
                  a2,
                  v38);
          v7 = v33;
          if ( v33 >= 0 )
          {
            v33 = ShellPositionerManager::PerformPositionerHandoff(v48, a2, v20, v32);
            v7 = v33;
            if ( v33 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
              goto LABEL_58;
            }
            v34 = 621LL;
          }
          else
          {
            v34 = 618LL;
          }
        }
        else
        {
          v34 = 615LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v33);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
LABEL_56:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
        goto LABEL_59;
      }
      v31 = 610LL;
    }
    else
    {
      v31 = 607LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x218,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_62:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v52);
  return v7;
}
