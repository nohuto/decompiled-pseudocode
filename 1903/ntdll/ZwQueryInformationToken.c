/*
 * XREFs of ZwQueryInformationToken @ 0x18009CB00
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000B550 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     sub_18000F170 @ 0x18000F170 (sub_18000F170.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     sub_18005300C @ 0x18005300C (sub_18005300C.c)
 *     sub_180066D68 @ 0x180066D68 (sub_180066D68.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     RtlCheckSandboxedToken @ 0x1800848E0 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x18008A0B0 (RtlRemovePrivileges.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D6D70 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6EA0 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800D977C @ 0x1800D977C (sub_1800D977C.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 *     sub_1800E6498 @ 0x1800E6498 (sub_1800E6498.c)
 *     sub_1800E65E8 @ 0x1800E65E8 (sub_1800E65E8.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 33;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
