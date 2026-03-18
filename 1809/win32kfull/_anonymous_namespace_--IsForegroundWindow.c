/*
 * XREFs of _anonymous_namespace_::IsForegroundWindow @ 0x1C000B6D4
 * Callers:
 *     _lambda_fb16448920153f6d07666723336f7afd_::_lambda_invoker_cdecl_ @ 0x1C000B670 (_lambda_fb16448920153f6d07666723336f7afd_--_lambda_invoker_cdecl_.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01C31C0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsForegroundWindow(__int64 a1)
{
  return gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) && *(_QWORD *)(gpqForeground + 120LL) == a1;
}
