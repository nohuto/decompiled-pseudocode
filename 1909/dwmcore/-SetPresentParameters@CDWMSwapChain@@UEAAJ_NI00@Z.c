/*
 * XREFs of ?SetPresentParameters@CDWMSwapChain@@UEAAJ_NI00@Z @ 0x180163040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::SetPresentParameters(CDWMSwapChain *this, char a2, int a3, char a4, bool a5)
{
  *((_BYTE *)this + 516) = a2;
  *((_DWORD *)this + 130) = a3;
  *((_BYTE *)this + 517) = a4;
  if ( a5 )
    *((_BYTE *)this + 518) = 1;
  return 0LL;
}
