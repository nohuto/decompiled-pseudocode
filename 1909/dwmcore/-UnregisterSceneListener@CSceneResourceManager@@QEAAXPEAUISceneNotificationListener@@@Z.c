/*
 * XREFs of ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017ADD0
 * Callers:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180033290 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1801CFCE4 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x1801F4FD0 (--1CSceneMesh@@MEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1801F6AA0 (--1CSceneMaterial@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1801F8748 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801F9080 (-DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180204130 (--1CSceneWorld@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017AB54 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

void __fastcall CSceneResourceManager::UnregisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  struct ISceneNotificationListener **i; // rbx
  __int64 v4; // rdx
  struct ISpectreRenderer *SpectreRenderer; // rcx
  __int64 v6; // r8

  for ( i = (struct ISceneNotificationListener **)*((_QWORD *)this + 4);
        i != *((struct ISceneNotificationListener ***)this + 5) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != *((struct ISceneNotificationListener ***)this + 5) )
  {
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
      (*(void (__fastcall **)(__int64, struct ISpectreRenderer *))(*(_QWORD *)v4 + 8LL))(v6, SpectreRenderer);
    memmove_0(i, i + 1, *((_QWORD *)this + 5) - (_QWORD)(i + 1));
    *((_QWORD *)this + 5) -= 8LL;
  }
}
