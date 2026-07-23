/*
 * XREFs of PopDiagTraceZoneS4TripPointExceeded @ 0x140875C74
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     PopDiagTraceTripPointExceeded @ 0x14087591C (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneS4TripPointExceeded(__int64 a1, __int64 a2)
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
          *(_DWORD *)(a1 + 76) / 0xAu,
          &POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v7 + 280) >> 1,
          *(_QWORD *)(v7 + 288),
          *(_DWORD *)(a1 + 76) / 0xAu,
          &POP_ETW_EVENT_S4_TRIP_POINT_SYSTEM);
      }
      if ( v6 )
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
    }
  }
}
