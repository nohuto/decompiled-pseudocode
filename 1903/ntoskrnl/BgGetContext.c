/*
 * XREFs of BgGetContext @ 0x14098E034
 * Callers:
 *     BgkResumePrepare @ 0x14059B5B0 (BgkResumePrepare.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400ED070 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x14098E080 (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v0 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_14042C030 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v0 = v2;
  }
  BgpFwReleaseLock();
  return v0;
}
