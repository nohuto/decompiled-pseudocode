/*
 * XREFs of ?cleanup@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAXXZ @ 0x1800BD464
 * Callers:
 *     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_ @ 0x1800BCD10 (_lambda_b4cb8953ddd9016186cd5ae31274160b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<AudioSrvTelemetryProvider>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
