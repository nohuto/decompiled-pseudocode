/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14000A3B0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A420 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x140084CEC (AuthzBasepAddSecurityAttributeValues.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1)
{
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx),
                  a1 + 64LL,
                  0x74416553u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x40uLL);
  return v2;
}
