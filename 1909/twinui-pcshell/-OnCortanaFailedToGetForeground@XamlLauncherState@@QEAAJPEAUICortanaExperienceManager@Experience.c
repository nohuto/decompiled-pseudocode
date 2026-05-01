/*
 * XREFs of ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18031BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18005EE30 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005F494 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005F840 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180060088 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007EA58 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18031129C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318408 (--$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTele.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18031A0AC (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?CortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x18031A128 (-CortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18031B494 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?StartAndCortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x18031CFF4 (-StartAndCortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x18031D6A4 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaFailedToGetForeground(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rsi
  __int64 v5; // r8
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  int v10[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v11; // [rsp+30h] [rbp-D8h]
  __int64 v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h]
  _QWORD v14[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v13 = -2LL;
  v4 = (int *)((char *)this + 64);
  v10[2] = *((_DWORD *)this + 16);
  v11 = this;
  LOBYTE(v12) = 1;
  if ( v10[2] <= 0 )
    goto LABEL_15;
  if ( v10[2] <= 2 )
  {
LABEL_6:
    StartWindowTelemetry::StartAndCortanaBlockedBySetForegroundFailure();
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 296, v14, v5);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v14);
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v14);
    *v4 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1973LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v14);
      goto LABEL_16;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1974LL;
      goto LABEL_13;
    }
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v14);
LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  if ( v10[2] != 6 )
  {
    if ( v10[2] <= 17 || v10[2] > 19 )
      goto LABEL_15;
    goto LABEL_6;
  }
  StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((char *)this + 608, v14);
  StartWindowTelemetry::CortanaBlockedBySetForegroundFailure();
  *v4 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
  XamlLauncherState::CancelCortanaTelemetryTimeout(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v14,
    v7);
  if ( v7 >= 0 )
  {
    StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v14);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7A3,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v7);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v14);
LABEL_16:
  LOBYTE(v12) = 0;
  StartWindowTelemetry::OnCortanaFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v10[2],
    v4);
  return (unsigned int)v7;
}
