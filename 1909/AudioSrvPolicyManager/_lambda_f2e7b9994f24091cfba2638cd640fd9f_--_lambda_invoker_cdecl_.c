/*
 * XREFs of _lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_ @ 0x180004AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
