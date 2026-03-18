/*
 * XREFs of AcpiPauseInterpreterForNamespaceUpdates @ 0x1C00596B0
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C0059740 (AcpiReflectNativeObject.c)
 * Callees:
 *     AMLIPauseInterpreter @ 0x1C0061130 (AMLIPauseInterpreter.c)
 */

__int64 AcpiPauseInterpreterForNamespaceUpdates()
{
  unsigned int v0; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v3[6]; // [rsp+48h] [rbp-30h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v3[2] = AcpiInterpreterPausedSignalEventCallback;
  v3[3] = &Event;
  v3[1] = v3;
  v3[0] = v3;
  v0 = AMLIPauseInterpreter(v3);
  if ( v0 == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return v0;
}
