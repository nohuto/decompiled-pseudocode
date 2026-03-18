/*
 * XREFs of KeInitializeGuardedMutex @ 0x1400063D0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14058EF60 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x140655918 (PiUEventInitClientRegistrationContext.c)
 *     ExInitializePoolDescriptor @ 0x140715A6C (ExInitializePoolDescriptor.c)
 *     PiDqObjectManagerInit @ 0x140739D64 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x1407412C0 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1407621BC (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitializeDelayedCloseTable @ 0x140763960 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x140764234 (CmpInitSIDToHiveMapping.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
}
