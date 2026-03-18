/*
 * XREFs of IoGetContainerInformation @ 0x140748550
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x140002348 (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x1401052D0 (PsGetCurrentProcessSessionId.c)
 *     MmGetIoSessionState @ 0x1407485B4 (MmGetIoSessionState.c)
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
  __int64 v9; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId, v9);
    if ( !SessionObjectById )
      return -1073741584;
  }
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState(SessionObjectById, &v10);
  v6 = v10 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v10;
  *((_BYTE *)Buffer + 8) = v6;
  return 0;
}
