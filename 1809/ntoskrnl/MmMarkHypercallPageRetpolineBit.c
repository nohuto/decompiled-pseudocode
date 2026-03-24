/*
 * XREFs of MmMarkHypercallPageRetpolineBit @ 0x1409AAFD0
 * Callers:
 *     HvlPhase1Initialize @ 0x1401939F4 (HvlPhase1Initialize.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140651A20 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140651A60 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140853D50 (MiMarkRetpolineBits.c)
 */

__int64 MmMarkHypercallPageRetpolineBit()
{
  PVOID v0; // rbx
  struct _KTHREAD *Lock; // rdi
  unsigned int v3; // ebx

  v0 = HvlpHypercallCodeVa;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    return 0LL;
  Lock = MmAcquireLoadLock();
  v3 = MiMarkRetpolineBits((__int64)v0);
  MmReleaseLoadLock((__int64)Lock);
  return v3;
}
