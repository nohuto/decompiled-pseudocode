/*
 * XREFs of CmpAllocate @ 0x14068EE80
 * Callers:
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14082F198 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x1406321D4 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x14068EEE4 (CmpClaimGlobalQuota.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(NumberOfBytes) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
