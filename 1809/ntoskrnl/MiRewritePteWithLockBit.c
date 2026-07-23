/*
 * XREFs of MiRewritePteWithLockBit @ 0x1402BF86C
 * Callers:
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1402C76B0 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140098414 (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
