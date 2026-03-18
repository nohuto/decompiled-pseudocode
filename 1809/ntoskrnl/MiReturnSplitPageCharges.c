/*
 * XREFs of MiReturnSplitPageCharges @ 0x1401927B4
 * Callers:
 *     MiJoinBitmapPages @ 0x1402B4DC0 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14085F530 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1401207B4 (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
