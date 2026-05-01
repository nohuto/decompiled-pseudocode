/*
 * XREFs of CrmStateMonitorInitialize @ 0x180045C48
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorPostResumeInitialize @ 0x180045EC8 (CrmStateMonitorPostResumeInitialize.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(_QWORD *a1, int a2))()
{
  __int64 (__fastcall *result)(); // rax
  __int64 (__fastcall *v5)(); // rcx

  memset_0(a1, 0, 0x38uLL);
  a1[1] = 0LL;
  a1[2] = 0LL;
  RtlInitializeSRWLock(a1 + 1);
  result = (__int64 (__fastcall *)())(a1 + 3);
  *((_DWORD *)a1 + 4) = 0;
  *(_DWORD *)a1 = a2;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  if ( a2 > 18 )
  {
    switch ( a2 )
    {
      case 19:
        memset_0(a1 + 7, 0, 0x80uLL);
        a1[9] = 0LL;
        a1[10] = 0LL;
        a1[10] = a1 + 9;
        a1[9] = a1 + 9;
        a1[8] = CrmStateMonitorPostShellReadyTimeSinceLogonCallback;
        a1[12] = 0LL;
        a1[13] = 0LL;
        a1[13] = a1 + 12;
        a1[12] = a1 + 12;
        a1[11] = CrmStateMonitorPostShellReadyUsageCallback;
        a1[15] = 0LL;
        a1[16] = 0LL;
        result = (__int64 (__fastcall *)())(a1 + 15);
        a1[16] = a1 + 15;
        a1[15] = a1 + 15;
        a1[14] = CrmStateMonitorPostShellReadyUsageCallback;
        return result;
      case 20:
        return (__int64 (__fastcall *)())CrmStateMonitorPostResumeInitialize(a1);
      case 21:
        memset_0(a1 + 7, 0, 0x40uLL);
        v5 = CrmStateMonitorPowerConstrainedCallback;
        a1[10] = 0LL;
        a1[11] = 0LL;
        a1[11] = a1 + 10;
        a1[10] = a1 + 10;
        a1[9] = CrmStateMonitorPowerConstrainedCallback;
        goto LABEL_22;
    }
    if ( a2 > 23 )
    {
      switch ( a2 )
      {
        case 24:
          memset_0(a1 + 7, 0, 0x40uLL);
          a1[9] = 0LL;
          a1[10] = 0LL;
          a1[10] = a1 + 9;
          a1[9] = a1 + 9;
          result = CrmStateMonitorCPUUsageCSCallback;
          goto LABEL_9;
        case 25:
          memset_0(a1 + 7, 0, 0x40uLL);
          a1[9] = 0LL;
          a1[10] = 0LL;
          a1[10] = a1 + 9;
          a1[9] = a1 + 9;
          result = CrmStateMonitorSystemDiskUsageCSCallback;
          goto LABEL_9;
        case 26:
          memset_0(a1 + 7, 0, 0x38uLL);
          a1[9] = 0LL;
          a1[10] = 0LL;
          a1[10] = a1 + 9;
          a1[9] = a1 + 9;
          a1[8] = CrmStateMonitorCsAcDcCallback;
          a1[12] = 0LL;
          a1[13] = 0LL;
          result = (__int64 (__fastcall *)())(a1 + 12);
          a1[13] = a1 + 12;
          a1[12] = a1 + 12;
          a1[11] = CrmStateMonitorCsAcDcCallback;
          break;
      }
      return result;
    }
LABEL_10:
    result = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
    a1[9] = 0LL;
    return result;
  }
  if ( a2 > 10 )
    goto LABEL_10;
  if ( a2 == 10 )
  {
    result = 0LL;
    a1[7] = 0LL;
    return result;
  }
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      a1[7] = 0LL;
      a1[8] = 0LL;
      return result;
    }
    if ( a2 != 2 )
    {
      if ( a2 <= 8 )
      {
        result = 0LL;
        a1[7] = 0LL;
LABEL_9:
        a1[8] = result;
        return result;
      }
      goto LABEL_10;
    }
    memset_0(a1 + 7, 0, 0x48uLL);
    v5 = CrmStateMonitorCompositeTestCallback;
    a1[9] = 0LL;
    a1[10] = 0LL;
    a1[10] = a1 + 9;
    a1[9] = a1 + 9;
    a1[8] = CrmStateMonitorCompositeTestCallback;
LABEL_22:
    a1[13] = 0LL;
    a1[14] = 0LL;
    result = (__int64 (__fastcall *)())(a1 + 13);
    a1[14] = a1 + 13;
    a1[13] = a1 + 13;
    a1[12] = v5;
  }
  return result;
}
