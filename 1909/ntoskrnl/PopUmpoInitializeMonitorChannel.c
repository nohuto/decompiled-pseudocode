/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140A1F860
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14017F130 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x1401C1B70 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1401C1DB0 (ZwAlpcSetInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x140789728 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  NTSTATUS v2; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  PCALLBACK_OBJECT PortInformation; // [rsp+30h] [rbp-61h] BYREF
  HANDLE v7; // [rsp+38h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+88h] [rbp-9h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v0 = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  v1 = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  PortInformation = 0LL;
  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  CallbackObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  PortAttributes.Flags = 0x100000;
  PortAttributes.MaxMessageLength = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v2 = ZwAlpcCreatePort(&PopAlpcMonitorServerPort, &ObjectAttributes, &PortAttributes);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        goto LABEL_6;
      PortInformation = v0;
      v7 = PopAlpcMonitorServerPort;
      v2 = ZwAlpcSetInformation(PopAlpcMonitorServerPort, AlpcRegisterCallbackInformation, &PortInformation, 0x10u);
      ObfDereferenceObject(v0);
      if ( v2 >= 0 )
      {
        PopMonitorProcessLoop();
        v2 = 0;
LABEL_6:
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObject(v0);
  return (unsigned int)v2;
}
