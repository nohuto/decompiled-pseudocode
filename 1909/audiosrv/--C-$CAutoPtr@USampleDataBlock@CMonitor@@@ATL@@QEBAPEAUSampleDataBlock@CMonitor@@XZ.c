/*
 * XREFs of ??C?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180058F84
 * Callers:
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180038280 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180058D30 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18010FFB4 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180110DA0 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAutoPtr<CMonitor::SampleDataBlock>::operator->(__int64 a1)
{
  return *(_QWORD *)a1;
}
