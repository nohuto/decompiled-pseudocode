/*
 * XREFs of HvpFreeBin @ 0x14068C38C
 * Callers:
 *     HvHiveCleanup @ 0x140631FB0 (HvHiveCleanup.c)
 *     HvFreeHivePartial @ 0x14064194C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14068D388 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068D968 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x14075C4B4 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140830220 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x14083046C (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x1400EC9C8 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a3, a2);
}
