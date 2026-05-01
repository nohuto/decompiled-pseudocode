/*
 * XREFs of ?cleanup@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAXXZ @ 0x1801A09C4
 * Callers:
 *     _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_ @ 0x18019AC10 (_lambda_06f5e94c872aa149ebfb08f8c984f403_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<SingleViewExperienceLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
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
