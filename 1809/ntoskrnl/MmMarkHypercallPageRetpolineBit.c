/*
 * XREFs of MmMarkHypercallPageRetpolineBit @ 0x1409ABFD0
 * Callers:
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
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
