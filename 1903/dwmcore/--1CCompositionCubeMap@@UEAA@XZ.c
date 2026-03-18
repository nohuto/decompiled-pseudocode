/*
 * XREFs of ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801CFD8C
 * Callers:
 *     ??_GCCompositionCubeMap@@UEAAPEAXI@Z @ 0x1801CFDF0 (--_GCCompositionCubeMap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18007EF74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801D06DC (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 */

void __fastcall CCompositionCubeMap::~CCompositionCubeMap(CCompositionCubeMap *this)
{
  *(_QWORD *)this = &CCompositionCubeMap::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionCubeMap::`vftable'{for `ICompositionSurfaceInfoListener'};
  CCompositionCubeMap::ReleaseResources(this);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 10);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
