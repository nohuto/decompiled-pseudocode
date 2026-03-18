/*
 * XREFs of PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408B0EDC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagTraceTripPointExceeded @ 0x1408B0C80 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneCriticalTripPointExceeded(__int64 a1, __int64 a2)
{
  REGHANDLE v4; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rbx
  __int64 v7; // rdi

  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC)
      || EtwEventEnabled(v4, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM) )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
      v6 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      else
        v7 = 0LL;
      if ( v7 )
      {
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v7 + 280) >> 1,
          *(_QWORD *)(v7 + 288),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v7 + 280) >> 1,
          *(_QWORD *)(v7 + 288),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
      }
      if ( v6 )
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
    }
  }
}
