/*
 * XREFs of MiLockWorkingSetOptimal @ 0x140088344
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795B0 (MiReleaseSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1400ADFE0 (MiMarkPteDirty.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A60 (MiMakeSystemCachePteValid.c)
 *     MiDirtySystemCachePte @ 0x140128EE4 (MiDirtySystemCachePte.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0);
  return v4;
}
