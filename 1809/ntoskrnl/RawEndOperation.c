/*
 * XREFs of RawEndOperation @ 0x1400F97D8
 * Callers:
 *     RawCompletionRoutine @ 0x1400F9740 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x14064B378 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140684574 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406846B4 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1407004A0 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14088F940 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14088F9C0 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x14088FC44 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9810 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
