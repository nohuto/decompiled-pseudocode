/*
 * XREFs of ?cleanup@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAXXZ @ 0x1802F6D3C
 * Callers:
 *     _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_ @ 0x1802F0B00 (_lambda_23ce349ad8b1303b9752fca832f8f7b0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<LauncherTelemetryLogging>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
