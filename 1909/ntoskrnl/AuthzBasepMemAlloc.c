/*
 * XREFs of AuthzBasepMemAlloc @ 0x140085658
 * Callers:
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400854B4 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085530 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140195104 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14092BD08 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T NumberOfBytes, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx), NumberOfBytes, a3);
}
