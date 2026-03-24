/*
 * XREFs of MiReturnSplitPageCharges @ 0x1401927D4
 * Callers:
 *     MiJoinBitmapPages @ 0x1402B4EC0 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14085F510 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1401207D4 (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
