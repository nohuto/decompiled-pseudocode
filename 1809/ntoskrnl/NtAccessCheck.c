/*
 * XREFs of NtAccessCheck @ 0x1400ABBA0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1400A9280 (SeAccessCheckByType.c)
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
  return SeAccessCheckByType((__int64)SecurityDescriptor, 0LL);
}
