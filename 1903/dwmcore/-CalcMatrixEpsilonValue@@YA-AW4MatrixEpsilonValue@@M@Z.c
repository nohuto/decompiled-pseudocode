/*
 * XREFs of ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x1800170FC
 * Callers:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18001708C (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcMatrixEpsilonValue(float a1)
{
  float v1; // xmm2_4
  __int64 result; // rax

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  if ( v1 < 0.000081380211 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( a1 > 0.0 )
    return 1LL;
  return result;
}
