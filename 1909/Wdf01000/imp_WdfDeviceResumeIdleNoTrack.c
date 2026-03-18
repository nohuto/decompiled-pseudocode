/*
 * XREFs of imp_WdfDeviceResumeIdleNoTrack @ 0x1C00498C0
 * Callers:
 *     <none>
 * Callees:
 *     ResumeIdleWorker @ 0x1C0047E0C (ResumeIdleWorker.c)
 */

void __fastcall imp_WdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  ResumeIdleWorker(DriverGlobals, Device, 0LL, 0, 0LL);
}
