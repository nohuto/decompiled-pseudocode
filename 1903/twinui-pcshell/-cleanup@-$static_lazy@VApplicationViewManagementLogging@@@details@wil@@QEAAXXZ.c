/*
 * XREFs of ?cleanup@?$static_lazy@VApplicationViewManagementLogging@@@details@wil@@QEAAXXZ @ 0x180157BBC
 * Callers:
 *     _lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_ @ 0x180153130 (_lambda_9a0e71fa5596e2c383ee2a905b77935f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<ApplicationViewManagementLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
