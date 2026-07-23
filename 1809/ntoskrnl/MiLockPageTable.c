/*
 * XREFs of MiLockPageTable @ 0x140192988
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 0);
}
