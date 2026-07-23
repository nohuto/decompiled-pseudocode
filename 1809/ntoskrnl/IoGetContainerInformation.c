/*
 * XREFs of IoGetContainerInformation @ 0x14071F0A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     MmGetIoSessionState @ 0x14071F104 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  bool v6; // zf
  unsigned int CurrentProcessSessionId; // eax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId);
    if ( !SessionObjectById )
      return -1073741584;
  }
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState(SessionObjectById, &v9);
  v6 = v9 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v9;
  *((_BYTE *)Buffer + 8) = v6;
  return 0;
}
