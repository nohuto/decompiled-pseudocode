/*
 * XREFs of ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x1800CF2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x1800CF32C (--1CD3DPixelShader@@MEAA@XZ.c)
 */

CD3DPixelShader *__fastcall CD3DPixelShader::`vector deleting destructor'(CD3DPixelShader *this, char a2)
{
  CD3DPixelShader::~CD3DPixelShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
