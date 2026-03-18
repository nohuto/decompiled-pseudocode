/*
 * XREFs of ?IsUsingOverlays@CDWMSwapChain@@UEBA_NXZ @ 0x180204290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsUsingOverlays(CDWMSwapChain *this)
{
  return *((_DWORD *)this + 135) != 0;
}
