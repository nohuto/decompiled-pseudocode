/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CDWMSwapChain@@UEAA_NXZ @ 0x1800D9DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::NeedsSwapChainFullScreenNotification(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 579);
}
