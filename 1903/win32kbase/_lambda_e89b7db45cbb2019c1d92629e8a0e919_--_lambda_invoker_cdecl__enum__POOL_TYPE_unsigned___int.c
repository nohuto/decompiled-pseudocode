/*
 * XREFs of _lambda_e89b7db45cbb2019c1d92629e8a0e919_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_ @ 0x1C00BD9C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

PVOID __fastcall lambda_e89b7db45cbb2019c1d92629e8a0e919_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, NumberOfBytes, 0x6F736955u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, NumberOfBytes);
  return v5;
}
