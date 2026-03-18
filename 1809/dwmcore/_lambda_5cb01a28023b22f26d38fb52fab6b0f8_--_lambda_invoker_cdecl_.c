/*
 * XREFs of _lambda_5cb01a28023b22f26d38fb52fab6b0f8_::_lambda_invoker_cdecl_ @ 0x18018AB60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800EF09C (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x18018AB94 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 */

__int64 __fastcall lambda_5cb01a28023b22f26d38fb52fab6b0f8_::_lambda_invoker_cdecl_(CD3DResourceSourceReference *this)
{
  CAnimationLoggingManager::DeferredSendDebugStart(
    *(CAnimationLoggingManager **)this,
    *((_DWORD *)this + 2),
    *((_QWORD *)this + 2),
    *((_DWORD *)this + 6));
  CD3DResourceSourceReference::`scalar deleting destructor'(this);
  return 0LL;
}
