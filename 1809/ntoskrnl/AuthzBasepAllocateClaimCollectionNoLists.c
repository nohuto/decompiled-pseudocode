/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x1408EE384
 * Callers:
 *     SepCreateClaimAttributes @ 0x1405BD654 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408A3F40 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140121608 (AuthzBasepMemAlloc.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

PVOID __fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  PVOID result; // rax
  PVOID v3; // rbx

  result = AuthzBasepMemAlloc(0x260uLL, a2, 0x74416553u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}
