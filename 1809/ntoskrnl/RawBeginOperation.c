/*
 * XREFs of RawBeginOperation @ 0x1400D8250
 * Callers:
 *     RawReadWriteDeviceControl @ 0x14064C538 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140685734 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x140685874 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140701740 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140890BA0 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140890C20 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x140890EA4 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
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
