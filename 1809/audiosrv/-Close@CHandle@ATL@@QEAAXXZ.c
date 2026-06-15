/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800FB728
 * Callers:
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180016B00 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180019B20 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x1800FB1B8 (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1800FB310 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x1801001CC (--1CMonitor@@IEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180103FCC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::Close(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
