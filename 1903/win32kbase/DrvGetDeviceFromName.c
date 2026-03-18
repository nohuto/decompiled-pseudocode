/*
 * XREFs of DrvGetDeviceFromName @ 0x1C003C3B0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C003A320 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C003C2B0 (DrvGetHDEV.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0046348 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004C4E0 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvEnumDisplayDevices @ 0x1C004E770 (DrvEnumDisplayDevices.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0090038 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C0122620 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     DrvSetPruneFlag @ 0x1C012E548 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C012E690 (DrvSetVideoParameters.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  wchar_t *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = gpGraphicsDeviceList;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
