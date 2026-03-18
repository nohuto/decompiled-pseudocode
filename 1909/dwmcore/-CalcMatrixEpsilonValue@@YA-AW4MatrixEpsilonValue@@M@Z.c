/*
 * XREFs of ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x1800154AC
 * Callers:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18001543C (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 * Callees:
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 */

__int64 __fastcall CalcMatrixEpsilonValue(float a1)
{
  bool v1; // al
  unsigned int v2; // ecx

  v1 = IsCloseRealZero(a1, 0.000081380211);
  v2 = 0;
  if ( !v1 )
  {
    v2 = -1;
    if ( a1 > 0.0 )
      return 1;
  }
  return v2;
}
