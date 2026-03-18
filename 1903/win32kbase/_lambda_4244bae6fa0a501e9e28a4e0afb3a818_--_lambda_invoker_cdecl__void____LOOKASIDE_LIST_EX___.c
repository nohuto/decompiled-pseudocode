/*
 * XREFs of _lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void____LOOKASIDE_LIST_EX___ @ 0x1C0095600
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012FC5C (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void____LOOKASIDE_LIST_EX___(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<36864,144>::Free(&Lookaside[-1].L.AllocateEx, Buffer);
}
