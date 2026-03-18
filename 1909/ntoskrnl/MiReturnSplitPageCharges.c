/*
 * XREFs of MiReturnSplitPageCharges @ 0x14019D6B4
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14089B570 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140125BB4 (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
