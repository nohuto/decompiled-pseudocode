/*
 * XREFs of CrmRegisterToStateMonitor @ 0x18003349C
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180032C50 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmActivityStart @ 0x180033278 (CrmActivityStart.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180040440 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180043128 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x1800431C4 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004334C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800433B0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800434BC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180043520 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180070B8C (CrmStateMonitorCompositeTestStart.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorListenerAdd @ 0x1800335A0 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 *     CrmStateMonitorInitialize @ 0x180045C48 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x180046B3C (CrmStateMonitorSizeGet.c)
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // ebx
  int v7; // edi
  unsigned int v9; // eax
  PVOID Heap; // rax
  void *v11; // rbx

  v3 = a2;
  RtlAcquireSRWLockShared(CrmGlobals);
  v4 = CrmGlobals[v3 + 2];
  v5 = v3;
  if ( v4 )
  {
    v6 = 1;
    CrmStateMonitorListenerAdd(v4, a1);
  }
  else
  {
    v6 = 0;
  }
  RtlReleaseSRWLockShared(CrmGlobals);
  if ( v6 )
  {
    return 0;
  }
  else
  {
    v9 = CrmStateMonitorSizeGet((unsigned int)v3);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    v11 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    CrmStateMonitorInitialize(Heap, (unsigned int)v3);
    v7 = CrmStateMonitorStart(v11);
    if ( v7 >= 0 )
    {
      RtlAcquireSRWLockExclusive(CrmGlobals);
      LODWORD(qword_18009BB68) = GetCurrentThreadId();
      if ( !CrmGlobals[v5 + 2] )
      {
        CrmGlobals[v5 + 2] = (__int64)v11;
        LODWORD(qword_18009BB68) = 0;
        RtlReleaseSRWLockExclusive(CrmGlobals);
        return (unsigned int)v7;
      }
      CrmStateMonitorListenerRemove((char *)v11, a1, 1);
      v11 = 0LL;
      CrmStateMonitorListenerAdd(CrmGlobals[v5 + 2], a1);
      LODWORD(qword_18009BB68) = 0;
      RtlReleaseSRWLockExclusive(CrmGlobals);
      v7 = 0;
    }
    if ( v11 )
    {
      CrmStateMonitorCleanup(v11);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
  }
  return (unsigned int)v7;
}
