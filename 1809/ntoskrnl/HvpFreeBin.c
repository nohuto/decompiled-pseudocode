/*
 * XREFs of HvpFreeBin @ 0x1406CFF90
 * Callers:
 *     HvpAddBin @ 0x1405A39BC (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x1405A8240 (HvFreeHivePartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405F96A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x140736594 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x1407F7700 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407F794C (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14013B38C (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
