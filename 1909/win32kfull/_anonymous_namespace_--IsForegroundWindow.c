/*
 * XREFs of _anonymous_namespace_::IsForegroundWindow @ 0x1C013A224
 * Callers:
 *     _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C013A1C0 (_lambda_483a8efb490f6fe72acc053c62272df4_--_lambda_invoker_cdecl_.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6378 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsForegroundWindow(__int64 a1)
{
  return gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) && *(_QWORD *)(gpqForeground + 128LL) == a1;
}
