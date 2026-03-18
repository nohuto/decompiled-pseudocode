/*
 * XREFs of _lambda_9de5ad5352d5075be9212076aeab69f1_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX___ @ 0x1C00942A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C012F834 (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall lambda_9de5ad5352d5075be9212076aeab69f1_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX___(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<180224,704>::Allocate(&Lookaside[-1].L.AllocateEx, NumberOfBytes, Tag);
}
