/*
 * XREFs of RawEndOperation @ 0x1400FA0B8
 * Callers:
 *     RawCompletionRoutine @ 0x1400FA020 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x1406582EC (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x1406AA8D0 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406AAA10 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14072BE18 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1408CDD20 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1408CDDA0 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x1408CE058 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
