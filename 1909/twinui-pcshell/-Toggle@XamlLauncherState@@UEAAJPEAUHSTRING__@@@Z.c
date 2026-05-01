/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18031D500
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x18004BE14 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D610 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D688 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18005F970 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1801DAE34 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180319700 (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180319F34 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x18031B6B0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int MainViewMode; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+28h] [rbp-20h] BYREF
  char *v11; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v14; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 944) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v10 = *((_DWORD *)this + 8);
  v11 = (char *)this - 32;
  v12 = 1;
  if ( !v10 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *(_WORD *)((char *)this + 939) = 0;
    *((_BYTE *)this + 941) = 0;
    *((_DWORD *)this + 8) = 6;
    goto LABEL_26;
  }
  if ( v10 == 5 )
  {
    v14 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 152LL))(*((_QWORD *)this + 7), &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1023LL;
      goto LABEL_17;
    }
    if ( v14 )
    {
      XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this - 8));
      goto LABEL_20;
    }
    v9 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
LABEL_23:
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v10 != 7 )
  {
LABEL_20:
    v7 = 0;
    goto LABEL_21;
  }
  MainViewMode = 0;
  if ( IsSearchAndCortanaSplitEnabled() )
    MainViewMode = Cortana::ViewModeHelpers::GetMainViewMode(a2);
  if ( *((_DWORD *)this + 258) != MainViewMode )
  {
LABEL_26:
    v9 = XamlLauncherState::ShowSearchOrCortana((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_23;
  }
  *((_DWORD *)this + 8) = 8;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_20;
  v8 = 1015LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v6);
LABEL_21:
  v12 = 0;
  StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v10,
    (int *)this + 8);
  return v7;
}
