/*
 * XREFs of CrmStateMonitorStateSet @ 0x180032410
 * Callers:
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x180031CB4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180031F30 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180031FF0 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180032060 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18003216C (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18003ECB0 (CrmStateMonitorPostResumeUsageCallback.c)
 *     PsmCrmSuspendNotification @ 0x18003EF50 (PsmCrmSuspendNotification.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003F044 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorSebCallback @ 0x18003FDE0 (CrmStateMonitorSebCallback.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x1800403B0 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x180040520 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180047200 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x1800474F0 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorWNFCallback @ 0x1800476B0 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x180047800 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x1800478C0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x180070AE0 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x180070EE0 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x180032764 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x180032A34 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-68h] BYREF

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
