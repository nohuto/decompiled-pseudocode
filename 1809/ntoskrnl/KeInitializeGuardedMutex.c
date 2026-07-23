/*
 * XREFs of KeInitializeGuardedMutex @ 0x1400063D0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x140656AB8 (PiUEventInitClientRegistrationContext.c)
 *     ExInitializePoolDescriptor @ 0x140716CEC (ExInitializePoolDescriptor.c)
 *     PiDqObjectManagerInit @ 0x14073AF34 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x140742490 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14076338C (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitializeDelayedCloseTable @ 0x140764B30 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x140765404 (CmpInitSIDToHiveMapping.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
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
