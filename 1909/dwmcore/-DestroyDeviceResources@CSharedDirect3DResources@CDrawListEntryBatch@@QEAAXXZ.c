/*
 * XREFs of ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x18002CE38
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x18002CD2C (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(
        CDrawListEntryBatch::CSharedDirect3DResources *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 14) = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 15);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 38) = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 88);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 120);
}
