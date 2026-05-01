/*
 * XREFs of ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18004914C
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180049044 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18031D3D4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x1800491A8 (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedByCortana(XamlLauncherState *this, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  int CpuCyclesUsedByWindow; // eax
  HWND v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 11);
  v7 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 408LL))(v4, &v7);
  if ( (int)result >= 0 )
  {
    CpuCyclesUsedByWindow = QueryCpuCyclesUsedByWindow(v7, a2);
    if ( CpuCyclesUsedByWindow < 0 )
      return (unsigned int)CpuCyclesUsedByWindow;
    return v2;
  }
  return result;
}
