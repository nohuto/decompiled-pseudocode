/*
 * XREFs of ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1804199DC
 * Callers:
 *     _lambda_2ae8870d6bc816a04ba0e39f1c502364_::operator() @ 0x18041956C (_lambda_2ae8870d6bc816a04ba0e39f1c502364_--operator().c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180419AD4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x180416EF0 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
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
