/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1406D42E8
 * Callers:
 *     MiCommitVadCfgBits @ 0x1405EB568 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x1405EB7BC (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DEE14 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1405ECFEC (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(
           a1,
           a4 != 1,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL,
           0,
           a2,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
