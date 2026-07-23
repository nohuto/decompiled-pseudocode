/*
 * XREFs of PipDmgInitPhaseOne @ 0x1409C950C
 * Callers:
 *     PiDmaGuardInitialize @ 0x140181E28 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 */

__int64 PipDmgInitPhaseOne()
{
  if ( PipDmaGuardPolicy )
  {
    PipCslUnlockCallback = PipDmgConsoleUnlockCallback;
    ExInitializeResourceLite(&PipDgqListLock);
    qword_1404341B8 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  return 0LL;
}
