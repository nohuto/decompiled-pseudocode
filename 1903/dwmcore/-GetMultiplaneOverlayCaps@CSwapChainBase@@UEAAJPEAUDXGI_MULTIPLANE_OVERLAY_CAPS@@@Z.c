/*
 * XREFs of ?GetMultiplaneOverlayCaps@CSwapChainBase@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800D9E70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CSwapChainBase::GetMultiplaneOverlayCaps(
        CSwapChainBase *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  memset_0(a2, 0, 0x2CuLL);
  return 0LL;
}
