/*
 * XREFs of ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x1802A4B38
 * Callers:
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802A3FA0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802A4B00 (-OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@She.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1802A5DAC (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180010B30 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180010C2C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180012474 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802A138C (--$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1802A3C24 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?StartBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x1802A57D0 (-StartBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::OnStartFailedToGetForegroundImpl(XamlLauncherState *this)
{
  __int64 v2; // r8
  int *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v9; // [rsp+30h] [rbp-D8h]
  __int64 v10; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  _QWORD v12[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v11 = -2LL;
  StartWindowTelemetry::StartBlockedBySetForegroundFailure();
  v3 = (int *)((char *)this + 64);
  v8[2] = *((_DWORD *)this + 16);
  v9 = this;
  LOBYTE(v10) = 1;
  if ( v8[2] == 15 )
  {
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 288, v12, v2);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v12);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v12);
    *v3 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E4,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
      goto LABEL_9;
    }
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
LABEL_8:
    v5 = 0;
    goto LABEL_9;
  }
  if ( v8[2] != 16 )
    goto LABEL_8;
  *v3 = 17;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
  v5 = v4;
  if ( v4 >= 0 )
    goto LABEL_8;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5EB,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  LOBYTE(v10) = 0;
  StartWindowTelemetry::OnStartFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v8[2],
    v3);
  return v5;
}
