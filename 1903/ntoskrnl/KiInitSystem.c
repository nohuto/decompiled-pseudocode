/*
 * XREFs of KiInitSystem @ 0x140A16EF4
 * Callers:
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x140A3BB74 (KiForceSymbolReferences.c)
 */

__int64 (*KiInitSystem())()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  __int64 (*result)(); // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v0 = 1024LL;
  LODWORD(xmmword_14058A8B0) = 0;
  qword_14044DE38 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_14044D958 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_14044D948 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_14044D968 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  qword_14044DC88 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_14044DC78 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_14058A890) = KiServiceLimit;
  *((_QWORD *)&xmmword_14058A890 + 1) = KiArgumentTable;
  qword_14044DDF8 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_14044DE00 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_14044DCF0 = (__int64)&qword_14044DCE8;
  qword_14044DCE8 = (__int64)&qword_14044DCE8;
  KiStackProtectNotifyEvent.Header.WaitListHead.Blink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KiStackProtectNotifyEvent.Header.WaitListHead.Flink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  v1 = &KiAbTreeArray;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow = KeServiceDescriptorTable;
  xmmword_140572A90 = xmmword_14058A890;
  xmmword_140572AA0 = xmmword_14058A8A0;
  xmmword_140572AB0 = xmmword_14058A8B0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_140572AD0 = xmmword_14058A890;
  xmmword_140572AE0 = xmmword_14058A8A0;
  xmmword_140572AF0 = xmmword_14058A8B0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_14044DE18 = 0LL;
  qword_14044DDF0 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_14044DCE2 = 6;
  dword_14044DCE4 = 0;
  LOWORD(KiStackProtectNotifyEvent.Header.Lock) = 0;
  KiStackProtectNotifyEvent.Header.Size = 6;
  KiStackProtectNotifyEvent.Header.SignalState = 0;
  do
  {
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1 += 8;
    --v0;
  }
  while ( v0 );
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  result = KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_14044DD38 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_14044DD40 = 0LL;
  qword_14044DD58 = 0LL;
  qword_14044DD30 = 0LL;
  return result;
}
