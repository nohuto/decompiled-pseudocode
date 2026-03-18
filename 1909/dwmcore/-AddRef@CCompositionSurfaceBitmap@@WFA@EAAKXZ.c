/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800F0CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 80));
}
