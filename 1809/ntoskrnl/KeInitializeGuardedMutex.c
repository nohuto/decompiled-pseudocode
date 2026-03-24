/*
 * XREFs of KeInitializeGuardedMutex @ 0x1400063D0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14058EF60 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406558F8 (PiUEventInitClientRegistrationContext.c)
 *     ExInitializePoolDescriptor @ 0x140715A4C (ExInitializePoolDescriptor.c)
 *     PiDqObjectManagerInit @ 0x140739D44 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x1407412A0 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x140751D58 (PfTInitialize.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14076219C (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitializeDelayedCloseTable @ 0x140763940 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x140764214 (CmpInitSIDToHiveMapping.c)
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
