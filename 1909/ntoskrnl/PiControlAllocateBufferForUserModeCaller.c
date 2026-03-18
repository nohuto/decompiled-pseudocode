/*
 * XREFs of PiControlAllocateBufferForUserModeCaller @ 0x1400D4E9C
 * Callers:
 *     PiControlGetRelatedDevice @ 0x14066FB40 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiControlQueryAndRemoveDevice @ 0x140876460 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408765C0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408767E0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PiControlAllocateBufferForUserModeCaller(_QWORD *a1, unsigned int a2, char a3, __int64 a4)
{
  size_t v6; // rdi
  PVOID PoolWithQuotaTag; // rax

  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = a4;
    return 0LL;
  }
  v6 = a2;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, 0x20207050u);
  *a1 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memset(PoolWithQuotaTag, 0, v6);
    return 0LL;
  }
  return 3221225626LL;
}
