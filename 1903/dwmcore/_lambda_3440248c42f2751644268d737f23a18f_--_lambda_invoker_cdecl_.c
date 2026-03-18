/*
 * XREFs of _lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_ @ 0x1801BFA20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801BFA58 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 */

__int64 __fastcall lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_(void *a1)
{
  CAnimationLoggingManager::DeferredSendDebugStart(
    *(CAnimationLoggingManager **)a1,
    *((_DWORD *)a1 + 2),
    *((_QWORD *)a1 + 2),
    *((_DWORD *)a1 + 6));
  operator delete(a1);
  return 0LL;
}
