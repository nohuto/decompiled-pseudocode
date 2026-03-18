/*
 * XREFs of ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C008FA70
 * Callers:
 *     ?Create@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0CMAAA@$0CMA@@2@XZ @ 0x1C008F960 (-Create@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV-$CTypeIsolation@$0CMA.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008FADC (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 */

bool __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(__int64 a1)
{
  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 48),
    lambda_9de5ad5352d5075be9212076aeab69f1_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX___,
    lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl__void____LOOKASIDE_LIST_EX___,
    (POOL_TYPE)512,
    2u,
    0x2C0uLL,
    0x616C6947u,
    0x100u);
  return (unsigned __int8)NSInstrumentation::CTypeIsolation<180224,704>::Initialize(a1) != 0;
}
