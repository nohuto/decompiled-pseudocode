/*
 * XREFs of NtAccessCheckByType @ 0x140127F90
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14000B010 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheckByType(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (int)SecurityDescriptor,
           (int)PrincipalSelfSid,
           (int)ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeLength,
           (__int64)GenericMapping,
           PrivilegeSet,
           (int *)PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           0);
}
