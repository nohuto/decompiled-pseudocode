/*
 * XREFs of ?cleanup@?$static_lazy@VCAppManagerLogging@@@details@wil@@QEAAXXZ @ 0x1800FA7F8
 * Callers:
 *     _lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_ @ 0x1800E82D0 (_lambda_cadbad287469a7d6ee344248b165db13_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<CAppManagerLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
