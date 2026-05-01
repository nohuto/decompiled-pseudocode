/*
 * XREFs of ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1802FD200
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18004ACB0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18004AEE0 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18004C2C4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007C6D8 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180082A08 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802F9854 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        int a3)
{
  int *v5; // rdi
  int v6; // eax
  int started; // eax
  int v9[4]; // [rsp+20h] [rbp-178h] BYREF
  char v10; // [rsp+30h] [rbp-168h]
  __int64 v11; // [rsp+38h] [rbp-160h]
  _QWORD v12[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v11 = -2LL;
  v5 = (int *)((char *)this + 64);
  v9[0] = *((_DWORD *)this + 16);
  *(_QWORD *)&v9[2] = this;
  v10 = 1;
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
        CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 296, v12);
        XamlLauncherState::CompleteStartShowTelemetry(
          this,
          a3,
          (struct CommonStartTelemetry::LauncherInvokeActivity *)v12);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
        goto LABEL_17;
      }
      if ( *v5 == 18 || *v5 > 19 && *v5 <= 21 )
      {
LABEL_9:
        *v5 = 0;
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x64F,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v6);
        goto LABEL_11;
      }
    }
  }
LABEL_17:
  v10 = 0;
  StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v9,
    v5);
  return 0LL;
}
