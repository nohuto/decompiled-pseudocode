/*
 * XREFs of _lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX___ @ 0x1C00955E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C012F954 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX___(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<36864,144>::Allocate(&Lookaside[-1].L.AllocateEx, NumberOfBytes, Tag);
}
