/*
 * XREFs of ??1CSpatialResourceManager@@QEAA@XZ @ 0x180156B48
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4 (-ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801574A0 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1801575A0 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

void __fastcall CSpatialResourceManager::~CSpatialResourceManager(void **this)
{
  void *v2; // rcx
  CD3DSurface *v3; // rcx
  HMODULE v4; // rcx

  *this = &CSpatialResourceManager::`vftable';
  CSpatialResourceManager::ReleaseSpatialCompositor((CSpatialResourceManager *)this);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::clear(this + 7);
  std::_Deallocate<16,0>(this[7], 0x30uLL);
  v2 = this[4];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((_BYTE *)this[6] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[4] = 0LL;
    this[5] = 0LL;
    this[6] = 0LL;
  }
  v3 = (CD3DSurface *)this[3];
  if ( v3 )
    CD3DSurface::Release(v3);
  v4 = (HMODULE)this[2];
  if ( v4 )
    FreeLibrary(v4);
}
