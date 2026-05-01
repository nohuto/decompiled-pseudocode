/*
 * XREFs of CrmStateMonitorCPUUsageTimerCallback @ 0x180004190
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x180004428 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x1800045F0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorCPUUsageTimerCallback(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int *i; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v11[64]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 SystemInformation[44]; // [rsp+78h] [rbp-90h] BYREF

  NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x158u, 0LL);
  RtlQueryUnbiasedInterruptTime(&v10);
  v3 = v10 - *((_QWORD *)a2 + 13);
  if ( v10 == *((_QWORD *)a2 + 13) )
  {
    LODWORD(v6) = 100;
  }
  else
  {
    v4 = (SystemInformation[0] - *((_QWORD *)a2 + 14)) / (unsigned __int64)*((char *)a2 + 96);
    v5 = v3 - v4;
    if ( v3 < v4 )
      v5 = 0LL;
    v6 = 100 * v5 / v3;
  }
  LODWORD(v9) = v6;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a2, v11, &v9);
  **((_DWORD **)a2 + 5) = v9;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, __int64 *))i - 1))(i - 2, *a2, &v9);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v11);
  *((_QWORD *)a2 + 14) = SystemInformation[0];
  result = v10;
  *((_QWORD *)a2 + 13) = v10;
  return result;
}
