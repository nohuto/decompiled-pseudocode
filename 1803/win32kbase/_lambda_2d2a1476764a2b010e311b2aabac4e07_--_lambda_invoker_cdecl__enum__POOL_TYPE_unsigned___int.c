/*
 * XREFs of _lambda_2d2a1476764a2b010e311b2aabac4e07_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C005ED20
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C005D5DC (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall lambda_2d2a1476764a2b010e311b2aabac4e07_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX_____ptr64_(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<180224,704>::Allocate((__int64)&Lookaside[-1].L.ListEntry);
}
