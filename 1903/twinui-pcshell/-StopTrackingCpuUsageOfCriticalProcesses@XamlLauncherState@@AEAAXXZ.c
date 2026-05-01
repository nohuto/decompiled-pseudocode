/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1802FDF44
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1802FCA40 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005004C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800762FC (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18007635C (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800763B8 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x180078868 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x1802F8498 (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x1802F85AC (--$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z @ 0x1802F86C0 (--$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z.c)
 */

void __fastcall XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  int started; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // zf
  const WCHAR *v7; // rax
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  LPCWSTR v14; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( *((_QWORD *)this + 129) )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v11);
    if ( started >= 0 )
    {
      if ( v11 == *((_QWORD *)this + 129) )
      {
        wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService(v4, v3, v5);
        v6 = wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 5;
        v7 = L"startmenuexperiencehost.exe";
        if ( v6 )
          v7 = L"shellexperiencehost.exe";
        v14 = v7;
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const *>(&v14);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A0,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v12 = 0LL;
  if ( *((_QWORD *)this + 130) )
  {
    v8 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v12);
    if ( v8 >= 0 )
    {
      if ( v12 == *((_QWORD *)this + 130) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[13]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A9,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  v13 = 0LL;
  if ( *((_QWORD *)this + 131) )
  {
    v9 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v13);
    if ( v9 >= 0 )
    {
      if ( v13 == *((_QWORD *)this + 131) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9B1,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9);
    }
  }
}
