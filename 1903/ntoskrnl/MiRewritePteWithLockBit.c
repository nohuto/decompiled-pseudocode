/*
 * XREFs of MiRewritePteWithLockBit @ 0x1402D8F30
 * Callers:
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x14005C050 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1402E164C (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
