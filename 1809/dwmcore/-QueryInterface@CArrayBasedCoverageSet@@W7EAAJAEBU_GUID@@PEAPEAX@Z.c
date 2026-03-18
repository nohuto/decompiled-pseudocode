/*
 * XREFs of ?QueryInterface@CArrayBasedCoverageSet@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CRenderTargetImageSource::QueryInterface((CRenderTargetImageSource *)(a1 - 8), a2, a3);
}
