/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_::Invoke @ 0x18011D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180043818 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625______ptr64_::Invoke(__int64 a1)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(*(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 56));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
