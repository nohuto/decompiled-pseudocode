/*
 * XREFs of PipDmgInitPhaseOne @ 0x1409F83CC
 * Callers:
 *     PiDmaGuardInitialize @ 0x140189CE4 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 */

__int64 PipDmgInitPhaseOne()
{
  if ( PipDmaGuardPolicy )
  {
    PipCslUnlockCallback = PipDmgConsoleUnlockCallback;
    ExInitializeResourceLite(&PipDgqListLock);
    qword_14045EAF8 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  return 0LL;
}
