/*
 * XREFs of KeInitializeGuardedMutex @ 0x1400EEA20
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14069FF58 (PiUEventInitClientRegistrationContext.c)
 *     PiDqObjectManagerInit @ 0x140755494 (PiDqObjectManagerInit.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407589CC (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x140760964 (CmpInitSIDToHiveMapping.c)
 *     EtwpInitializeProviderTraits @ 0x14076DE1C (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     CmpInitializeTransactions @ 0x1409FBA10 (CmpInitializeTransactions.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
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
