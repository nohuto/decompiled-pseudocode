/*
 * XREFs of ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x1800D9DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::NotifySwapChainFullScreen(CDWMSwapChain *this, char a2)
{
  *((_BYTE *)this + 580) = a2;
}
