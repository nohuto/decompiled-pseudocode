/*
 * XREFs of MiRewritePteWithLockBit @ 0x1402BF57C
 * Callers:
 *     MiProtectAweRegion @ 0x1402B14BC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2178 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1402C73C0 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x1402CF138 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1400984D4 (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
