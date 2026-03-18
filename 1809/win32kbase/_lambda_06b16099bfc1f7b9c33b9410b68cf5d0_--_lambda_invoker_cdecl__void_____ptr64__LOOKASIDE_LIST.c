/*
 * XREFs of _lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C007FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C006A6B8 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<180224,704>::Free(&Lookaside[-1].L.ListEntry.Flink, Buffer);
}
