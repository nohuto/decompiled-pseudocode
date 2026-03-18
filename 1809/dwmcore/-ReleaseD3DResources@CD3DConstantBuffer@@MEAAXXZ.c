/*
 * XREFs of ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x180079A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD3DConstantBuffer::ReleaseD3DResources(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 15);
}
