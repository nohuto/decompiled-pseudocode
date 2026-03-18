/*
 * XREFs of ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C005E614
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C005D594 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C005E680 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 */

bool __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(__int64 a1)
{
  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 48),
    lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX___,
    lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void____LOOKASIDE_LIST_EX___,
    (POOL_TYPE)512,
    2u,
    0x90uLL,
    0x616C6947u,
    0x100u);
  return (unsigned __int8)NSInstrumentation::CTypeIsolation<36864,144>::Initialize(a1) != 0;
}
