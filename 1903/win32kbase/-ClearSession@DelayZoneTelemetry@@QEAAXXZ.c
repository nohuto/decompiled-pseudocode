/*
 * XREFs of ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C018F7E0
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0182B58 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C00B4864 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C018FBF8 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 */

void __fastcall DelayZoneTelemetry::ClearSession(DelayZoneTelemetry *this)
{
  DelayZoneTelemetry::UploadTelemetryData(this, 1);
  *((_DWORD *)this + 2) = 0;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset((char *)this + 17, 0, 0x7FFuLL);
  *((_BYTE *)this + 16) = 0;
  DelayZoneTelemetry::ClearInputPanelRects(this);
  *((_DWORD *)this + 3) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}
