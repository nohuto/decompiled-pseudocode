/*
 * XREFs of PopDiagTraceFxRundown @ 0x14015AB78
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x14071C05C (PopDiagTraceDeviceVerboseRundown.c)
 *     PopFxTraceDeviceRegistration @ 0x14071C29C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1408AF2D8 (PopDiagTraceFxPluginRegistration.c)
 */

_QWORD *PopDiagTraceFxRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  ULONG_PTR *i; // rbx
  __int64 v3; // rdx
  ULONG_PTR *j; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
  for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
  {
    LOBYTE(v1) = 1;
    PopDiagTraceFxPluginRegistration(i, i[3], v1);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      LOBYTE(v3) = 1;
      PopFxTraceDeviceRegistration(j, v3);
      PopDiagTraceDeviceVerboseRundown(j);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
