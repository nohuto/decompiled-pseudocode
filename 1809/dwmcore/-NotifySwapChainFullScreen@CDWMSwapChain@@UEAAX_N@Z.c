/*
 * XREFs of ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x1800E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::NotifySwapChainFullScreen(CDWMSwapChain *this, char a2)
{
  *((_BYTE *)this + 572) = a2;
}
