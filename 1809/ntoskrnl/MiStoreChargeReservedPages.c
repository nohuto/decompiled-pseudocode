/*
 * XREFs of MiStoreChargeReservedPages @ 0x14017F864
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 0x20uLL, 3u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x20uLL, 0LL) )
    {
      dword_14043DA04 |= 4u;
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, 0x20uLL);
  }
  return 0LL;
}
