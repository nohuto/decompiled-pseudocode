/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1802FC900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18004B010 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x1800798B8 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180082A08 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802F90BC (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x1802FA010 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1802FE24C (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        int a3)
{
  int *v4; // rdi
  char v5; // al
  XamlLauncherState *v6; // rcx
  char v7; // r8
  int v9; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = (int *)((char *)this + 64);
  v9 = *((_DWORD *)this + 16);
  v10 = this;
  v11 = 1;
  v12 = a3;
  v5 = 0;
  if ( a3 == -2147009295 || a3 == -2144927148 )
    v5 = 1;
  *((_BYTE *)this + 969) = v5;
  *((_BYTE *)this + 971) = a3 < 0;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this) || v7 )
  {
    XamlLauncherState::CancelCortanaReadinessCutoff(v6);
    SetExistingEvent(L"ShellSearchReadyEvent");
    StartWindowTelemetry::StartRunningWithoutCortana<long>((__int64)&v12);
    if ( *v4 == 2 || *v4 == 19 )
    {
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *v4 == 6 )
    {
      *v4 = 0;
    }
  }
  v11 = 0;
  StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v9,
    v4);
  return 0LL;
}
