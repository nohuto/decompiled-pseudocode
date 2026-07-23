/*
 * XREFs of HvpFreeBin @ 0x1406D1230
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x1407F8900 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407F8B4C (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14013B48C (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
