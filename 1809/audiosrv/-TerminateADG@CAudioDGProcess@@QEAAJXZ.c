/*
 * XREFs of ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18012E84C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800B3100 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180007748 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012E540 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::TerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v2; // edi

  v1 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  CAudioDGProcess::CancelADGTerminationTimer(v1);
  v2 = CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)v1);
  if ( v1 )
    LeaveCriticalSection(v1);
  return v2;
}
