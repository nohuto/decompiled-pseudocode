/*
 * XREFs of ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18031C690
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18005EE30 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F610 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005F840 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007EA58 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180085638 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318CE4 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        int a3)
{
  int *v5; // rdi
  __int64 v6; // r8
  int v7; // eax
  int started; // eax
  int v10[4]; // [rsp+20h] [rbp-178h] BYREF
  char v11; // [rsp+30h] [rbp-168h]
  __int64 v12; // [rsp+38h] [rbp-160h]
  _QWORD v13[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v12 = -2LL;
  v5 = (int *)((char *)this + 64);
  v10[0] = *((_DWORD *)this + 16);
  *(_QWORD *)&v10[2] = this;
  v11 = 1;
  if ( a3 >= 0 )
  {
    if ( *((_BYTE *)this + 975) )
    {
      started = XamlLauncherState::ShowStartView((__int64)this + 24, 1u, 4);
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x676,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)started);
      *((_BYTE *)this + 975) = 0;
    }
  }
  else
  {
    SetExistingEvent(L"ShellStartReadyEvent");
    if ( *v5 == 1 )
      goto LABEL_9;
    if ( *v5 > 2 )
    {
      if ( *v5 <= 4 )
        goto LABEL_9;
      if ( *v5 == 15 )
      {
        *v5 = 0;
LABEL_11:
        CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 296, v13, v6);
        XamlLauncherState::CompleteStartShowTelemetry(
          this,
          a3,
          (struct CommonStartTelemetry::LauncherInvokeActivity *)v13);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
        goto LABEL_17;
      }
      if ( *v5 == 18 || *v5 > 19 && *v5 <= 21 )
      {
LABEL_9:
        *v5 = 0;
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x64F,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v7);
        goto LABEL_11;
      }
    }
  }
LABEL_17:
  v11 = 0;
  StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v10,
    v5);
  return 0LL;
}
