/*
 * XREFs of ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00493E4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvChangeDisplaySettings @ 0x1C004BEDC (DrvChangeDisplaySettings.c)
 *     DrvEnumDisplayDevices @ 0x1C004E770 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvGetPruneFlag(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v2; // edi
  int v3; // esi
  HANDLE RegistryHandleFromDeviceMap; // rbx
  ULONG Length; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[14]; // [rsp+48h] [rbp-50h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v2 = 0;
  Length = 52;
  v3 = 1;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
  if ( RegistryHandleFromDeviceMap )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PruningMode");
    if ( ZwQueryValueKey(
           RegistryHandleFromDeviceMap,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           Length,
           &Length) >= 0 )
      v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
    ZwClose(RegistryHandleFromDeviceMap);
  }
  LOBYTE(v2) = v3 != 0;
  return v2;
}
