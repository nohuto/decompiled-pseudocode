/*
 * XREFs of ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1803B70DC
 * Callers:
 *     _lambda_a6e095e96b82d37a4e0810b2bac7ffb3_::operator() @ 0x1803B6C6C (_lambda_a6e095e96b82d37a4e0810b2bac7ffb3_--operator().c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1803B71D4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x1803B46F0 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 */

__int64 __fastcall DPIToPPIHelpers::ScaleByPPI(unsigned int a1, HWND a2, int a3)
{
  HWND v6; // rcx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  int nNumerator; // [rsp+40h] [rbp+8h] BYREF
  int nDenominator; // [rsp+58h] [rbp+20h] BYREF

  if ( MonitorFromWindow(a2, 2u) || ResultFromKnownLastError() >= 0 )
  {
    if ( a3 == 1 )
    {
      SHComputeDPI(v6, &nDenominator, v8);
      a1 = MulDiv(a1, 96, nDenominator);
    }
    nNumerator = 100;
    if ( (int)GetScaleFactorForWindow(a2, &nNumerator) >= 0 )
      return (unsigned int)MulDiv(a1, nNumerator, 100);
  }
  return a1;
}
