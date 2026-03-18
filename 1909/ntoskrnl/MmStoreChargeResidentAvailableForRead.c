/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14017D794
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14016470C (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
