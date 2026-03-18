/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14017D0A4
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140107C6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140164CBC (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
