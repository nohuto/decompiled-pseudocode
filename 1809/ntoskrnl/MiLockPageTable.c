/*
 * XREFs of MiLockPageTable @ 0x140192848
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5454 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 0);
}
