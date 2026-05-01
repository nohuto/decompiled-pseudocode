/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18031C250
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18005EE30 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005F840 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18005F970 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18007D100 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007EA58 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318918 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x18031D2DC (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rsi
  int v5; // edi
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-E0h] BYREF
  int v11; // [rsp+30h] [rbp-D8h] BYREF
  XamlLauncherState *v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h]
  __int64 v14; // [rsp+48h] [rbp-C0h]
  _QWORD v15[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v14 = -2LL;
  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v11 = v5;
  v12 = this;
  LOBYTE(v13) = 1;
  if ( !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
LABEL_19:
        *v4 = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
        goto LABEL_20;
      }
      if ( v5 <= 2 )
        goto LABEL_20;
      if ( v5 > 4 )
      {
        if ( v5 == 18 || v5 == 20 )
          goto LABEL_19;
        if ( v5 != 21 )
          goto LABEL_20;
      }
    }
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 296, v15, v6);
    XamlLauncherState::CompleteStartShowTelemetry(
      this,
      -2147467260,
      (struct CommonStartTelemetry::LauncherInvokeActivity *)v15);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v15);
    goto LABEL_19;
  }
  StartWindowTelemetry::StartViewDestroyedWhileVisible();
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
  if ( !XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
    && !*((_BYTE *)this + 971)
    && !*((_BYTE *)this + 972) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5CD,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
  }
  *v4 = 0;
  v8 = *((_QWORD *)this + 13);
  if ( v8 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v10) >= 0 && v10 )
    *((_BYTE *)this + 975) = 1;
LABEL_20:
  LOBYTE(v13) = 0;
  StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v11,
    v4);
  return 0LL;
}
