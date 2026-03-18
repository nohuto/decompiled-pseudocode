/*
 * XREFs of KeInitializeGuardedMutex @ 0x14009ADD0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406819F8 (PiUEventInitClientRegistrationContext.c)
 *     PiDqObjectManagerInit @ 0x140754A04 (PiDqObjectManagerInit.c)
 *     CmpInitSIDToHiveMapping @ 0x14075C1E4 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14076A194 (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x14076AFC8 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     CmpInitializeTransactions @ 0x140A15264 (CmpInitializeTransactions.c)
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
