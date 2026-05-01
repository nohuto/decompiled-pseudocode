/*
 * XREFs of ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18005EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D688 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18005EE30 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005F494 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005F840 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x18005FF50 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18005FFD8 (-ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shel.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180060088 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007EA58 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800834D8 (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18031129C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18031A0AC (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x18031D6A4 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnCortanaShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  int *v5; // r14
  __int64 v6; // r8
  int v7; // r15d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v25; // [rsp+60h] [rbp-A8h]
  _BYTE v26[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v23 = -2LL;
  v5 = (int *)((char *)this + 64);
  v20[2] = *((_DWORD *)this + 16);
  v21 = this;
  LOBYTE(v22) = 1;
  XamlLauncherState::CancelCortanaReadinessCutoff(this);
  if ( *v5 == 1 )
    goto LABEL_26;
  if ( *v5 != 2 )
  {
    if ( *v5 == 6 )
    {
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((char *)this + 608, v26);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
      v14 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6A5,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v13,
          v20[2]);
      *v5 = 7;
      v15 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      v16 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6A7,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v15,
          v20[2]);
      if ( v14 < 0 )
        v16 = v14;
      XamlLauncherState::PostCortanaOrSearchVisibility(this, 1, *((HMONITOR *)this + 123));
      XamlLauncherState::CancelCortanaTelemetryTimeout(this);
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v26,
        v16);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v26);
      goto LABEL_11;
    }
    if ( *v5 != 18 )
    {
      if ( *v5 != 19 )
        goto LABEL_11;
      goto LABEL_3;
    }
LABEL_26:
    v18 = 3;
    if ( *v5 != 1 )
      v18 = 20;
    *v5 = v18;
    v19 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x689,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v19,
        v20[2]);
    goto LABEL_11;
  }
LABEL_3:
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((char *)this + 296, v26, v6);
  v7 = *v5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x692,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v8,
      v20[2]);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x693,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v9,
      v20[2]);
  *v5 = 5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  v10 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x696,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v10,
      v20[2]);
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 1, *((HMONITOR *)this + 123));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v26);
  if ( v7 == 19 )
  {
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=AppTransition",
      0x18u,
      0x17u);
    v17 = XamlLauncherState::ShowCortanaFromOpenStart(this, v25);
    v11 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69B,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v17,
        v20[2]);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v26);
      goto LABEL_12;
    }
  }
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v26);
LABEL_11:
  v11 = 0;
LABEL_12:
  LOBYTE(v22) = 0;
  StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v20[2],
    v5);
  return v11;
}
