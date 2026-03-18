/*
 * XREFs of ?QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CMILCOMBase *)(a1 - 24), a2, a3);
}
