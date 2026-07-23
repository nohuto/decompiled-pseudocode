/*
 * XREFs of WheapInitializeEventing @ 0x140A19918
 * Callers:
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 */

PSLIST_ENTRY WheapInitializeEventing()
{
  _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  LOWORD(WheapWaitingETWEventLock.Header.Lock) = 1;
  qword_14042EAA8 = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEvents = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEventLock.Header.Size = 6;
  qword_14042DA68 = (__int64)&WheapDeferredInternalLogs;
  WheapDeferredInternalLogs = (__int64)&WheapDeferredInternalLogs;
  WheapWaitingETWEventLock.Header.SignalState = 1;
  WheapWaitingETWEventLock.Header.WaitListHead.Blink = &WheapWaitingETWEventLock.Header.WaitListHead;
  WheapWaitingETWEventLock.Header.WaitListHead.Flink = &WheapWaitingETWEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Blink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Flink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = 0LL;
  WheapDispatchPtr.Queue.ListEntry = 0uLL;
  LOWORD(WheapDeferredInternalLogsEventLock.Header.Lock) = 1;
  WheapDeferredInternalLogsEventLock.Header.Size = 6;
  WheapDeferredInternalLogsEventLock.Header.SignalState = 1;
  if ( EtwRegister(
         &WHEA_ETW_PROVIDER,
         (PETWENABLECALLBACK)WheapEtwEnableCallback,
         0LL,
         (PREGHANDLE)&WheapDispatchPtr.DeviceExtension) )
  {
    WheapDispatchPtr.DeviceExtension = 0LL;
  }
  if ( ((unsigned __int8)&WheapIpmiLogEntryList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &WheapIpmiLogEntry;
  v1 = 128LL;
  WheapIpmiLogEntryList = 0uLL;
  do
  {
    memset(v0, 0, 0x60uLL);
    result = RtlpInterlockedPushEntrySList(&WheapIpmiLogEntryList, v0);
    v0 += 6;
    --v1;
  }
  while ( v1 );
  return result;
}
