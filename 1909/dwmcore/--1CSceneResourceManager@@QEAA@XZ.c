/*
 * XREFs of ??1CSceneResourceManager@@QEAA@XZ @ 0x18017A424
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18017AC70 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017B0F4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18017B1AC (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

void __fastcall CSceneResourceManager::~CSceneResourceManager(void **this)
{
  void *v2; // rcx
  CMILPoolResource *v3; // rcx
  HMODULE v4; // rcx

  *this = &CSceneResourceManager::`vftable';
  CSceneResourceManager::ReleaseSceneCompositor((CSceneResourceManager *)this);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::clear(this + 7);
  std::_Deallocate<16,0>(this[7], 0x30uLL);
  v2 = this[4];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((_BYTE *)this[6] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[4] = 0LL;
    this[5] = 0LL;
    this[6] = 0LL;
  }
  v3 = (CMILPoolResource *)this[3];
  if ( v3 )
    CMILPoolResource::Release(v3);
  v4 = (HMODULE)this[2];
  if ( v4 )
    FreeLibrary(v4);
}
