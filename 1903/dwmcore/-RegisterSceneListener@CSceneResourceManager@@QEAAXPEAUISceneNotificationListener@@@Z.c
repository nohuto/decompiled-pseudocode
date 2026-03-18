/*
 * XREFs of ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C308
 * Callers:
 *     ??0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18019DB54 (--0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801C7B20 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1801D1990 (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x1801F65C4 (--0CSceneMesh@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x1801F9DD4 (--0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z.c)
 *     ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x1801FA7C0 (-OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@@Z @ 0x1802056B8 (--0CSceneWorld@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180162680 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017C254 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

void __fastcall CSceneResourceManager::RegisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  _BYTE *v4; // rdx
  char *v5; // rcx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  struct ISceneNotificationListener *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = (_BYTE *)*((_QWORD *)this + 5);
  v5 = (char *)this + 32;
  if ( *((_BYTE **)v5 + 2) == v4 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64)v5, v4, &v7);
  }
  else
  {
    *(_QWORD *)v4 = a2;
    *((_QWORD *)v5 + 1) += 8LL;
  }
  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
  if ( SpectreRenderer )
    (**(void (__fastcall ***)(struct ISceneNotificationListener *, struct ISpectreRenderer *))a2)(a2, SpectreRenderer);
}
