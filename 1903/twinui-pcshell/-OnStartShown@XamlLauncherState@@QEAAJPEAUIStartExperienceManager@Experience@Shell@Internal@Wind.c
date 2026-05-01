/*
 * XREFs of ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18007AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18004AEE0 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18004B010 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18004C2C4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180051A18 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180079780 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x1800798B8 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x18007ACD8 (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007C6D8 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18007E83C (--$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Int.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x180082378 (-ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1802FE24C (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnStartShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rdi
  int v5; // ecx
  int v6; // eax
  XamlLauncherState *v7; // rcx
  unsigned int v8; // ebx
  bool v10; // r14
  bool v11; // si
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  XamlLauncherState *v16; // rcx
  int v17; // eax
  int v18[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v19; // [rsp+30h] [rbp-D8h]
  __int64 v20; // [rsp+38h] [rbp-D0h]
  __int64 v21; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v23; // [rsp+60h] [rbp-A8h]
  _QWORD v24[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v21 = -2LL;
  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v18[2] = v5;
  v19 = this;
  LOBYTE(v20) = 1;
  v6 = 2;
  if ( v5 == 1 )
    goto LABEL_2;
  if ( v5 <= 2 )
    goto LABEL_28;
  if ( v5 <= 4 )
  {
LABEL_13:
    v10 = (unsigned int)(v5 - 20) <= 1;
    v11 = v5 == 3 || v5 == 20;
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 296, v24);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x546,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x547,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v13);
    *v4 = 5;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
    if ( v11 )
      XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 123));
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v24);
    if ( v10 )
    {
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"StartMode=AppTransition",
        0x18u,
        0x17u);
      v15 = XamlLauncherState::ShowCortanaFromOpenStart(this, v23);
      v8 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x551,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v15);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v24);
        goto LABEL_10;
      }
    }
    goto LABEL_23;
  }
  if ( v5 != 15 )
  {
    if ( v5 == 18 )
    {
LABEL_2:
      if ( v5 != 1 )
        v6 = 19;
      *v4 = v6;
      if ( !*((_BYTE *)this + 968) || XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this) )
      {
        if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
          || *((_BYTE *)this + 971)
          || *((_BYTE *)this + 972) )
        {
          XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
        }
        else
        {
          XamlLauncherState::BeginCortanaReadinessCutoff(v7);
        }
      }
      else
      {
        *((_BYTE *)this + 968) = 0;
        XamlLauncherState::BeginCortanaReadinessCutoff(v16);
        v17 = XamlLauncherState::ShowSearchWithStart(this, (*((_DWORD *)this + 73) & 4) != 0);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x524,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v17);
      }
      goto LABEL_9;
    }
    if ( v5 > 19 && v5 <= 21 )
      goto LABEL_13;
LABEL_28:
    *((_BYTE *)this + 973) = 1;
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    *v4 = 0;
    goto LABEL_9;
  }
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 296, v24);
  *v4 = 16;
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x535,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v14);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v24);
LABEL_23:
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v24);
LABEL_9:
  v8 = 0;
LABEL_10:
  LOBYTE(v20) = 0;
  StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v18[2],
    v4);
  return v8;
}
