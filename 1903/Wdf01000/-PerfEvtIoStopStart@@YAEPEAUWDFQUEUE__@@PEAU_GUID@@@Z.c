/*
 * XREFs of ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C004513C
 * Callers:
 *     VfEvtIoStop @ 0x1C00C5850 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     McTemplateK0pp @ 0x1C004529C (McTemplateK0pp.c)
 */

char __fastcall PerfEvtIoStopStart(unsigned __int64 Queue, _GUID *pActivityId)
{
  char v2; // bl
  unsigned __int16 *v4; // r8
  __int64 v5; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  unsigned __int16 m_ObjectSize; // r14
  const void *v8; // rsi
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  const void *Context; // rdi
  FxIoQueue *pQueue; // [rsp+50h] [rbp+8h] BYREF

  v2 = 1;
  v4 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v5 = *((_QWORD *)v4 + 2);
  if ( (*(_DWORD *)(v5 + 404) & 0xF00000) == 0 )
    return 0;
  FxObjectHandleGetPtr(*((_FX_DRIVER_GLOBALS **)v4 + 2), Queue, 0x1003u, (void **)&pQueue);
  m_DeviceBase = pQueue->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v8 = *(const void **)(*(_QWORD *)(v5 + 72) + 168LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
  {
    Context = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      Context = 0LL;
    McTemplateK0pp(v9, &FX_EVTIOSTOP_START, pActivityId, v8, Context);
  }
  return v2;
}
