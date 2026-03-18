/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00A2BA0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00496B8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     LogDiagCDS @ 0x1C004BF0C (LogDiagCDS.c)
 *     LogDiagSDC @ 0x1C004C614 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C0090748 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     PowerOnMonitor @ 0x1C0097530 (PowerOnMonitor.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A2C80 (DrvSetWddmDeviceMonitorPowerState.c)
 *     PowerOffMonitor @ 0x1C00A3990 (PowerOffMonitor.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0103014 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(&v9[1], 0, 36);
  v9[0] = 0x4000000006LL;
  v9[6] = __PAIR64__(a2, a1);
  v9[7] = __PAIR64__(a4, a3);
  return ((__int64 (__fastcall *)(_QWORD *))qword_1C01CD968)(v9);
}
