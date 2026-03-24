/*
 * XREFs of RawBeginOperation @ 0x1400D81D0
 * Callers:
 *     RawReadWriteDeviceControl @ 0x14064B378 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140684574 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406846B4 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1407004A0 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14088F940 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14088F9C0 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x14088FC44 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7870 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 200);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return result;
}
