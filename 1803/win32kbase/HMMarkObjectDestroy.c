/*
 * XREFs of HMMarkObjectDestroy @ 0x1C005F400
 * Callers:
 *     HMDestroyObject @ 0x1C005F1A0 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0123FD0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124070 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0127700 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     CleanupKeyboardLayouts @ 0x1C012A510 (CleanupKeyboardLayouts.c)
 *     DestroyKF @ 0x1C012A5BC (DestroyKF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  char *v1; // r8
  char v2; // al

  v1 = (char *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*a1;
  v2 = v1[25] | 1;
  v1[25] = v2;
  if ( !a1[2] )
    return 1LL;
  v1[25] = v2 & 0xFD;
  return 0LL;
}
