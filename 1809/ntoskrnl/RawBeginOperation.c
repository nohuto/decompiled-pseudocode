/*
 * XREFs of RawBeginOperation @ 0x1400D81B0
 * Callers:
 *     RawReadWriteDeviceControl @ 0x14064B398 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140684594 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406846D4 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1407004C0 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14088F960 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14088F9E0 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x14088FC64 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7850 (ExAcquireRundownProtectionCacheAwareEx.c)
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
