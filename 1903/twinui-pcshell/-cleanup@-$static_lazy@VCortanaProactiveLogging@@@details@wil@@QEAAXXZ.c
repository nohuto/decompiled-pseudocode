/*
 * XREFs of ?cleanup@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAXXZ @ 0x180181904
 * Callers:
 *     _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_ @ 0x18017BAF0 (_lambda_0a4c5659e8368aeb314f53434332ab54_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<CortanaProactiveLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
