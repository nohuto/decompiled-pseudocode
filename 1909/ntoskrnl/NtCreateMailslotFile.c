/*
 * XREFs of NtCreateMailslotFile @ 0x1405B5340
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     IoCreateFile @ 0x140617880 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateMailslotFile(
        PHANDLE MailSlotFileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG MaxMessageSize,
        PLARGE_INTEGER TimeOut)
{
  __int64 InternalParameters; // [rsp+70h] [rbp-28h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp-18h]

  InternalParameters = 0LL;
  QuadPart = 0LL;
  v11 = 0LL;
  if ( TimeOut )
  {
    LOBYTE(v11) = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)TimeOut & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = TimeOut->QuadPart;
    }
    else
    {
      QuadPart = TimeOut->QuadPart;
    }
  }
  LODWORD(InternalParameters) = ShareAccess;
  HIDWORD(InternalParameters) = MaxMessageSize;
  return IoCreateFile(
           MailSlotFileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           0LL,
           0,
           3u,
           2u,
           FileAttributes,
           0LL,
           0,
           CreateFileTypeMailslot,
           &InternalParameters,
           0);
}
