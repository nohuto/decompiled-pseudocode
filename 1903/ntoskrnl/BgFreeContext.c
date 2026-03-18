/*
 * XREFs of BgFreeContext @ 0x14098E1D4
 * Callers:
 *     BgkResumeFinished @ 0x14059BCCC (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400ED070 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_14042C030 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
