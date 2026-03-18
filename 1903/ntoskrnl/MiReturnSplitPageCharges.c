/*
 * XREFs of MiReturnSplitPageCharges @ 0x14019CF34
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14089BD50 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140125544 (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
