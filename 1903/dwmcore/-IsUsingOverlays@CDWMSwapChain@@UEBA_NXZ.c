/*
 * XREFs of ?IsUsingOverlays@CDWMSwapChain@@UEBA_NXZ @ 0x180164470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsUsingOverlays(CDWMSwapChain *this)
{
  return *((_DWORD *)this + 137) != 0;
}
