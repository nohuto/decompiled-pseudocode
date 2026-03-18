/*
 * XREFs of PspNotifyServerSiloCreation @ 0x1408CA1E0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x140306C60 (PspGetServerSiloStatePointer.c)
 *     PspInvokeCreateCallback @ 0x14077BAB8 (PspInvokeCreateCallback.c)
 *     PspGetNextMonitor @ 0x1408CA0B0 (PspGetNextMonitor.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1408F4110 (EtwTraceJobServerSiloStateChange.c)
 */

__int64 __fastcall PspNotifyServerSiloCreation(__int64 a1)
{
  char v2; // di
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v5; // r14
  __int64 *NextMonitor; // rbx
  unsigned int v7; // ebx

  v2 = 0;
  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = (_DWORD *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( *v5 )
    __fastfail(5u);
  NextMonitor = PspGetNextMonitor(0LL);
  if ( !NextMonitor )
    goto LABEL_10;
  do
  {
    if ( NextMonitor[3] && (int)PspInvokeCreateCallback(a1, (__int64)NextMonitor) < 0 )
      v2 = 1;
    NextMonitor = PspGetNextMonitor((__int64 **)NextMonitor);
  }
  while ( NextMonitor );
  if ( v2 )
  {
    v7 = -1073741248;
  }
  else
  {
LABEL_10:
    *v5 = 1;
    EtwTraceJobServerSiloStateChange(a1, 1LL);
    v7 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
