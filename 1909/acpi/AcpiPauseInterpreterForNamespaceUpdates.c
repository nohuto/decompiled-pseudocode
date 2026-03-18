/*
 * XREFs of AcpiPauseInterpreterForNamespaceUpdates @ 0x1C005B3B0
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C005B460 (AcpiReflectNativeObject.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLIPauseInterpreter @ 0x1C00630B0 (AMLIPauseInterpreter.c)
 */

__int64 AcpiPauseInterpreterForNamespaceUpdates()
{
  unsigned int v0; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[5]; // [rsp+48h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(v3, 0, 0x20uLL);
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
