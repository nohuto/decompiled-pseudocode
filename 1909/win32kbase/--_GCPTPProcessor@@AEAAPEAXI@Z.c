/*
 * XREFs of ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0177C18
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0179980 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B1DB4 (--1CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01780EC (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::`scalar deleting destructor'(CPTPProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 25) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 79);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  CPTPProcessor::CleanupGestureState(this);
  if ( *((_QWORD *)this + 78) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 424), v3, v5);
  CTouchProcessor::~CTouchProcessor(this);
  Win32FreePool((__int64)this);
  return this;
}
