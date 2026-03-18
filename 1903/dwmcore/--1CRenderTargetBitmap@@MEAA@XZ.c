/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180047E54
 * Callers:
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180022830 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180047D60 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800D7860 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x180047EDC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CRenderTargetBitmap::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 96);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
