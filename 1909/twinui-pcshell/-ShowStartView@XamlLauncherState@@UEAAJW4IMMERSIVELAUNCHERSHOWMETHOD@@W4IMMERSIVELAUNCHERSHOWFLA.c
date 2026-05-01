/*
 * XREFs of ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F610
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x18031BED0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18031C690 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 * Callees:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180045D2C (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18005EDB8 (-Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005EE68 (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18005F220 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005F414 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005F494 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005F840 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18005F970 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005FA58 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_18005FA58.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x18005FE8C (-ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180080CEC (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18031129C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1803195BC (--$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFL.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18031A0AC (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ @ 0x18031CD94 (-ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x18031D6A4 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x18031DC78 (--0FocusHoldingTank@@QEAA@XZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18031DEE8 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::ShowStartView(__int64 a1, unsigned int a2, int a3)
{
  int v6; // ecx
  int v7; // ecx
  char v8; // r15
  _QWORD *v9; // rax
  bool v10; // si
  __int64 v11; // r8
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, __int64, __int64, _QWORD); // r10
  __int64 v14; // r11
  XamlLauncherState *v15; // rcx
  FocusHoldingTank *v17; // rax
  FocusHoldingTank *v18; // rdi
  int v19; // eax
  int v20; // r15d
  int v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-B0h]
  _QWORD v26[40]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v27[320]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v25 = -2LL;
  LODWORD(v23[0]) = a2;
  v22 = a3;
  if ( *(_BYTE *)(a1 + 952) && !*(_BYTE *)(a1 + 951) && a2 != 14 )
  {
    StartWindowTelemetry::ShowAttemptSkippedDueToIdle();
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 950) )
  {
    *(_WORD *)(a1 + 947) = 0;
    v6 = *(_DWORD *)(a1 + 40);
    LODWORD(v23[0]) = v6;
    v23[1] = a1 - 24;
    LOBYTE(v24) = 1;
    if ( v6 )
    {
      v7 = v6 - 6;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          *(_DWORD *)(a1 + 40) = 4;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 104LL))(*(_QWORD *)(a1 + 64));
        }
        goto LABEL_7;
      }
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread(a1 + 584, v26);
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      v20 = v19;
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1F2,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v19,
          v21);
      if ( *(_DWORD *)v26[6] == 1 )
      {
        XamlLauncherState::CancelCortanaTelemetryTimeout((XamlLauncherState *)(a1 - 24));
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v26,
          v20);
      }
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v26);
    }
    *(_BYTE *)(a1 + 949) = 0;
    *(_DWORD *)(a1 + 40) = XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)(a1 - 24))
                         ? 15
                         : 1;
LABEL_7:
    CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v27);
    v8 = 0;
    if ( **(_DWORD **)(a1 + 320) != 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        v26,
        "LauncherInvokeActivity");
      v26[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
      CommonStartTelemetry::LauncherInvokeActivity::StartActivity((CommonStartTelemetry::LauncherInvokeActivity *)v26);
      CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v27, (__int64)v26);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v26);
      v9 = CommonStartTelemetry::LauncherInvokeActivity::Split((__int64)v27, v26);
      CommonStartTelemetry::LauncherInvokeActivity::operator=(a1 + 272, (__int64)v9);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v26);
      v8 = 1;
    }
    XamlLauncherState::BeginStartTelemetryTimeout((struct _TP_TIMER **)(a1 - 24));
    *(_DWORD *)(a1 + 264) = a2;
    *(_DWORD *)(a1 + 268) = a3;
    v10 = (a3 & 4) != 0;
    LOBYTE(v11) = XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)(a1 - 24));
    LOBYTE(v12) = v10;
    v13(v14, v12, v11, a2);
    if ( !XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)(a1 - 24))
      && (int)XamlLauncherState::ShowSearchWithStart(v15, v10) < 0 )
    {
      *(_BYTE *)(a1 + 944) = 1;
    }
    if ( v8 )
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v27,
        0);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v27);
    LOBYTE(v24) = 0;
    StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v23,
      a1 - 24 + 64);
    return 0LL;
  }
  StartWindowTelemetry::StartShowDelayedDueToReadiness<enum IMMERSIVELAUNCHERSHOWMETHOD const &,enum IMMERSIVELAUNCHERSHOWFLAGS const &>(
    v23,
    &v22);
  *(_DWORD *)(a1 + 992) = a2;
  *(_DWORD *)(a1 + 996) = a3;
  *(_BYTE *)(a1 + 1000) = 1;
  if ( !*(_QWORD *)(a1 + 984) )
  {
    v17 = (FocusHoldingTank *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23[0] = v17;
    if ( v17 )
      v17 = FocusHoldingTank::FocusHoldingTank((LONG_PTR)v17);
    v18 = *(FocusHoldingTank **)(a1 + 984);
    *(_QWORD *)(a1 + 984) = v17;
    if ( v18 )
    {
      FocusHoldingTank::~FocusHoldingTank(v18);
      operator delete(v18, (const struct std::nothrow_t *)0x18);
      v17 = *(FocusHoldingTank **)(a1 + 984);
    }
    if ( v17 && *(_QWORD *)(a1 + 64) )
      Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((char *)v17 + 16);
  }
  return 0LL;
}
