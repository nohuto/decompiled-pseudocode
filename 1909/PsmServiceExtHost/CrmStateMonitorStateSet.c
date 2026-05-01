/*
 * XREFs of CrmStateMonitorStateSet @ 0x1800040C8
 * Callers:
 *     CrmStateMonitorGPUUsageCSCallback @ 0x180003560 (CrmStateMonitorGPUUsageCSCallback.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x1800036B4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180003800 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorSebCallback @ 0x1800038C0 (CrmStateMonitorSebCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180003920 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180003D50 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x180004020 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18003F800 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmSuspendNotification @ 0x18003FA10 (CrmSuspendNotification.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003FC2C (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x1800405A4 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180041060 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x180041670 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180045CD0 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x1800463A0 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x1800466C0 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorWNFCallback @ 0x180046A60 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x180046D00 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x180046E60 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x180047300 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x18007E330 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x18007E4F0 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x18007E810 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x180004428 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x1800045F0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rbx
  _BYTE v10[56]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 1);
    *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  }
  CrmStateMonitorLogDataGet(a1, v10, a2);
  memcpy_0(a1[5], a2, a3);
  for ( i = (unsigned int *)a1[3]; i != (unsigned int *)(a1 + 3); i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *(unsigned int *)a1, a2);
  if ( !a4 )
  {
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
  }
  return CrmLogStateMonitorStateSet(a1, v10);
}
