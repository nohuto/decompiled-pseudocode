/*
 * XREFs of ??1CBitmapResource@@MEAA@XZ @ 0x18004AD8C
 * Callers:
 *     ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18004AC64 (--_GCBitmapResource@@MEAAPEAXI@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1800D536C (--1CHwndBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  *(_QWORD *)this = &CBitmapResource::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CBitmapResource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CBitmapResource::`vftable'{for `CContent'};
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  CResource::~CResource((CBitmapResource *)((char *)this + 16));
}
