/*
 * XREFs of ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C0108040
 * Callers:
 *     rimSetupPalmTelemetry @ 0x1C00E9FE4 (rimSetupPalmTelemetry.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C01079CC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall PalmTelemetry::_ResetTelemetryData(PalmTelemetry *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 519) = 0;
  memset((char *)this + 2080, 0, 0x27F0uLL);
  memset((char *)this + 28, 0, 0x800uLL);
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 5) = 0;
}
