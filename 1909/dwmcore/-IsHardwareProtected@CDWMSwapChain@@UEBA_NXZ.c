/*
 * XREFs of ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x1800DAA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsHardwareProtected(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 576);
}
