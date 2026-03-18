/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180193E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::Initialize(CRenderTargetManager ***this)
{
  return CComposition::AddRenderTarget(this[2], (struct CRenderTarget *)this);
}
