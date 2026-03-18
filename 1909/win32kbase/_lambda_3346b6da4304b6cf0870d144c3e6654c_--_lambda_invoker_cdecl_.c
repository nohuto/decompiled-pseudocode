/*
 * XREFs of _lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_ @ 0x1C0131EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0058A7C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00B0C50 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 */

void __fastcall lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 i; // rbx

  InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)a1);
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)i);
}
