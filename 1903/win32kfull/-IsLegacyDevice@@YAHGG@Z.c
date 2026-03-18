/*
 * XREFs of ?IsLegacyDevice@@YAHGG@Z @ 0x1C010DB44
 * Callers:
 *     FreeHidProcessRequest @ 0x1C010CC3C (FreeHidProcessRequest.c)
 *     _RegisterRawInputDevices @ 0x1C010D2AC (_RegisterRawInputDevices.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C010D444 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C010D6A8 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyDevice(__int16 a1, __int16 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1 == 1 && (a2 == 2 || a2 == 6) )
    return 1;
  return v2;
}
