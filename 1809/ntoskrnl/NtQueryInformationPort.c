/*
 * XREFs of NtQueryInformationPort @ 0x140849B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG PortInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  int v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(PortInformation, PortInformationLength, 4u);
    if ( ReturnLength )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v7 = (__int64)ReturnLength;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
  }
  if ( !PortHandle )
    return -1073741821;
  v8 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    if ( ReturnLength )
      *ReturnLength = 0;
    ObfDereferenceObject(Object);
  }
  return v8;
}
