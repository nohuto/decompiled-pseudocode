/*
 * XREFs of MmMarkHypercallPageRetpolineBit @ 0x140A3C7E0
 * Callers:
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 */

__int64 MmMarkHypercallPageRetpolineBit()
{
  PVOID v0; // rbx
  struct _KTHREAD *Lock; // rdi
  unsigned int v3; // ebx

  v0 = HvlpHypercallCodeVa;
  if ( (KiSpeculationFeatures & 0x2000000) == 0 )
    return 0LL;
  Lock = MmAcquireLoadLock();
  v3 = MiMarkRetpolineBits((__int64)v0);
  MmReleaseLoadLock((__int64)Lock);
  return v3;
}
