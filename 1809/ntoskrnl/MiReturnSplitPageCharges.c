/*
 * XREFs of MiReturnSplitPageCharges @ 0x140192914
 * Callers:
 *     MiJoinBitmapPages @ 0x1402B50B0 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x140860770 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1401208A4 (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
