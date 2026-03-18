/*
 * XREFs of ??1CImageSourceResource@@MEAA@XZ @ 0x18019E138
 * Callers:
 *     ??_ECImageSourceResource@@MEAAPEAXI@Z @ 0x18019F140 (--_ECImageSourceResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImageSourceResource::~CImageSourceResource(CImageSourceResource *this)
{
  *(_QWORD *)this = &CImageSourceResource::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CImageSourceResource::`vftable'{for `IImageSource'};
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
