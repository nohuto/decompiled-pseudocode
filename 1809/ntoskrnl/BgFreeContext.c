/*
 * XREFs of BgFreeContext @ 0x14094F1D4
 * Callers:
 *     BgkResumeFinished @ 0x14056D684 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC780 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140406AD0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
