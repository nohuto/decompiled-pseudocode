/*
 * XREFs of ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1801D144C
 * Callers:
 *     ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x1801D1500 (--_GCCompositionMipmapSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C4D0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x1801D1C08 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 */

void __fastcall CCompositionMipmapSurface::~CCompositionMipmapSurface(CCompositionMipmapSurface *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CCompositionMipmapSurface::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionMipmapSurface::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CCompositionMipmapSurface::`vftable'{for `ISceneNotificationListener'};
  CCompositionMipmapSurface::ReleaseResources(this);
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
    (CCompositionMipmapSurface *)((char *)this + 80));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 18);
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 13) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
