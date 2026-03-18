/*
 * XREFs of BgFreeContext @ 0x14094E1D4
 * Callers:
 *     BgkResumeFinished @ 0x14056C684 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC820 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140405AD0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
