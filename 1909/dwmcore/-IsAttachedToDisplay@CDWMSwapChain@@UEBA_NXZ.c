/*
 * XREFs of ?IsAttachedToDisplay@CDWMSwapChain@@UEBA_NXZ @ 0x180162D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsAttachedToDisplay(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 54) != 0LL;
}
