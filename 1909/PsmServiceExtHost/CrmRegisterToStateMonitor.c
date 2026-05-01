/*
 * XREFs of CrmRegisterToStateMonitor @ 0x180003980
 * Callers:
 *     CrmStateMonitorGPUUsageStart @ 0x1800034F0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x1800035F0 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180041530 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180046460 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180046DB8 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180046FA4 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180047010 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180047074 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180047120 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180047184 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x1800471E8 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18007E3DC (CrmStateMonitorCompositeTestStart.c)
 * Callees:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 *     CrmStateMonitorListenerAdd @ 0x180004968 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorInitialize @ 0x180004B98 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x180004EE0 (CrmStateMonitorSizeGet.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v8; // eax
  PVOID Heap; // rax
  void *v10; // rbx

  v3 = a2;
  RtlAcquireSRWLockShared(CrmGlobals);
  v4 = CrmGlobals[v3 + 2];
  v5 = v3;
  if ( v4 )
  {
    CrmStateMonitorListenerAdd(v4, a1, 2LL);
    return 0;
  }
  else
  {
    RtlReleaseSRWLockShared(CrmGlobals);
    v8 = CrmStateMonitorSizeGet((unsigned int)v3);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v10 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    CrmStateMonitorInitialize(Heap, (unsigned int)v3);
    v6 = CrmStateMonitorStart(v10);
    if ( v6 >= 0 )
    {
      RtlAcquireSRWLockExclusive(CrmGlobals);
      LODWORD(qword_1800ABE08) = GetCurrentThreadId();
      if ( !CrmGlobals[v5 + 2] )
      {
        CrmGlobals[v5 + 2] = (__int64)v10;
        LODWORD(qword_1800ABE08) = 0;
        RtlReleaseSRWLockExclusive(CrmGlobals);
        return (unsigned int)v6;
      }
      CrmStateMonitorListenerRemove(v10);
      v10 = 0LL;
      CrmStateMonitorListenerAdd(CrmGlobals[v5 + 2], a1, 1LL);
      v6 = 0;
    }
    if ( v10 )
    {
      CrmStateMonitorCleanup((__int64)v10);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return (unsigned int)v6;
}
