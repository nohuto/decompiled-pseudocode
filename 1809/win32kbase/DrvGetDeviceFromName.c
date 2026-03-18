/*
 * XREFs of DrvGetDeviceFromName @ 0x1C0015070
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C00144F0 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C0014F70 (DrvGetHDEV.c)
 *     DrvEnumDisplayDevices @ 0x1C00158D0 (DrvEnumDisplayDevices.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004BD5C (DrvChangeDisplaySettingsPreValidate.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00546B0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C007CFC8 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00FE790 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     DrvSetPruneFlag @ 0x1C0105384 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C01054CC (DrvSetVideoParameters.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  wchar_t *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, v1 + 32);
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      break;
    v1 = (wchar_t *)*((_QWORD *)v1 + 16);
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
