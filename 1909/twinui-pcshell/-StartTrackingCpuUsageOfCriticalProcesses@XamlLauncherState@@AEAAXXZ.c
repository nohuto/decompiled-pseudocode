/*
 * XREFs of ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180049044
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180045D2C (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800490F0 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18004914C (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 */

void __fastcall XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  *((_QWORD *)this + 129) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, (unsigned __int64 *)this + 129);
  *((_QWORD *)this + 130) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, (unsigned __int64 *)this + 130);
  *((_QWORD *)this + 131) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, (unsigned __int64 *)this + 131);
}
