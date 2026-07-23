/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x1409CAF5C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x14071018C (PnpWatchdogBugcheckConfigure.c)
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073D330 (PnpWatchdogSetupInProgressConfigure.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 *     PnpOpenCCSPnpRegKey @ 0x14073D6FC (PnpOpenCCSPnpRegKey.c)
 */

void PnpInitializePnpWatchdogs()
{
  UNICODE_STRING v0; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  PnpEventWorkerWatchdogLock.Owner = 0LL;
  PnpEventWorkerWatchdogLock.Contention = 0;
  PnpEventWorkerWatchdogLock.Event.Header.SignalState = 0;
  PnpDelayedRemoveWorkerWatchdogLock.Owner = 0LL;
  PnpDelayedRemoveWorkerWatchdogLock.Contention = 0;
  PnpDelayedRemoveWorkerWatchdogLock.Event.Header.SignalState = 0;
  PnpEventWorkerWatchdogLock.Event.Header.WaitListHead.Blink = &PnpEventWorkerWatchdogLock.Event.Header.WaitListHead;
  PnpEventWorkerWatchdogLock.Event.Header.WaitListHead.Flink = &PnpEventWorkerWatchdogLock.Event.Header.WaitListHead;
  PnpEventWorkerWatchdogLock.Count = 1;
  LOWORD(PnpEventWorkerWatchdogLock.Event.Header.Lock) = 1;
  PnpDelayedRemoveWorkerWatchdogLock.Count = 1;
  LOWORD(PnpDelayedRemoveWorkerWatchdogLock.Event.Header.Lock) = 1;
  PnpDelayedRemoveWorkerWatchdogLock.Event.Header.WaitListHead.Blink = &PnpDelayedRemoveWorkerWatchdogLock.Event.Header.WaitListHead;
  PnpDelayedRemoveWorkerWatchdogLock.Event.Header.WaitListHead.Flink = &PnpDelayedRemoveWorkerWatchdogLock.Event.Header.WaitListHead;
  PnpEventWorkerWatchdogLock.Event.Header.Size = 6;
  PnpDelayedRemoveWorkerWatchdogLock.Event.Header.Size = 6;
  if ( (int)PnpOpenCCSPnpRegKey(&Handle) >= 0 )
  {
    *(_QWORD *)PnpWatchdogBugcheckWatchWorkItem = 0LL;
    qword_140434590 = (__int64)PnpWatchdogBugcheckWatchCallback;
    qword_140434598 = (__int64)Handle;
    PnpWatchdogBugcheckConfigure(Handle);
    if ( !(_BYTE)dword_14054119C )
    {
      *(_DWORD *)&v0.Length = 4063292;
      v0.Buffer = L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&KeyHandle, 0LL, &v0, 0x20019u) >= 0 )
      {
        *(_QWORD *)PnpWatchdogSetupInProgressWorkItem = 0LL;
        qword_1404345D0 = (__int64)PnpWatchdogSetupInProgressCallback;
        qword_1404345D8 = (__int64)KeyHandle;
        PnpWatchdogSetupInProgressConfigure(KeyHandle);
      }
    }
  }
}
