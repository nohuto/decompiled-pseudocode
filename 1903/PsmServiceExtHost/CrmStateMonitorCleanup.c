/*
 * XREFs of CrmStateMonitorCleanup @ 0x180003718
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 *     CrmActivityCleanup @ 0x180031440 (CrmActivityCleanup.c)
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 * Callees:
 *     CrmStateMonitorGPUUsageCleanup @ 0x180004A40 (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x18007E38C (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x18007E430 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x18007E480 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x18007E51C (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x18007E56C (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x18007E624 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x18007E6C8 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x18007E718 (CrmStateMonitorTestCleanup.c)
 */

__int64 __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  bool v5; // zf
  void *v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  int v10; // edx
  int v11; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 > 21 )
  {
    if ( v1 > 28 )
    {
      v3 = v1 - 29;
      if ( !v3 )
      {
LABEL_4:
        CrmStateMonitorGPUUsageCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v10 = v3 - 1;
      if ( !v10 )
        goto LABEL_16;
      v11 = v10 - 1;
      if ( !v11 )
      {
        CrmStateMonitorDisconnectedStandbyCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v5 = v11 == 1;
      goto LABEL_15;
    }
    if ( v1 == 28 )
      return CrmLogStateMonitorStop(a1);
    if ( v1 > 23 )
    {
      if ( v1 == 24 || v1 == 25 )
        goto LABEL_4;
      if ( v1 == 26 )
        CrmStateMonitorCsAcDcCleanup();
      else
        CrmStateMonitorDelayedAcCleanup();
      return CrmLogStateMonitorStop(a1);
    }
LABEL_16:
    if ( *(_QWORD *)(a1 + 72) )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 == 21 )
  {
    CrmStateMonitorPowerConstrainedCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 > 11 )
  {
    if ( v1 != 12 )
    {
      if ( v1 > 17 )
      {
        if ( v1 == 18 )
        {
          v8 = *(void **)(a1 + 64);
          if ( v8 )
            CancelMibChangeNotify2(v8);
          v9 = *(void **)(a1 + 72);
          if ( v9 )
            CancelMibChangeNotify2(v9);
        }
        else if ( v1 == 19 )
        {
          CrmStateMonitorPostShellReadyCleanup();
        }
        else
        {
          CrmStateMonitorPostResumeCleanup();
        }
        return CrmLogStateMonitorStop(a1);
      }
      goto LABEL_16;
    }
LABEL_22:
    v7 = *(_QWORD *)(a1 + 72);
    if ( v7 )
    {
      TpSetTimer(v7, 0LL, 0LL, 0LL);
      TpWaitForTimer(*(_QWORD *)(a1 + 72), 1LL);
      TpReleaseTimer(*(_QWORD *)(a1 + 72));
    }
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 == 11 )
    goto LABEL_22;
  if ( v1 < 0 )
    return CrmLogStateMonitorStop(a1);
  if ( v1 <= 1 )
  {
    CrmStateMonitorTestCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 == 2 )
  {
    CrmStateMonitorCompositeTestCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 > 8 )
  {
    v5 = v1 == 9;
LABEL_15:
    if ( !v5 )
      return CrmLogStateMonitorStop(a1);
    goto LABEL_16;
  }
  v6 = *(void **)(a1 + 64);
  if ( v6 )
    PowerSettingUnregisterNotification(v6);
  return CrmLogStateMonitorStop(a1);
}
