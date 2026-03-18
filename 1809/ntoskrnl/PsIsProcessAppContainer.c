/*
 * XREFs of PsIsProcessAppContainer @ 0x1406B8208
 * Callers:
 *     IopFileObjectRevoked @ 0x14008C898 (IopFileObjectRevoked.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     IoRevokeHandlesForProcess @ 0x1402845C0 (IoRevokeHandlesForProcess.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B8020 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD20 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140700708 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BE0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
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
