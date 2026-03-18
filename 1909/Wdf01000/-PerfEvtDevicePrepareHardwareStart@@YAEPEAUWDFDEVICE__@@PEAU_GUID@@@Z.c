/*
 * XREFs of ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0044FFC
 * Callers:
 *     VfEvtDevicePrepareHardware @ 0x1C00C4740 (VfEvtDevicePrepareHardware.c)
 * Callees:
 *     McTemplateK0pp @ 0x1C004529C (McTemplateK0pp.c)
 */

char __fastcall PerfEvtDevicePrepareHardwareStart(unsigned __int64 Handle, _GUID *pActivityId)
{
  char v2; // bl
  unsigned __int16 *v4; // r8
  __int64 v6; // rcx
  const void *v7; // rbp
  _MCGEN_TRACE_CONTEXT *v8; // rcx

  v2 = 1;
  v4 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v6 = *((_QWORD *)v4 + 2);
  if ( (*(_DWORD *)(v6 + 404) & 0xF00000) == 0 )
    return 0;
  v7 = *(const void **)(*(_QWORD *)(v6 + 72) + 168LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
    McTemplateK0pp(v8, &FX_POWER_HW_PREPARE_START, pActivityId, v7, (const void *)Handle);
  return v2;
}
