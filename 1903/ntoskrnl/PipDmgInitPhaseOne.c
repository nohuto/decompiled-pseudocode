/*
 * XREFs of PipDmgInitPhaseOne @ 0x1409F84BC
 * Callers:
 *     PiDmaGuardInitialize @ 0x140189734 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 */

__int64 PipDmgInitPhaseOne()
{
  if ( PipDmaGuardPolicy )
  {
    PipCslUnlockCallback = PipDmgConsoleUnlockCallback;
    ExInitializeResourceLite(&PipDgqListLock);
    qword_14045EDB8 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  return 0LL;
}
