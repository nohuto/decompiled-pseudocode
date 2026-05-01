/*
 * XREFs of CrmStateMonitorInitialize @ 0x180004B98
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 * Callees:
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(int *a1, int a2))()
{
  __int64 (__fastcall *result)(); // rax
  __int64 (__fastcall *v5)(); // rcx
  int v6; // esi
  int v7; // esi
  int v8; // esi
  __int64 (__fastcall *v9)(); // rcx

  memset_0(a1, 0, 0x38uLL);
  RtlInitializeSRWLock(a1 + 2);
  result = (__int64 (__fastcall *)())(a1 + 6);
  a1[4] = 0;
  *a1 = a2;
  *((_QWORD *)a1 + 4) = a1 + 6;
  *((_QWORD *)a1 + 3) = a1 + 6;
  if ( a2 > 21 )
  {
    if ( a2 > 28 )
    {
      v6 = a2 - 29;
      if ( !v6 )
      {
        *((_QWORD *)a1 + 7) = 0LL;
        *((_QWORD *)a1 + 11) = 0LL;
        *((_QWORD *)a1 + 12) = 0LL;
        *((_QWORD *)a1 + 13) = 0LL;
        *((_QWORD *)a1 + 9) = 0LL;
        *((_QWORD *)a1 + 10) = 0LL;
        *((_QWORD *)a1 + 10) = a1 + 18;
        *((_QWORD *)a1 + 9) = a1 + 18;
        result = (__int64 (__fastcall *)())CrmStateMonitorGPUUsageCSCallback;
        goto LABEL_10;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
LABEL_20:
        result = 0LL;
        *((_QWORD *)a1 + 7) = 0LL;
        *((_QWORD *)a1 + 8) = 0LL;
        *((_QWORD *)a1 + 9) = 0LL;
        return result;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          goto LABEL_20;
        return result;
      }
      *((_QWORD *)a1 + 7) = 0LL;
      v5 = CrmStateMonitorDisconnectedStandbyCallback;
      *((_QWORD *)a1 + 14) = 0LL;
    }
    else
    {
      if ( a2 == 28 )
        return result;
      if ( a2 <= 23 )
        goto LABEL_20;
      if ( a2 == 24 )
      {
        memset_0(a1 + 14, 0, 0x40uLL);
        *((_QWORD *)a1 + 10) = a1 + 18;
        *((_QWORD *)a1 + 9) = a1 + 18;
        result = CrmStateMonitorCPUUsageCSCallback;
        goto LABEL_10;
      }
      if ( a2 == 25 )
      {
        memset_0(a1 + 14, 0, 0x40uLL);
        *((_QWORD *)a1 + 10) = a1 + 18;
        *((_QWORD *)a1 + 9) = a1 + 18;
        result = CrmStateMonitorSystemDiskUsageCSCallback;
        goto LABEL_10;
      }
      if ( a2 != 26 )
      {
        *((_QWORD *)a1 + 7) = 0LL;
        *((_QWORD *)a1 + 11) = 0LL;
        *((_QWORD *)a1 + 9) = 0LL;
        *((_QWORD *)a1 + 10) = 0LL;
        *((_QWORD *)a1 + 10) = a1 + 18;
        *((_QWORD *)a1 + 9) = a1 + 18;
        result = CrmStateMonitorDelayedAcCallback;
        goto LABEL_10;
      }
      *((_QWORD *)a1 + 7) = 0LL;
      v5 = CrmStateMonitorCsAcDcCallback;
    }
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 9) = a1 + 18;
    *((_QWORD *)a1 + 10) = a1 + 18;
    result = (__int64 (__fastcall *)())(a1 + 24);
    *((_QWORD *)a1 + 8) = v5;
    *((_QWORD *)a1 + 12) = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_QWORD *)a1 + 13) = a1 + 24;
    *((_QWORD *)a1 + 12) = a1 + 24;
    *((_QWORD *)a1 + 11) = v5;
    return result;
  }
  if ( a2 == 21 )
  {
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 8) = 0LL;
    v9 = CrmStateMonitorPowerConstrainedCallback;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 11) = a1 + 20;
    *((_QWORD *)a1 + 10) = a1 + 20;
    *((_QWORD *)a1 + 9) = CrmStateMonitorPowerConstrainedCallback;
    goto LABEL_32;
  }
  if ( a2 <= 11 )
  {
    if ( a2 == 11 )
      goto LABEL_20;
    if ( a2 < 0 )
      return result;
    if ( a2 <= 1 )
    {
      *((_QWORD *)a1 + 7) = 0LL;
      *((_QWORD *)a1 + 8) = 0LL;
      return result;
    }
    if ( a2 != 2 )
    {
      if ( a2 <= 8 )
      {
        result = 0LL;
        *((_QWORD *)a1 + 7) = 0LL;
LABEL_10:
        *((_QWORD *)a1 + 8) = result;
        return result;
      }
      if ( a2 != 9 )
      {
        result = 0LL;
        *((_QWORD *)a1 + 7) = 0LL;
        return result;
      }
      goto LABEL_20;
    }
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    v9 = CrmStateMonitorCompositeTestCallback;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 10) = a1 + 18;
    *((_QWORD *)a1 + 9) = a1 + 18;
    *((_QWORD *)a1 + 8) = CrmStateMonitorCompositeTestCallback;
LABEL_32:
    *((_QWORD *)a1 + 13) = 0LL;
    result = (__int64 (__fastcall *)())(a1 + 26);
    *((_QWORD *)a1 + 14) = 0LL;
    *((_QWORD *)a1 + 14) = a1 + 26;
    *((_QWORD *)a1 + 13) = a1 + 26;
    *((_QWORD *)a1 + 12) = v9;
    return result;
  }
  if ( a2 <= 18 )
    goto LABEL_20;
  if ( a2 == 19 )
  {
    memset_0(a1 + 14, 0, 0x80uLL);
    *((_QWORD *)a1 + 10) = a1 + 18;
    *((_QWORD *)a1 + 9) = a1 + 18;
    *((_QWORD *)a1 + 8) = CrmStateMonitorPostShellReadyTimeSinceLogonCallback;
    *((_QWORD *)a1 + 12) = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_QWORD *)a1 + 13) = a1 + 24;
    *((_QWORD *)a1 + 12) = a1 + 24;
    result = (__int64 (__fastcall *)())(a1 + 30);
    *((_QWORD *)a1 + 11) = CrmStateMonitorPostShellReadyUsageCallback;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_QWORD *)a1 + 16) = 0LL;
    *((_QWORD *)a1 + 16) = a1 + 30;
    *((_QWORD *)a1 + 15) = a1 + 30;
    *((_QWORD *)a1 + 14) = CrmStateMonitorPostShellReadyUsageCallback;
  }
  else
  {
    memset_0(a1 + 14, 0, 0x88uLL);
    *((_QWORD *)a1 + 10) = a1 + 18;
    *((_QWORD *)a1 + 9) = a1 + 18;
    *((_QWORD *)a1 + 8) = CrmStateMonitorPostResumeSuspendCallback;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_QWORD *)a1 + 14) = 0LL;
    *((_QWORD *)a1 + 14) = a1 + 26;
    *((_QWORD *)a1 + 13) = a1 + 26;
    result = (__int64 (__fastcall *)())(a1 + 32);
    *((_QWORD *)a1 + 12) = CrmStateMonitorPostResumeUsageCallback;
    *((_QWORD *)a1 + 16) = 0LL;
    *((_QWORD *)a1 + 17) = 0LL;
    *((_QWORD *)a1 + 17) = a1 + 32;
    *((_QWORD *)a1 + 16) = a1 + 32;
    *((_QWORD *)a1 + 15) = CrmStateMonitorPostResumeUsageCallback;
  }
  return result;
}
