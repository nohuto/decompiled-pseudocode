/*
 * XREFs of ?GetShaderResourceView@CD3DSurface@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x1800E76A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CD3DSurface::GetShaderResourceView(CD3DSurface *this)
{
  return (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 10);
}
