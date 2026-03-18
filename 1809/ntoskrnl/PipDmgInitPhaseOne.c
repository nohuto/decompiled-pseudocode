/*
 * XREFs of PipDmgInitPhaseOne @ 0x1409C850C
 * Callers:
 *     PiDmaGuardInitialize @ 0x140181CC8 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 */

__int64 PipDmgInitPhaseOne()
{
  if ( PipDmaGuardPolicy )
  {
    PipCslUnlockCallback = PipDmgConsoleUnlockCallback;
    ExInitializeResourceLite(&PipDgqListLock);
    qword_140433158 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  return 0LL;
}
