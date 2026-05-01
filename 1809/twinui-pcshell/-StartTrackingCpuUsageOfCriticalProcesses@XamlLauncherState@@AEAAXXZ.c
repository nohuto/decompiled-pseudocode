/*
 * XREFs of ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1800729A4
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180014138 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800729F8 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180072A68 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180072AC0 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 128) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, (unsigned __int64 *)this + 128);
  *((_QWORD *)this + 129) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, (unsigned __int64 *)this + 129);
  *((_QWORD *)this + 130) = 0LL;
  v2 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, (unsigned __int64 *)this + 130);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x959,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v2,
      v3);
}
