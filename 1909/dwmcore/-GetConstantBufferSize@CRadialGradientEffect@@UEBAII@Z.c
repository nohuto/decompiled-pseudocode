/*
 * XREFs of ?GetConstantBufferSize@CRadialGradientEffect@@UEBAII@Z @ 0x180258250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRadialGradientEffect::GetConstantBufferSize(CRadialGradientEffect *this)
{
  return *((_BYTE *)this + 44) != 0 ? 8 : 32;
}
