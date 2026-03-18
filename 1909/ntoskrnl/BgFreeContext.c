/*
 * XREFs of BgFreeContext @ 0x14098E1D4
 * Callers:
 *     BgkResumeFinished @ 0x14059D98C (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E3A00 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_14042C010 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
