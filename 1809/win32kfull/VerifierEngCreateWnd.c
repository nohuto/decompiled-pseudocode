/*
 * XREFs of VerifierEngCreateWnd @ 0x1C0282250
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateWnd @ 0x1C026B3C0 (EngCreateWnd.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0281D14 (-VerifierRandomFailure@@YAHK@Z.c)
 */

WNDOBJ *__fastcall VerifierEngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateWnd(pso, hwnd, pfn, fl, iPixelFormat);
}
