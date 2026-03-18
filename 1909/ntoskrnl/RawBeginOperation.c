/*
 * XREFs of RawBeginOperation @ 0x1400D4280
 * Callers:
 *     RawReadWriteDeviceControl @ 0x14066B30C (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x1406A1660 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406A17A0 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14072DCB8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1408CD600 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1408CD680 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x1408CD938 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D3DA0 (ExAcquireRundownProtectionCacheAwareEx.c)
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
