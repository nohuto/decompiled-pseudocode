/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::Invoke @ 0x180165900
 * Callers:
 *     <none>
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18003C528 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____::Invoke(__int64 a1)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(*(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 56));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
