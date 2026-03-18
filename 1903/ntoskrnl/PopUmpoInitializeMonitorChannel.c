/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140A1F680
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14017EA40 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x1401C0FF0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1401C1230 (ZwAlpcSetInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x1407873C8 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  int Port; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  PCALLBACK_OBJECT v6; // [rsp+30h] [rbp-61h] BYREF
  HANDLE v7; // [rsp+38h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v10[10]; // [rsp+88h] [rbp-9h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v0 = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  v1 = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  CallbackObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(v10, 0, 0x48uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  LODWORD(v10[0]) = 0x100000;
  v10[2] = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  Port = ZwAlpcCreatePort((__int64)&PopAlpcMonitorServerPort, (__int64)&ObjectAttributes, (__int64)v10);
  if ( Port >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    Port = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        goto LABEL_6;
      v6 = v0;
      v7 = PopAlpcMonitorServerPort;
      Port = ZwAlpcSetInformation((__int64)PopAlpcMonitorServerPort, 9LL, (__int64)&v6);
      ObfDereferenceObject(v0);
      if ( Port >= 0 )
      {
        PopMonitorProcessLoop();
        Port = 0;
LABEL_6:
        if ( Port >= 0 )
          return (unsigned int)Port;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObject(v0);
  return (unsigned int)Port;
}
