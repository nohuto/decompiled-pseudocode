/*
 * XREFs of CrmStateMonitorCleanup @ 0x180070970
 * Callers:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorSystemDiskUsageCleanup @ 0x18007090C (CrmStateMonitorSystemDiskUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x180070B3C (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x180070BE0 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x180070C30 (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x180070CF4 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x180070D98 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x180070DE8 (CrmStateMonitorTestCleanup.c)
 */

char __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  if ( *(int *)a1 > 18 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0x13:
        CrmStateMonitorPostShellReadyCleanup();
        return CrmLogStateMonitorStop((int *)a1);
      case 0x14:
        CrmStateMonitorPostResumeCleanup();
        return CrmLogStateMonitorStop((int *)a1);
      case 0x15:
        CrmStateMonitorPowerConstrainedCleanup();
        return CrmLogStateMonitorStop((int *)a1);
    }
    if ( *(int *)a1 > 21 )
    {
      if ( *(int *)a1 <= 23 )
      {
LABEL_11:
        v2 = *(_QWORD *)(a1 + 72);
        if ( v2 )
          RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
        return CrmLogStateMonitorStop((int *)a1);
      }
      if ( *(_DWORD *)a1 == 24 || *(_DWORD *)a1 == 25 )
      {
        CrmStateMonitorSystemDiskUsageCleanup(a1);
      }
      else if ( *(_DWORD *)a1 == 26 )
      {
        CrmStateMonitorCsAcDcCleanup();
      }
    }
  }
  else if ( *(_DWORD *)a1 == 18 )
  {
    v5 = *(void **)(a1 + 64);
    if ( v5 )
      CancelMibChangeNotify2(v5);
    v6 = *(void **)(a1 + 72);
    if ( v6 )
      CancelMibChangeNotify2(v6);
  }
  else if ( *(int *)a1 > 10 )
  {
    if ( *(_DWORD *)a1 != 11 && *(_DWORD *)a1 != 12 )
    {
      if ( *(int *)a1 <= 12 || *(int *)a1 > 17 )
        return CrmLogStateMonitorStop((int *)a1);
      goto LABEL_11;
    }
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      TpSetTimer(v4, 0LL, 0LL, 0LL);
      TpWaitForTimer(*(_QWORD *)(a1 + 72), 1LL);
      TpReleaseTimer(*(_QWORD *)(a1 + 72));
    }
  }
  else if ( *(_DWORD *)a1 != 10 && *(int *)a1 >= 0 )
  {
    if ( *(int *)a1 <= 1 )
    {
      CrmStateMonitorTestCleanup();
      return CrmLogStateMonitorStop((int *)a1);
    }
    if ( *(_DWORD *)a1 == 2 )
    {
      CrmStateMonitorCompositeTestCleanup();
      return CrmLogStateMonitorStop((int *)a1);
    }
    if ( *(int *)a1 > 2 )
    {
      if ( *(int *)a1 > 8 )
      {
        if ( *(_DWORD *)a1 != 9 )
          return CrmLogStateMonitorStop((int *)a1);
        goto LABEL_11;
      }
      v3 = *(void **)(a1 + 64);
      if ( v3 )
        PowerSettingUnregisterNotification(v3);
    }
  }
  return CrmLogStateMonitorStop((int *)a1);
}
