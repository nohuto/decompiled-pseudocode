/*
 * XREFs of PsIsProcessAppContainer @ 0x1406DA6CC
 * Callers:
 *     IopFileObjectRevoked @ 0x14003FCB0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x140299A00 (IoRevokeHandlesForProcess.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DA4E4 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406ECA90 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14071BA28 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140913490 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
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
