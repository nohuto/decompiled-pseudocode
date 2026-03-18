/*
 * XREFs of PopBuildDeviceNotifyList @ 0x14059C574
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     PoInitializeBroadcast @ 0x140727A74 (PoInitializeBroadcast.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoBuildPoDeviceNotifyList @ 0x14059C66C (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(void *a1)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-49h] BYREF
  struct _KTIMER Timer; // [rsp+50h] [rbp-29h] BYREF
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  memset(&Dpc, 0, sizeof(Dpc));
  memset(&Event, 0, sizeof(Event));
  memset(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    if ( !KeCancelTimer(&Timer) )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
