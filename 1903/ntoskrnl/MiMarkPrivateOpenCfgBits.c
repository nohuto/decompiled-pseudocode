/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1406D4C08
 * Callers:
 *     MiCommitVadCfgBits @ 0x1405EAD98 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x1405EAFEC (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DDA24 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1405EC81C (MiPopulateCfgBitMap.c)
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
