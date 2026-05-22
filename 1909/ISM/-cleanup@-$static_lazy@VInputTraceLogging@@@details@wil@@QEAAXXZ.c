/*
 * XREFs of ?cleanup@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAXXZ @ 0x18007B890
 * Callers:
 *     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_ @ 0x180030350 (_lambda_a8e7baa2fca040c17c3e795f3590cb07_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<InputTraceLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
