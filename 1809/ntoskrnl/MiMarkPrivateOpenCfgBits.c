/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1405F6524
 * Callers:
 *     MiCommitVadCfgBits @ 0x1405F45BC (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x1405F47C4 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406513D4 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1405F6560 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
