/*
 * XREFs of ?GetShaderResourceView@CHwTextureRenderTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800CFD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CHwTextureRenderTarget::GetShaderResourceView(CHwTextureRenderTarget *this)
{
  return (struct ID3D11ShaderResourceView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this - 2)
                                                                                           + 120LL)
                                                                               + 32LL))(*((_QWORD *)this - 2) + 120LL);
}
