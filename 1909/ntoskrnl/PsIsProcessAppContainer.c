/*
 * XREFs of PsIsProcessAppContainer @ 0x1406DAFCC
 * Callers:
 *     IopFileObjectRevoked @ 0x14003F9F0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x140299760 (IoRevokeHandlesForProcess.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DADE4 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EDCB0 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14071D818 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140912EF0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 */

bool __fastcall PsIsProcessAppContainer(struct _KPROCESS *a1)
{
  char v1; // si
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
