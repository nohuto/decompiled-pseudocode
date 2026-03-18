/*
 * XREFs of AuthzBasepMemAlloc @ 0x140085258
 * Callers:
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400850B4 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085130 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140194924 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14092C294 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T NumberOfBytes, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx), NumberOfBytes, a3);
}
