/*
 * XREFs of ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C015C6A4
 * Callers:
 *     rimSetupPalmTelemetry @ 0x1C013D350 (rimSetupPalmTelemetry.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01562B0 (rimEndPointerDeviceStaleContacts.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C015C02C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall PalmTelemetry::_ResetTelemetryData(PalmTelemetry *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 519) = 0;
  memset((char *)this + 2080, 0, 0x27F0uLL);
  memset((char *)this + 29, 0, 0x7FFuLL);
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 5) = 0;
}
