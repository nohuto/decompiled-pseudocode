/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803B4D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003B0D0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18003B72C (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18003F3C4 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007E144 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ACE90 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ACEE0 (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B3B8C (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803B4B98 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x1803B59AC (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1803B70D4 (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IInspectable *a3)
{
  struct IInspectable *v3; // r12
  int PositionerPriorityForView; // eax
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 (__fastcall *v9)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v10; // eax
  _QWORD *v11; // rax
  char v12; // si
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, struct IShellPositionerPriority **); // rdi
  struct IShellPositionerPriority *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  struct IShellPositionerPriority *v22; // rbx
  __int64 (__fastcall *v23)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **); // rdi
  unsigned int v24; // ebx
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, _QWORD, struct IShellPositionerPriority **); // r12
  struct IShellPositionerPriority *v27; // rcx
  struct IShellPositionerPriority *v28; // rbx
  __int64 (__fastcall *v29)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **); // rdi
  struct IShellPositionerPriority *v30; // rcx
  int PositionerForMonitor; // eax
  __int64 v32; // rdx
  struct IShellPositionerPriority *v33; // rcx
  struct IShellPositionerPriority *v34; // rbx
  __int64 (__fastcall *v35)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rdi
  int updated; // eax
  ShellPositionerManager *v37; // rcx
  __int64 v38; // rdx
  int v39; // edi
  int v40; // eax
  __int64 v41; // rdx
  struct IShellPositionerPriority *v43; // [rsp+48h] [rbp-C0h] BYREF
  void *v44; // [rsp+50h] [rbp-B8h] BYREF
  struct IImmersiveMonitor *v45; // [rsp+58h] [rbp-B0h] BYREF
  IUnknown *v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  void *v48; // [rsp+70h] [rbp-98h] BYREF
  struct IShellPositionerPriority *v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  int v51[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v52; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v53; // [rsp+94h] [rbp-74h] BYREF
  struct IInspectable *v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int64 v56; // [rsp+A8h] [rbp-60h]
  _QWORD v57[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v56 = -2LL;
  v3 = a3;
  v54 = a3;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v57,
    (__int64)"PresentationRequested");
  v57[0] = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  ShellPositionerTelemetry::PresentationRequested::StartActivity((ShellPositionerTelemetry::PresentationRequested *)v57);
  v49 = 0LL;
  v55 = (__int64)this - 128;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v49);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                &v49);
  v7 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v49 + 24LL))(v49);
    v46 = 0LL;
    v9 = (*a2)[10];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), IUnknown **))v9)(
            a2,
            &v46);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x244,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_63:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
      goto LABEL_64;
    }
    v11 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v44,
            (__int64)v3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(v11, (__int64)v51);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v44);
    v45 = (struct IImmersiveMonitor *)v46;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v45);
    v12 = 0;
    v50 = 0LL;
    v13 = *(_QWORD *)v51;
    v14 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v51 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
    if ( v14(v13, &v50) >= 0 )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v43,
        v50);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v43,
        (__int64)&v44);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v43);
      v15 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v44 + 56LL))(v44, &v52);
      v7 = v15;
      if ( v15 < 0 )
      {
        v16 = 593LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_38;
      }
      if ( v52 )
      {
        v12 = 1;
        if ( v52 > 1 )
        {
          v7 = -2147024809;
LABEL_38:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v44);
LABEL_62:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v51);
          goto LABEL_63;
        }
        v15 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL))(v44, 0LL, &v47);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 600LL;
          goto LABEL_13;
        }
        v43 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v51 + 40LL))(*(_QWORD *)v51, &v53) < 0 )
        {
          if ( v8 == 4 )
          {
            v7 = -2147467263;
LABEL_36:
            v33 = v43;
            if ( v43 )
            {
              v43 = 0LL;
              (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v33 + 16LL))(v33);
            }
            goto LABEL_38;
          }
          v24 = (*((_DWORD *)this + 4) == 1) + 1;
          v25 = *((_QWORD *)this + 6);
          v26 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v25 + 32LL);
          v27 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v20 = v26(v25, v24, &v43);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 621LL;
            goto LABEL_28;
          }
          v28 = v43;
          v29 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v43 + 88LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
          v20 = v29(v28, (unsigned int)v47, &v45);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 622LL;
            goto LABEL_28;
          }
          v3 = v54;
        }
        else
        {
          v17 = *((_QWORD *)this + 6);
          v18 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v17 + 40LL);
          v19 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v20 = v18(v17, v53, &v43);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 606LL;
LABEL_28:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v21,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v20);
            goto LABEL_36;
          }
          v22 = v43;
          v23 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v43 + 88LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
          v20 = v23(v22, (unsigned int)v47, &v45);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 607LL;
            goto LABEL_28;
          }
        }
        v30 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v44);
    }
    v48 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v8,
                             v46,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v48);
    v7 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v32 = 629LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_61:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
      goto LABEL_62;
    }
    if ( (!v12 || !v8 || v8 == 5)
      && (*(unsigned int (__fastcall **)(void *, _QWORD, struct IInspectable *))(*(_QWORD *)v48 + 72LL))(v48, a2, v3) )
    {
      PositionerForMonitor = (*(__int64 (__fastcall **)(void *, _QWORD, struct IInspectable *))(*(_QWORD *)v48 + 80LL))(
                               v48,
                               a2,
                               v3);
      v7 = PositionerForMonitor;
      if ( PositionerForMonitor < 0 )
      {
        v32 = 640LL;
        goto LABEL_45;
      }
LABEL_60:
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v57);
      v7 = 0;
      goto LABEL_61;
    }
    v43 = 0LL;
    v34 = v49;
    v35 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v49 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
    updated = v35(v34, &v43);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(
                  v37,
                  v43,
                  (struct IApplicationView *)a2,
                  v45,
                  v3);
      v7 = updated;
      if ( updated >= 0 )
      {
        v39 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v43 + 24LL))(v43);
        v44 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
        v40 = ShellPositionerManager::GetPositionerForMonitor(
                v39,
                (IUnknown *)v45,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v44);
        v7 = v40;
        if ( v40 >= 0 )
        {
          v40 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct IShellPositionerPriority *))(*a2)[34])(
                  a2,
                  v43);
          v7 = v40;
          if ( v40 >= 0 )
          {
            v40 = ShellPositionerManager::PerformPositionerHandoff(
                    v55,
                    (struct IApplicationView *)a2,
                    (__int64)v46,
                    (__int64)v45,
                    *(__int64 *)v51,
                    v8,
                    v39);
            v7 = v40;
            if ( v40 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
              goto LABEL_60;
            }
            v41 = 664LL;
          }
          else
          {
            v41 = 660LL;
          }
        }
        else
        {
          v41 = 657LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v41,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v40);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
LABEL_58:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
        goto LABEL_61;
      }
      v38 = 652LL;
    }
    else
    {
      v38 = 649LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23F,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_64:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v49);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v57);
  return v7;
}
