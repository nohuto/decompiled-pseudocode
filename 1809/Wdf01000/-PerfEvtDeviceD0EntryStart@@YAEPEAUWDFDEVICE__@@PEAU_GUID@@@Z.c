/*
 * XREFs of ?PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C00457C4
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C03A0 (VfEvtDeviceD0Entry.c)
 * Callees:
 *     McTemplateK0pp @ 0x1C0045BC0 (McTemplateK0pp.c)
 */

bool __fastcall PerfEvtDeviceD0EntryStart(unsigned __int64 Handle, _GUID *pActivityId)
{
  unsigned __int16 *v4; // r8
  __int64 v5; // rcx
  bool v6; // di
  const void *v7; // rbp
  _MCGEN_TRACE_CONTEXT *v8; // rcx

  v4 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v5 = *((_QWORD *)v4 + 2);
  v6 = (*(_DWORD *)(v5 + 404) & 0xF00000) != 0;
  if ( (*(_DWORD *)(v5 + 404) & 0xF00000) != 0 )
  {
    v7 = *(const void **)(*(_QWORD *)(v5 + 72) + 168LL);
    EtwActivityIdControl(3u, pActivityId);
    if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      McTemplateK0pp(v8, &FX_POWER_D0_ENTRY_START, pActivityId, v7, (const void *)Handle);
  }
  return v6;
}
