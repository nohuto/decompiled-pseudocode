/*
 * XREFs of RawEndOperation @ 0x1400F97B8
 * Callers:
 *     RawCompletionRoutine @ 0x1400F9720 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x14064B398 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140684594 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406846D4 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1407004C0 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14088F960 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14088F9E0 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x14088FC64 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
