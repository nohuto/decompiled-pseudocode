/*
 * XREFs of MiStoreChargeReservedPages @ 0x1401889E4
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 0x20uLL, 3u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x20uLL, 0LL) )
    {
      dword_1404681C4 |= 4u;
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, 0x20uLL);
  }
  return 0LL;
}
