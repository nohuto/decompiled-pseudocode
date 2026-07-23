/*
 * XREFs of PspNotifyServerSiloTermination @ 0x14088D0CC
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140887F70 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspGetServerSiloStatePointer @ 0x1402E9870 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x14088CE94 (PspGetNextMonitor.c)
 *     PspInvokeTerminateCallback @ 0x14088CEBC (PspInvokeTerminateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1408B89FC (EtwTraceJobServerSiloStateChange.c)
 */

_QWORD *__fastcall PspNotifyServerSiloTermination(__int64 a1)
{
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v4; // rsi
  __int64 *i; // rax
  __int64 **v6; // rbx

  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (_DWORD *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( *v4 != 3 )
    __fastfail(5u);
  for ( i = PspGetNextMonitor(0LL); ; i = PspGetNextMonitor(v6) )
  {
    v6 = (__int64 **)i;
    if ( !i )
      break;
    if ( i[4] )
      PspInvokeTerminateCallback(a1, (__int64)i);
  }
  *v4 = 4;
  EtwTraceJobServerSiloStateChange(a1, 4LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
