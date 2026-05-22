/*
 * XREFs of _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_ @ 0x18000A8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_()
{
  _QWORD *v0; // rbx
  bool v1; // zf
  __int64 v2; // rbx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) && !fPending )
  {
    v0 = Context;
    v1 = *((_BYTE *)Context + 16) == 0;
    *(_QWORD *)Context = &wil::TraceLoggingProvider::`vftable';
    if ( !v1 )
    {
      v2 = v0[1];
      EventUnregister(*(_QWORD *)(v2 + 32));
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)v2 = 0;
    }
  }
}
