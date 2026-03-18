/*
 * XREFs of MiRewritePteWithLockBit @ 0x1402D8C90
 * Callers:
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x14005C0F0 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1402E13AC (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiUnlockNestedPageTableWritePte @ 0x14005E380 (MiUnlockNestedPageTableWritePte.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
