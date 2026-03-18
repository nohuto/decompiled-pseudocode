/*
 * XREFs of ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x18018EDE8
 * Callers:
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x18018E4EC (--1CCompositionCubeMap@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180065D48 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18018EA70 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionCubeMap::ReleaseResources(CCompositionCubeMap *this)
{
  unsigned int i; // edi
  __int64 v3; // r14
  __int64 v4; // rsi
  struct CResource *v5; // rdx

  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v3 = *((_QWORD *)this + 10);
    v4 = 32LL * i;
    v5 = *(struct CResource **)(v3 + v4);
    if ( v5 )
    {
      CResource::UnRegisterNotifierInternal(this, v5);
      *(_QWORD *)(v3 + 32LL * i) = 0LL;
      Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease((CGdiSpriteBitmap **)(v4
                                                                                             + *((_QWORD *)this + 10)
                                                                                             + 8LL));
    }
  }
  *((_DWORD *)this + 26) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 80, 0x20u);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
}
