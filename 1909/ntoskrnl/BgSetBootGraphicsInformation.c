/*
 * XREFs of BgSetBootGraphicsInformation @ 0x140993600
 * Callers:
 *     BgkSetBootGraphicsInformation @ 0x140993440 (BgkSetBootGraphicsInformation.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E3A00 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x140348BF0 (BgpFwSetBootGraphicsInformation.c)
 */

__int64 BgSetBootGraphicsInformation()
{
  __int64 v0; // rdx
  unsigned int v2; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !v0 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_14042C010 & 1) != 0 )
    v2 = BgpFwSetBootGraphicsInformation();
  else
    v2 = -1073741823;
  BgpFwReleaseLock();
  return v2;
}
