/*
 * XREFs of ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x1803B717C
 * Callers:
 *     _lambda_a6e095e96b82d37a4e0810b2bac7ffb3_::operator() @ 0x1803B6C6C (_lambda_a6e095e96b82d37a4e0810b2bac7ffb3_--operator().c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1803B71D4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x1803B46F0 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 */

int __fastcall DPIToPPIHelpers::ScaleBySpecificDPI(HWND a1, int a2, int a3)
{
  int v4; // ebx
  int nDenominator; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = (int)a1;
  if ( a3 == 1 )
  {
    SHComputeDPI(a1, &nDenominator, &v7);
    v4 = MulDiv(v4, 96, nDenominator);
  }
  return MulDiv(v4, a2, 96);
}
