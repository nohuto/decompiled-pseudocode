/*
 * XREFs of ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800E9264
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800E92D4 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::`scalar deleting destructor'(CSurfaceShaderComposer *this)
{
  CD3DSurface *v2; // rcx

  v2 = (CD3DSurface *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    CD3DSurface::Release(v2);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 6);
  `vector destructor iterator'(
    (char *)this,
    8LL,
    6LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  operator delete(this, 0x68uLL);
  return this;
}
