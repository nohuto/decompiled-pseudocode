/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180048814
 * Callers:
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180046BE0 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180047D40 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18007B690 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800479E4 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180048C44 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180049200 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x180394C78 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x180395D40 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x18039F1C0 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellPositionerManager::HandleActivationRequest(
        unsigned int *a1,
        int a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveMonitor *a4,
        struct IUnknown *a5,
        __int64 a6,
        int a7,
        void *ppvOut)
{
  void *v11; // r14
  void *v12; // rcx
  int v13; // ebx
  unsigned int v14; // r13d
  int v15; // eax
  struct IUnknown *v16; // r15
  int updated; // eax
  __int64 v18; // rsi
  HRESULT v19; // eax
  void *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  void *v23; // rcx
  struct IShellPositionerPriority *v24; // rcx
  void *v25; // rcx
  char v27; // si
  __int64 v28; // rcx
  struct IApplicationView *v29; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // [rsp+20h] [rbp-30h]
  int v44; // [rsp+20h] [rbp-30h]
  struct IShellPositionerPriority *v45; // [rsp+30h] [rbp-20h] BYREF
  void *v46; // [rsp+38h] [rbp-18h]
  LPVOID Context[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  void *v50; // [rsp+A0h] [rbp+50h] BYREF

  Context[1] = (LPVOID)-2LL;
  v11 = ppvOut;
  if ( ppvOut )
    *(_DWORD *)ppvOut = 0;
  v46 = 0LL;
  ppvOut = 0LL;
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), void **))(*a3)[33])(
         a3,
         &ppvOut) >= 0 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
  ppvOut = 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, v29);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v36 = PositionerPriority_CreateInstance(PropW, v32, &ppvOut);
      if ( v36 >= 0 )
        goto LABEL_46;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x501,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v36,
        v43);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
  v34 = PositionerPriority_CreateInstance(a1[36], v33, &ppvOut);
  v13 = v34;
  if ( v34 < 0 )
  {
    v37 = 1073LL;
    goto LABEL_55;
  }
LABEL_46:
  v34 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), void *))(*a3)[34])(
          a3,
          ppvOut);
  v13 = v34;
  if ( v34 < 0 )
  {
    v37 = 1077LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v34,
      v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
    goto LABEL_9;
  }
LABEL_4:
  v12 = ppvOut;
  if ( ppvOut )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
    v12 = ppvOut;
  }
  v46 = v12;
  if ( v12 )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = 0;
