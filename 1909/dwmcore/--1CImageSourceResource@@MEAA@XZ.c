/*
 * XREFs of ??1CImageSourceResource@@MEAA@XZ @ 0x18019C878
 * Callers:
 *     ??_ECImageSourceResource@@MEAAPEAXI@Z @ 0x18019D880 (--_ECImageSourceResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImageSourceResource::~CImageSourceResource(CImageSourceResource *this)
{
  *(_QWORD *)this = &CImageSourceResource::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CImageSourceResource::`vftable'{for `IImageSource'};
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
