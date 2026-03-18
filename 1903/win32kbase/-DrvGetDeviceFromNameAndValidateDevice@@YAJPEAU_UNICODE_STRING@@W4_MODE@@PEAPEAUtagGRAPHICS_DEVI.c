/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0090038
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C008FF70 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00B22D0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C012E1E0 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C003C3B0 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00900C0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 */

__int64 __fastcall DrvGetDeviceFromNameAndValidateDevice(struct _UNICODE_STRING *a1, enum _MODE a2, wchar_t **a3)
{
  wchar_t *DeviceFromName; // rdi
  int v5; // eax
  PCUNICODE_STRING String1; // [rsp+48h] [rbp+20h] BYREF

  DeviceFromName = 0LL;
  if ( a2 == UserMode )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      DeviceFromName = DrvGetDeviceFromName(String1);
    if ( String1 )
      Win32FreePool((__int64)String1);
  }
  else
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
  }
  if ( !DeviceFromName )
    return 3223193057LL;
  v5 = *((_DWORD *)DeviceFromName + 40);
  if ( (v5 & 1) == 0 )
    return 3223193058LL;
  if ( (v5 & 8) != 0 )
    return 3223193059LL;
  *a3 = DeviceFromName;
  return 0LL;
}