LABEL_9:
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AF,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v13,
      v43);
    goto LABEL_33;
  }
  v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v46 + 24LL))(v46);
  v45 = 0LL;
  v15 = (*(__int64 (__fastcall **)(void *, struct IShellPositionerPriority **))(*(_QWORD *)v46 + 64LL))(v46, &v45);
  v13 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B5,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v15,
      v43);
  }
  else
  {
    v16 = a5;
    updated = ShellPositionerManager::UpdatePositionerPriorityForActivation(
                (ShellPositionerManager *)a1,
                v45,
                (struct IApplicationView *)a3,
                a4,
                a5);
    v13 = updated;
    if ( updated >= 0 )
    {
      v18 = (*(int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v45 + 24LL))(v45);
      v50 = 0LL;
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             (IUnknown *)a4,
             &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
             &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
             &ppvOut) < 0 )
      {
        v19 = IUnknown_QueryService(
                (IUnknown *)a4,
                &c_positionersSIDs + v18,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v50);
        v13 = v19;
        if ( v19 >= 0 )
          goto LABEL_14;
        v38 = 1329LL;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, void **))(*(_QWORD *)ppvOut + 24LL))(
                ppvOut,
                (unsigned int)v18,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v50);
        v13 = v19;
        if ( v19 >= 0 )
        {
LABEL_14:
          v20 = ppvOut;
          if ( ppvOut )
          {
            ppvOut = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v13 = 0;
LABEL_17:
          if ( v13 < 0 )
          {
            v39 = (unsigned int)v13;
            v42 = 701LL;
          }
          else if ( (*(unsigned int (__fastcall **)(void *, _QWORD, struct IUnknown *))(*(_QWORD *)v50 + 32LL))(
                      v50,
                      a3,
                      v16) )
          {
            v13 = -2147467260;
            v39 = 2147500036LL;
            v42 = 704LL;
          }
          else
          {
            v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct IShellPositionerPriority *))(*a3)[34])(
                    a3,
                    v45);
            v13 = v21;
            if ( v21 < 0 )
            {
              v42 = 707LL;
            }
            else if ( a2 )
            {
              if ( (_DWORD)v18 != v14 )
              {
                ppvOut = 0LL;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
                v44 = v18;
                v41 = ShellPositionerManager::SendControlLostToPositioner(v40, a3, a4, v14);
                v13 = v41;
                if ( v41 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2CB,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                    (const char *)(unsigned int)v41,
                    v18);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
                  goto LABEL_29;
                }
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppvOut);
              }
              Context[0] = 0LL;
              if ( InitOnceBeginInitialize(
                     &`ShellPositionerTelemetry::Instance'::`2'::wrapper,
                     0,
                     (PBOOL)&ppvOut,
                     Context)
                && (_DWORD)ppvOut )
              {
                Context[0] = &qword_18059A008;
                qword_18059A008 = &IamTraceLogging::`vftable';
                atexit(lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
                DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)&qword_18059A008);
                InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, &qword_18059A008);
              }
              v22 = (_DWORD *)*((_QWORD *)Context[0] + 1);
              if ( v22 && *v22 )
              {
                Context[0] = 0LL;
                if ( InitOnceBeginInitialize(
                       &`ShellPositionerTelemetry::Instance'::`2'::wrapper,
                       0,
                       (PBOOL)&ppvOut,
                       Context)
                  && (_DWORD)ppvOut )
                {
                  Context[0] = &qword_18059A008;
                  qword_18059A008 = &IamTraceLogging::`vftable';
                  atexit(lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
                  DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)&qword_18059A008);
                  InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, &qword_18059A008);
                }
                ShellPositionerTelemetry::PositionViewForActivation_(v28, (__int64)a3, v18);
              }
              v21 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), _QWORD, struct IUnknown *))(*(_QWORD *)v50 + 48LL))(
                      v50,
                      a3,
                      v14,
                      v16);
              v13 = v21;
              if ( v21 >= 0 )
                goto LABEL_28;
              v42 = 743LL;
            }
            else
            {
              v27 = 1;
              if ( v11 )
              {
                (**(void (__fastcall ***)(void *, GUID *, void **))v50)(
                  v50,
                  &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12,
                  &ppvOut);
                if ( ppvOut )
                {
                  v27 = 0;
                  v35 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct IUnknown *, __int64))(*(_QWORD *)ppvOut + 40LL))(
                          ppvOut,
                          a3,
                          v16,
                          a6);
                  v13 = v35;
                  if ( v35 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2DA,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                      (const char *)(unsigned int)v35,
                      (int)v11);
                    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
                    goto LABEL_29;
                  }
                }
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
                if ( !v27 )
                  goto LABEL_28;
              }
              v44 = a7;
              v21 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct IUnknown *, __int64))(*(_QWORD *)v50 + 40LL))(
                      v50,
                      a3,
                      v16,
                      a6);
              v13 = v21;
              if ( v21 >= 0 )
              {
LABEL_28:
                v13 = 0;
                goto LABEL_29;
              }
              v42 = 736LL;
            }
            v39 = (unsigned int)v21;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v42,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)v39,
            v44);
LABEL_29:
          v23 = v50;
          if ( v50 )
          {
            v50 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
          }
          goto LABEL_31;
        }
        v38 = 1322LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v19,
        v44);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B8,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v44);
  }
LABEL_31:
  v24 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_33:
  v25 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v13;
}
