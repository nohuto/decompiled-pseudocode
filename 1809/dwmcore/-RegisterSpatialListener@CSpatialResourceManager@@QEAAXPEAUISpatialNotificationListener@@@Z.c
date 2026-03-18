/*
 * XREFs of ?RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180156F58
 * Callers:
 *     ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x1801CD1F0 (-OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ.c)
 *     ??0CSpatialVisualContent@@QEAA@PEAVCComposition@@_K@Z @ 0x1801DAD70 (--0CSpatialVisualContent@@QEAA@PEAVCComposition@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?EnsureSpatialCompositor@CSpatialResourceManager@@AEAAJXZ @ 0x180156C3C (-EnsureSpatialCompositor@CSpatialResourceManager@@AEAAJXZ.c)
 *     ?GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ @ 0x180156D40 (-GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ.c)
 */

void __fastcall CSpatialResourceManager::RegisterSpatialListener(
        CSpatialResourceManager *this,
        struct ISpatialNotificationListener *a2)
{
  _QWORD *v4; // rdx
  struct IDwmSpatialCompositor *SpatialCompositor; // rdx
  struct ISpatialNotificationListener *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  CSpatialResourceManager::EnsureSpatialCompositor(this);
  v4 = (_QWORD *)*((_QWORD *)this + 5);
  if ( *((_QWORD **)this + 6) == v4 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64 *)this + 4, v4, &v6);
  }
  else
  {
    *v4 = a2;
    *((_QWORD *)this + 5) += 8LL;
  }
  SpatialCompositor = CSpatialResourceManager::GetSpatialCompositor(this);
  if ( SpatialCompositor )
    (**(void (__fastcall ***)(struct ISpatialNotificationListener *, struct IDwmSpatialCompositor *))a2)(
      a2,
      SpatialCompositor);
}
