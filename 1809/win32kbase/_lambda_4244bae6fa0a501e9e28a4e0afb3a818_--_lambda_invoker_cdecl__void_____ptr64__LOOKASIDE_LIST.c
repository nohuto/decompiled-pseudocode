/*
 * XREFs of _lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C0081400
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C006DABC (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_(
        __int64 Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<36864,144>::Free(&Lookaside[-1].L.ListEntry.Flink, Buffer);
}
