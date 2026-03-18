/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x140175DFC
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E68 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14014B1EC (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
