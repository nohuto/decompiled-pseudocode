/*
 * XREFs of ?cleanup@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAXXZ @ 0x180112BA0
 * Callers:
 *     _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_ @ 0x180106A90 (_lambda_e53bbca54556f26c08250baf48169049_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<TabShellTelemetryProvider>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`TabShellTelemetryProvider::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
