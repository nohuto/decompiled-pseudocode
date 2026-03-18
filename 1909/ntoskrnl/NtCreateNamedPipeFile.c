/*
 * XREFs of NtCreateNamedPipeFile @ 0x1406DBBB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IoCreateFile @ 0x140617880 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateNamedPipeFile(
        PHANDLE NamedPipeFileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG WriteModeMessage,
        ULONG ReadModeMessage,
        ULONG NonBlocking,
        ULONG MaxInstances,
        ULONG InBufferSize,
        ULONG OutBufferSize,
        PLARGE_INTEGER DefaultTimeOut)
{
  _QWORD InternalParameters[5]; // [rsp+70h] [rbp-48h] BYREF

  memset(InternalParameters, 0, sizeof(InternalParameters));
  if ( DefaultTimeOut )
  {
    LOBYTE(InternalParameters[4]) = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)DefaultTimeOut & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      InternalParameters[3] = DefaultTimeOut->QuadPart;
    }
    else
    {
      InternalParameters[3] = DefaultTimeOut->QuadPart;
    }
  }
  LODWORD(InternalParameters[0]) = WriteModeMessage;
  HIDWORD(InternalParameters[0]) = ReadModeMessage;
  LODWORD(InternalParameters[1]) = NonBlocking;
  HIDWORD(InternalParameters[1]) = MaxInstances;
  LODWORD(InternalParameters[2]) = InBufferSize;
  HIDWORD(InternalParameters[2]) = OutBufferSize;
  return IoCreateFile(
           NamedPipeFileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeNamedPipe,
           InternalParameters,
           0);
}
