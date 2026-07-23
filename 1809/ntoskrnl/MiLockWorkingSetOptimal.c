/*
 * XREFs of MiLockWorkingSetOptimal @ 0x140088334
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1400ADF40 (MiMarkPteDirty.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiDirtySystemCachePte @ 0x140128FD4 (MiDirtySystemCachePte.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0);
  return v4;
}
