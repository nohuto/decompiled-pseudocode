/*
 * XREFs of NtAccessCheckByType @ 0x140127E50
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1400A9280 (SeAccessCheckByType.c)
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
  return SeAccessCheckByType((__int64)SecurityDescriptor, (__int64)PrincipalSelfSid);
}
