/*
 * XREFs of MiStoreChargeReservedPages @ 0x140188434
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 0x20uLL, 3u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x20uLL, 0LL) )
    {
      dword_140468484 |= 4u;
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, 0x20uLL);
  }
  return 0LL;
}
