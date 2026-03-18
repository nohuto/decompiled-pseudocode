/*
 * XREFs of _lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_ @ 0x1C010C720
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_(CInputDest *a1)
{
  CInputDest::SetEmpty(a1);
  return Win32FreePool((__int64)a1);
}
