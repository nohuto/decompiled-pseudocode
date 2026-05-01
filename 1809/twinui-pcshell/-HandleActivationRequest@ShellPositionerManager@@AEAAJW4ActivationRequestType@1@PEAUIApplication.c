/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAK@Z @ 0x18002FC70
 * Callers:
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002EF80 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18006B270 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180334AE0 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18002F6F0 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18002FFA4 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180030220 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x18033466C (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1803358F0 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x18033A170 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellPositionerManager::HandleActivationRequest(
        unsigned int *a1,
        int a2,
        ApplicationViewHelpers *a3,
        struct IImmersiveMonitor *a4,
        struct IUnknown *a5,
        void *fPending)
{
  void *v9; // r15
  void *v10; // rdi
  int v11; // ebx
  int v12; // eax
  struct IUnknown *v13; // r12
  int updated; // eax
  __int64 v15; // r14
  HRESULT v16; // eax
  void *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  void *v22; // rcx
  struct IShellPositionerPriority *v23; // rcx
  char v25; // r14
  struct IApplicationView *v26; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  int v40; // [rsp+20h] [rbp-30h]
  int v41; // [rsp+20h] [rbp-30h]
  void *ppvOut; // [rsp+30h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v43; // [rsp+38h] [rbp-18h] BYREF
  void *v44; // [rsp+40h] [rbp-10h]
  __int64 v45; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  void *v48; // [rsp+A0h] [rbp+50h] BYREF

  v45 = -2LL;
  v9 = fPending;
  if ( fPending )
    *(_DWORD *)fPending = 0;
  v10 = 0LL;
  v44 = 0LL;
  fPending = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, void **))(*(_QWORD *)a3 + 264LL))(a3, &fPending) >= 0 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&fPending);
  fPending = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a3, v26);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v30 = PositionerPriority_CreateInstance(PropW, v29, &fPending);
      if ( v30 >= 0 )
        goto LABEL_50;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C4,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v30,
        v40);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&fPending);
  v32 = PositionerPriority_CreateInstance(a1[36], v31, &fPending);
  v11 = v32;
  if ( v32 < 0 )
  {
    v33 = 1017LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v32,
      v40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&fPending);
    goto LABEL_9;
  }
LABEL_50:
  v32 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, void *))(*(_QWORD *)a3 + 272LL))(a3, fPending);
  v11 = v32;
  if ( v32 < 0 )
  {
    v33 = 1021LL;
    goto LABEL_49;
  }
