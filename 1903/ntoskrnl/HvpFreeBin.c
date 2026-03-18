/*
 * XREFs of HvpFreeBin @ 0x1406CD9CC
 * Callers:
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x1408303B0 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1408305FC (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14012492C (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a3, a2);
}
