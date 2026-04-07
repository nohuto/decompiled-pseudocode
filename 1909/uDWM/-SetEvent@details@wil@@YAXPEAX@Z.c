/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180079F58
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180041424 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     _lambda_d10d8a4b96f47c58ecefc665244380ef_::_lambda_invoker_cdecl_ @ 0x1800793C0 (_lambda_d10d8a4b96f47c58ecefc665244380ef_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_890942bf62097d6c778291458fa4014d__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180079610 (wistd--__function--__func__lambda_890942bf62097d6c778291458fa4014d__void___cdecl(en_ea_180079610.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800786F8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8E6, v2, v3);
    __debugbreak();
  }
}