LABEL_4:
  v10 = fPending;
  if ( fPending )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)fPending + 8LL))(fPending);
    v10 = fPending;
  }
  v44 = v10;
  if ( v10 )
  {
    fPending = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = 0;
LABEL_9:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x282,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11,
      v40);
    goto LABEL_37;
  }
  LODWORD(fPending) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 24LL))(v10);
  v43 = 0LL;
  v12 = (*(__int64 (__fastcall **)(void *, struct IShellPositionerPriority **))(*(_QWORD *)v10 + 64LL))(v10, &v43);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x288,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v12,
      v40);
  }
  else
  {
    v13 = a5;
    updated = ShellPositionerManager::UpdatePositionerPriorityForActivation(
                (ShellPositionerManager *)a1,
                v43,
                a3,
                a4,
                a5);
    v11 = updated;
    if ( updated >= 0 )
    {
      v15 = (*(int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v43 + 24LL))(v43);
      v48 = 0LL;
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             (IUnknown *)a4,
             &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
             &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
             &ppvOut) < 0 )
      {
        v16 = IUnknown_QueryService(
                (IUnknown *)a4,
                &c_positionersSIDs + v15,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v48);
        v11 = v16;
        if ( v16 >= 0 )
          goto LABEL_14;
        v34 = 1268LL;
      }
      else
      {
        v16 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, void **))(*(_QWORD *)ppvOut + 24LL))(
                ppvOut,
                (unsigned int)v15,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v48);
        v11 = v16;
        if ( v16 >= 0 )
        {
LABEL_14:
          v17 = ppvOut;
          if ( ppvOut )
          {
            ppvOut = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
          }
          v11 = 0;
LABEL_17:
          if ( v11 < 0 )
          {
            v35 = (unsigned int)v11;
            v39 = 656LL;
          }
          else if ( (*(unsigned int (__fastcall **)(void *, ApplicationViewHelpers *, struct IUnknown *))(*(_QWORD *)v48 + 32LL))(
                      v48,
                      a3,
                      v13) )
          {
            v11 = -2147467260;
            v35 = 2147500036LL;
            v39 = 659LL;
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL))(
                    a3,
                    v43);
            v11 = v18;
            if ( v18 < 0 )
            {
              v39 = 662LL;
            }
            else if ( a2 )
            {
              v19 = (unsigned int)fPending;
              if ( (_DWORD)v15 != (_DWORD)fPending )
              {
                ppvOut = 0LL;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
                v41 = v15;
                v37 = ShellPositionerManager::SendControlLostToPositioner(v36, a3, a4, v19);
                v11 = v37;
                if ( v37 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x29E,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                    (const char *)(unsigned int)v37,
                    v15);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
                  goto LABEL_33;
                }
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
                v19 = (unsigned int)fPending;
              }
              ppvOut = 0LL;
              if ( InitOnceBeginInitialize(
                     &`ShellPositionerTelemetry::Instance'::`2'::wrapper,
                     0,
                     (PBOOL)&fPending,
                     &ppvOut)
                && (_DWORD)fPending )
              {
                ppvOut = qword_18050FC80;
                qword_18050FC80[0] = &IamTraceLogging::`vftable';
                atexit(lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
                DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_18050FC80);
                InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_18050FC80);
              }
              v20 = (_DWORD *)*((_QWORD *)ppvOut + 1);
              if ( v20 && *v20 )
              {
                ppvOut = 0LL;
                if ( InitOnceBeginInitialize(
                       &`ShellPositionerTelemetry::Instance'::`2'::wrapper,
                       0,
                       (PBOOL)&fPending,
                       &ppvOut)
                  && (_DWORD)fPending )
                {
                  ppvOut = qword_18050FC80;
                  qword_18050FC80[0] = &IamTraceLogging::`vftable';
                  atexit(lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
                  DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_18050FC80);
                  InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_18050FC80);
                }
                ShellPositionerTelemetry::PositionViewForActivation_(v21, (__int64)a3, v15);
              }
              v18 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers *, _QWORD, struct IUnknown *))(*(_QWORD *)v48 + 48LL))(
                      v48,
                      a3,
                      v19,
                      v13);
              v11 = v18;
              if ( v18 >= 0 )
                goto LABEL_32;
              v39 = 698LL;
            }
            else
            {
              v25 = 1;
              if ( v9 )
              {
                (**(void (__fastcall ***)(void *, GUID *, void **))v48)(
                  v48,
                  &GUID_de7f1933_0d90_43a7_a407_4a7ea255714f,
                  &fPending);
                if ( fPending )
                {
                  v25 = 0;
                  v38 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers *, void *))(*(_QWORD *)fPending + 40LL))(
                          fPending,
                          a3,
                          v9);
                  v11 = v38;
                  if ( v38 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2AD,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                      (const char *)(unsigned int)v38,
                      v41);
                    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&fPending);
                    goto LABEL_33;
                  }
                }
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&fPending);
                if ( !v25 )
                  goto LABEL_32;
              }
              v18 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers *, struct IUnknown *))(*(_QWORD *)v48 + 40LL))(
                      v48,
                      a3,
                      v13);
              v11 = v18;
              if ( v18 >= 0 )
              {
LABEL_32:
                v11 = 0;
                goto LABEL_33;
              }
              v39 = 691LL;
            }
            v35 = (unsigned int)v18;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)v35,
            v41);
LABEL_33:
          v22 = v48;
          if ( v48 )
          {
            v48 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_35;
        }
        v34 = 1261LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v16,
        v41);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v41);
  }
LABEL_35:
  v23 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_37:
  if ( v10 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
