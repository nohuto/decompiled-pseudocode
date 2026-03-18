/*
 * XREFs of ?GetVBlankEvent@CDWMSwapChain@@UEAAJPEAPEAX@Z @ 0x1800E7A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetVBlankEvent(CDWMSwapChain *this, void **a2)
{
  *a2 = (void *)*((_QWORD *)this + 58);
  return 0LL;
}
