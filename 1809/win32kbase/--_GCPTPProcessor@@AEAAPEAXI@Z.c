/*
 * XREFs of ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C014A3FC
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014BB20 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C000657C (--1CTouchProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C014A6F8 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::`scalar deleting destructor'(CPTPProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 21) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 75);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  CPTPProcessor::CleanupGestureState(this);
  if ( *((_QWORD *)this + 74) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 344));
  CTouchProcessor::~CTouchProcessor(this);
  Win32FreePool((__int64)this);
  return this;
}
