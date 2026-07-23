/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x14075A7D4
 * Callers:
 *     NtInitializeRegistry @ 0x14071EF70 (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpGetNextActiveHive @ 0x1405B2474 (CmpGetNextActiveHive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14075A930 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14075AA00 (CmpVolumeManagerGetContextForFilePath.c)
 */

__int64 CmpHandlePageFileOpenNotification()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r8
  __int64 *v3; // rcx
  int v4; // esi
  int v5; // edi
  __int64 **v6; // rax
  _QWORD *v7; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  _BYTE v12[48]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v3 = CmpWellKnownVolumeList;
      v4 = 0;
      v5 = 0;
      v6 = &CmpWellKnownVolumeList;
      if ( CmpWellKnownVolumeList )
      {
        do
        {
          v7 = v6 + 1;
          if ( (int)CmpVolumeManagerGetContextForFilePath(v3, v3, v2, v6 + 1) >= 0 )
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(
              (__int64)&Feature_UnCOWOnWellKnownVolumes__private_propertyCache,
              13296946LL,
              (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
              1u,
              3);
            if ( (int)CmpVolumeContextSendDeviceUsageNotification(*v7) >= 0 )
              ++v5;
          }
          v6 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v4];
          v3 = *v6;
        }
        while ( *v6 );
        if ( v5 )
        {
          CmpAttachToRegistryProcess((__int64)v12);
          for ( i = 0LL; ; i = v10 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
            if ( !NextActiveHive )
              break;
            CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
          }
          KiUnstackDetachProcess((__int64)v12, 0LL);
        }
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
