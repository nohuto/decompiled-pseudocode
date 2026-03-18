/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00B8DF0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00494E8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     LogDiagCDS @ 0x1C004C1C4 (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C005B3B0 (PowerOnMonitor.c)
 *     LogDiagSDC @ 0x1C00628E0 (LogDiagSDC.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00A4BBC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     PowerOffMonitor @ 0x1C00B8460 (PowerOffMonitor.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C012B914 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(int a1, int a2, int a3, int a4)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h]
  __int128 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]

  v10 = a1;
  v9 = 0LL;
  v7 = 0uLL;
  v8 = 0LL;
  v6 = 0LL;
  v5[0] = 6;
  v5[1] = 64;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  return ((__int64 (__fastcall *)(_DWORD *))qword_1C0215140)(v5);
}
