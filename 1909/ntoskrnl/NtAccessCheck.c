/*
 * XREFs of NtAccessCheck @ 0x14000C910
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14000B010 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG ReturnLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (int)SecurityDescriptor,
           0,
           (int)ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int64)GenericMapping,
           PrivilegeSet,
           (int *)ReturnLength,
           GrantedAccess,
           AccessStatus,
           0);
}
