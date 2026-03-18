/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140610A0C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x140610D60 (PspEnforceLimits.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406157D4 (PspQueryJobHierarchyProcessIdList.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14061A518 (PspSetEnergyTrackingStateJobTree.c)
 *     PspEstablishJobHierarchy @ 0x140695344 (PspEstablishJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x1406970C8 (PspIsSetJobIoAttribution.c)
 *     PspSetJobIoAttribution @ 0x14069751C (PspSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x140697828 (PspRemoveIoAttribution.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406989D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspFreezeJobTree @ 0x1406DBB80 (PspFreezeJobTree.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E0F14 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x1406E8FEC (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406EEE2C (PspDoesJobHierarchyPermitUILimits.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C60F0 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1408C7D8C (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1408C7FB8 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1408C8058 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x1408C8440 (PspSetJobRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x1408CD15C (PspEnumProcessesInJobHierarchy.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextChildJob @ 0x140610F78 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x140611414 (PspCallJobHierarchyCallbacks.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x140611978 (PspLockJobShared.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(_QWORD *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  unsigned int v8; // r15d
  int v9; // r12d
  _QWORD *v10; // rbx
  _QWORD *NextChildJob; // rbp
  _QWORD *i; // r14
  __int64 v13; // r14
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+98h] [rbp+10h]
  int v17; // [rsp+A0h] [rbp+18h]
  int v18; // [rsp+A8h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v6 = a6;
  if ( (a6 & 8) != 0 )
    v8 = a6 | 1;
  else
    v8 = a6 & 0xFFFFFFFE;
  v9 = 0;
  v10 = Object;
  if ( (a6 & 8) != 0 )
    v6 = a6 | 1;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v9 = PspCallJobHierarchyCallbacks((_DWORD)v10, a2, a3, a4, a5, v6);
      if ( v9 < 0 )
        goto LABEL_17;
      v6 = v8;
    }
    NextChildJob = 0LL;
    CurrentThread = KeGetCurrentThread();
    PspLockJobShared(v10, CurrentThread);
    for ( i = (_QWORD *)v10[132]; i != v10 + 132; i = (_QWORD *)*i )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 130)) )
      {
        NextChildJob = i - 130;
        break;
      }
    }
    PspUnlockJob(v10, CurrentThread);
    if ( !NextChildJob )
    {
      v13 = v10[134];
      if ( v10 != Object )
      {
        while ( 1 )
        {
          if ( (v6 & 2) != 0 )
          {
            v9 = PspCallJobHierarchyCallbacks((_DWORD)v10, v16, v17, v18, a5, v8);
            if ( v9 < 0 )
              goto LABEL_17;
          }
          NextChildJob = PspGetNextChildJob(v13, v10);
          if ( !NextChildJob )
          {
            v10 = (_QWORD *)v13;
            v13 = *(_QWORD *)(v13 + 1072);
            if ( v10 != Object )
              continue;
          }
          break;
        }
      }
    }
    v10 = NextChildJob;
    if ( !NextChildJob )
      break;
    a4 = v18;
    a3 = v17;
    a2 = v16;
  }
  if ( (v6 & 2) == 0 )
    return (unsigned int)v9;
  v9 = PspCallJobHierarchyCallbacks((_DWORD)Object, v16, v17, v18, a5, v6);
LABEL_17:
  if ( v10 )
  {
    while ( v10 != Object )
    {
      ObfDereferenceObjectWithTag(v10, 0x6E457350u);
      v10 = (_QWORD *)v10[134];
    }
  }
  return (unsigned int)v9;
}
