/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x1407889A0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __stdcall NtSetDefaultHardErrorPort(HANDLE PortHandle)
{
  _DWORD *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( CurrentServerSiloGlobals[224] == 1 )
    return -1073741823;
  result = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  *((_QWORD *)CurrentServerSiloGlobals + 111) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    CurrentServerSiloGlobals[224] = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)CurrentServerSiloGlobals + 110) = Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}
