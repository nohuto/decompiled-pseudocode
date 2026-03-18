/*
 * XREFs of ?IsTransitioningHardwareProtection@CDWMSwapChain@@UEBA_NXZ @ 0x180162D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsTransitioningHardwareProtection(CDWMSwapChain *this)
{
  return *((_DWORD *)this + 148) != 0;
}
