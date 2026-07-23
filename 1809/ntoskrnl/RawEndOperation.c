/*
 * XREFs of RawEndOperation @ 0x1400F9858
 * Callers:
 *     RawCompletionRoutine @ 0x1400F97C0 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x14064C538 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140685734 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x140685874 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140701740 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140890BA0 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140890C20 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x140890EA4 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
