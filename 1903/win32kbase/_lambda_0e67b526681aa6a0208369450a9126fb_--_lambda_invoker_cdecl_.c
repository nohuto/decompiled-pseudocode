/*
 * XREFs of _lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_ @ 0x1C01602A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_(
        CInputDest *a1,
        __int64 a2,
        __int64 a3)
{
  CInputDest::SetEmpty(a1, a2, a3);
  Win32FreePool((__int64)a1);
}
