/*
 * XREFs of DPIToPPIHelpers::DrawThemeTextExLambda__lambda_a6e095e96b82d37a4e0810b2bac7ffb3___ @ 0x1803B6BA0
 * Callers:
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x1803B6E3C (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

HRESULT __fastcall DPIToPPIHelpers::DrawThemeTextExLambda__lambda_a6e095e96b82d37a4e0810b2bac7ffb3___(
        HTHEME hTheme,
        HDC hdc,
        __int64 a3,
        int a4,
        LPCWSTR pszText,
        int cchText,
        DWORD dwTextFlags,
        LPRECT pRect,
        DTTOPTS *a9,
        LPARAM a10)
{
  DTTOPTS *pOptions; // r8
  _DWORD v15[20]; // [rsp+50h] [rbp-58h] BYREF

  memset_0(v15, 0, 0x48uLL);
  pOptions = (DTTOPTS *)v15;
  v15[0] = 72;
  if ( a9 )
    pOptions = a9;
  pOptions->dwFlags |= 0x3000u;
  pOptions->pfnDrawTextCallback = (DTT_CALLBACK_PROC)CCLambdaAdapter<int (*)(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64),6>::Adapt<_lambda_a6e095e96b82d37a4e0810b2bac7ffb3_>;
  pOptions->lParam = a10;
  return DrawThemeTextEx(hTheme, hdc, 14, a4, pszText, cchText, dwTextFlags, pRect, pOptions);
}
