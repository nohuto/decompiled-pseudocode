/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14005D5C8
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiMarkPteDirty @ 0x1400D8DA0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x14012A16C (MiDirtySystemCachePte.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v4; // rsi
  __int64 v5; // r9

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0LL, v5);
  return v4;
}
