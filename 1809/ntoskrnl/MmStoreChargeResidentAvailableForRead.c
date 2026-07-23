/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x140175F1C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14014B30C (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
