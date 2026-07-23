/*
 * XREFs of NtCreateMailslotFile @ 0x140586350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IoCreateFile @ 0x14060B8B0 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  _DWORD InternalParameters[2]; // [rsp+70h] [rbp-28h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-20h]
  char v11; // [rsp+80h] [rbp-18h]

  if ( TimeOut )
  {
    v11 = 1;
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
  else
  {
    v11 = 0;
  }
  InternalParameters[0] = ShareAccess;
  InternalParameters[1] = MaxMessageSize;
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
           InternalParameters,
           0);
}
