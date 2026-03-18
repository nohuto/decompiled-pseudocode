/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x140782848
 * Callers:
 *     NtInitializeRegistry @ 0x1407482C0 (NtInitializeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140782980 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140782A58 (CmpVolumeManagerGetContextForFilePath.c)
 */

__int64 CmpHandlePageFileOpenNotification()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // edi
  int v5; // esi
  __int64 **v6; // rax
  _QWORD *v7; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  _BYTE v12[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
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
      v4 = 0;
      v5 = 0;
      if ( CmpWellKnownVolumeList )
      {
        v6 = &CmpWellKnownVolumeList;
        do
        {
          v7 = v6 + 1;
          if ( (int)CmpVolumeManagerGetContextForFilePath(v2, *v6, v3, v6 + 1) >= 0
            && (int)CmpVolumeContextSendDeviceUsageNotification(*v7) >= 0 )
          {
            ++v4;
          }
          v6 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v5];
        }
        while ( *v6 );
        if ( v4 )
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
          KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
        }
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
