/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800BF234
 * Callers:
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180020C60 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800BEF20 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x1800BF140 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800BF2BC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
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
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 96);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
